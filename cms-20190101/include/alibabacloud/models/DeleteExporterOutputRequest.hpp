// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXPORTEROUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXPORTEROUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteExporterOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExporterOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestName, destName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExporterOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestName, destName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteExporterOutputRequest() = default ;
    DeleteExporterOutputRequest(const DeleteExporterOutputRequest &) = default ;
    DeleteExporterOutputRequest(DeleteExporterOutputRequest &&) = default ;
    DeleteExporterOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExporterOutputRequest() = default ;
    DeleteExporterOutputRequest& operator=(const DeleteExporterOutputRequest &) = default ;
    DeleteExporterOutputRequest& operator=(DeleteExporterOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destName_ == nullptr
        && this->regionId_ == nullptr; };
    // destName Field Functions 
    bool hasDestName() const { return this->destName_ != nullptr;};
    void deleteDestName() { this->destName_ = nullptr;};
    inline string getDestName() const { DARABONBA_PTR_GET_DEFAULT(destName_, "") };
    inline DeleteExporterOutputRequest& setDestName(string destName) { DARABONBA_PTR_SET_VALUE(destName_, destName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteExporterOutputRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the configuration set.
    // 
    // This parameter is required.
    shared_ptr<string> destName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
