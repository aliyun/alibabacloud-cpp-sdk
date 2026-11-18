// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDDRIVESERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDDRIVESERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteCloudDriveServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudDriveServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudDriveServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCloudDriveServicesRequest() = default ;
    DeleteCloudDriveServicesRequest(const DeleteCloudDriveServicesRequest &) = default ;
    DeleteCloudDriveServicesRequest(DeleteCloudDriveServicesRequest &&) = default ;
    DeleteCloudDriveServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudDriveServicesRequest() = default ;
    DeleteCloudDriveServicesRequest& operator=(const DeleteCloudDriveServicesRequest &) = default ;
    DeleteCloudDriveServicesRequest& operator=(DeleteCloudDriveServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline const vector<string> & getCdsId() const { DARABONBA_PTR_GET_CONST(cdsId_, vector<string>) };
    inline vector<string> getCdsId() { DARABONBA_PTR_GET(cdsId_, vector<string>) };
    inline DeleteCloudDriveServicesRequest& setCdsId(const vector<string> & cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };
    inline DeleteCloudDriveServicesRequest& setCdsId(vector<string> && cdsId) { DARABONBA_PTR_SET_RVALUE(cdsId_, cdsId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCloudDriveServicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the Wuying cloud disks.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> cdsId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
