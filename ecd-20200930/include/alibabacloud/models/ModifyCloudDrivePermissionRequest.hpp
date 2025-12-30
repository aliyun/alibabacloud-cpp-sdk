// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEPERMISSIONREQUEST_HPP_
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
  class ModifyCloudDrivePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudDrivePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(DownloadEndUserIds, downloadEndUserIds_);
      DARABONBA_PTR_TO_JSON(DownloadUploadEndUserIds, downloadUploadEndUserIds_);
      DARABONBA_PTR_TO_JSON(NoDownloadNoUploadEndUserIds, noDownloadNoUploadEndUserIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudDrivePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(DownloadEndUserIds, downloadEndUserIds_);
      DARABONBA_PTR_FROM_JSON(DownloadUploadEndUserIds, downloadUploadEndUserIds_);
      DARABONBA_PTR_FROM_JSON(NoDownloadNoUploadEndUserIds, noDownloadNoUploadEndUserIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCloudDrivePermissionRequest() = default ;
    ModifyCloudDrivePermissionRequest(const ModifyCloudDrivePermissionRequest &) = default ;
    ModifyCloudDrivePermissionRequest(ModifyCloudDrivePermissionRequest &&) = default ;
    ModifyCloudDrivePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudDrivePermissionRequest() = default ;
    ModifyCloudDrivePermissionRequest& operator=(const ModifyCloudDrivePermissionRequest &) = default ;
    ModifyCloudDrivePermissionRequest& operator=(ModifyCloudDrivePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->downloadEndUserIds_ == nullptr && this->downloadUploadEndUserIds_ == nullptr && this->noDownloadNoUploadEndUserIds_ == nullptr && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ModifyCloudDrivePermissionRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // downloadEndUserIds Field Functions 
    bool hasDownloadEndUserIds() const { return this->downloadEndUserIds_ != nullptr;};
    void deleteDownloadEndUserIds() { this->downloadEndUserIds_ = nullptr;};
    inline const vector<string> & getDownloadEndUserIds() const { DARABONBA_PTR_GET_CONST(downloadEndUserIds_, vector<string>) };
    inline vector<string> getDownloadEndUserIds() { DARABONBA_PTR_GET(downloadEndUserIds_, vector<string>) };
    inline ModifyCloudDrivePermissionRequest& setDownloadEndUserIds(const vector<string> & downloadEndUserIds) { DARABONBA_PTR_SET_VALUE(downloadEndUserIds_, downloadEndUserIds) };
    inline ModifyCloudDrivePermissionRequest& setDownloadEndUserIds(vector<string> && downloadEndUserIds) { DARABONBA_PTR_SET_RVALUE(downloadEndUserIds_, downloadEndUserIds) };


    // downloadUploadEndUserIds Field Functions 
    bool hasDownloadUploadEndUserIds() const { return this->downloadUploadEndUserIds_ != nullptr;};
    void deleteDownloadUploadEndUserIds() { this->downloadUploadEndUserIds_ = nullptr;};
    inline const vector<string> & getDownloadUploadEndUserIds() const { DARABONBA_PTR_GET_CONST(downloadUploadEndUserIds_, vector<string>) };
    inline vector<string> getDownloadUploadEndUserIds() { DARABONBA_PTR_GET(downloadUploadEndUserIds_, vector<string>) };
    inline ModifyCloudDrivePermissionRequest& setDownloadUploadEndUserIds(const vector<string> & downloadUploadEndUserIds) { DARABONBA_PTR_SET_VALUE(downloadUploadEndUserIds_, downloadUploadEndUserIds) };
    inline ModifyCloudDrivePermissionRequest& setDownloadUploadEndUserIds(vector<string> && downloadUploadEndUserIds) { DARABONBA_PTR_SET_RVALUE(downloadUploadEndUserIds_, downloadUploadEndUserIds) };


    // noDownloadNoUploadEndUserIds Field Functions 
    bool hasNoDownloadNoUploadEndUserIds() const { return this->noDownloadNoUploadEndUserIds_ != nullptr;};
    void deleteNoDownloadNoUploadEndUserIds() { this->noDownloadNoUploadEndUserIds_ = nullptr;};
    inline const vector<string> & getNoDownloadNoUploadEndUserIds() const { DARABONBA_PTR_GET_CONST(noDownloadNoUploadEndUserIds_, vector<string>) };
    inline vector<string> getNoDownloadNoUploadEndUserIds() { DARABONBA_PTR_GET(noDownloadNoUploadEndUserIds_, vector<string>) };
    inline ModifyCloudDrivePermissionRequest& setNoDownloadNoUploadEndUserIds(const vector<string> & noDownloadNoUploadEndUserIds) { DARABONBA_PTR_SET_VALUE(noDownloadNoUploadEndUserIds_, noDownloadNoUploadEndUserIds) };
    inline ModifyCloudDrivePermissionRequest& setNoDownloadNoUploadEndUserIds(vector<string> && noDownloadNoUploadEndUserIds) { DARABONBA_PTR_SET_RVALUE(noDownloadNoUploadEndUserIds_, noDownloadNoUploadEndUserIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudDrivePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The IDs of the users who have the download permissions.
    shared_ptr<vector<string>> downloadEndUserIds_ {};
    // The IDs of the users who have the upload and download permissions.
    shared_ptr<vector<string>> downloadUploadEndUserIds_ {};
    shared_ptr<vector<string>> noDownloadNoUploadEndUserIds_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
