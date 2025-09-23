// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(CrossCloudRegionId, crossCloudRegionId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionId, crossCloudRegionId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
    };
    DescribeCrossCloudRegionRequest() = default ;
    DescribeCrossCloudRegionRequest(const DescribeCrossCloudRegionRequest &) = default ;
    DescribeCrossCloudRegionRequest(DescribeCrossCloudRegionRequest &&) = default ;
    DescribeCrossCloudRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionRequest() = default ;
    DescribeCrossCloudRegionRequest& operator=(const DescribeCrossCloudRegionRequest &) = default ;
    DescribeCrossCloudRegionRequest& operator=(DescribeCrossCloudRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudProvider_ != nullptr
        && this->crossCloudRegionId_ != nullptr && this->DBType_ != nullptr; };
    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string cloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline DescribeCrossCloudRegionRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // crossCloudRegionId Field Functions 
    bool hasCrossCloudRegionId() const { return this->crossCloudRegionId_ != nullptr;};
    void deleteCrossCloudRegionId() { this->crossCloudRegionId_ = nullptr;};
    inline string crossCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionId_, "") };
    inline DescribeCrossCloudRegionRequest& setCrossCloudRegionId(string crossCloudRegionId) { DARABONBA_PTR_SET_VALUE(crossCloudRegionId_, crossCloudRegionId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeCrossCloudRegionRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


  protected:
    std::shared_ptr<string> cloudProvider_ = nullptr;
    std::shared_ptr<string> crossCloudRegionId_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
