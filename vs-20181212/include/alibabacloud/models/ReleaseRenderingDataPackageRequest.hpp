// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASERENDERINGDATAPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASERENDERINGDATAPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ReleaseRenderingDataPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
    };
    ReleaseRenderingDataPackageRequest() = default ;
    ReleaseRenderingDataPackageRequest(const ReleaseRenderingDataPackageRequest &) = default ;
    ReleaseRenderingDataPackageRequest(ReleaseRenderingDataPackageRequest &&) = default ;
    ReleaseRenderingDataPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseRenderingDataPackageRequest() = default ;
    ReleaseRenderingDataPackageRequest& operator=(const ReleaseRenderingDataPackageRequest &) = default ;
    ReleaseRenderingDataPackageRequest& operator=(ReleaseRenderingDataPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPackageId_ != nullptr; };
    // dataPackageId Field Functions 
    bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
    void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
    inline string dataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
    inline ReleaseRenderingDataPackageRequest& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dataPackageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
