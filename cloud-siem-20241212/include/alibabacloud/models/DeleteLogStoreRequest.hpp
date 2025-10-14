// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteLogStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DeleteLogStoreRequest() = default ;
    DeleteLogStoreRequest(const DeleteLogStoreRequest &) = default ;
    DeleteLogStoreRequest(DeleteLogStoreRequest &&) = default ;
    DeleteLogStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogStoreRequest() = default ;
    DeleteLogStoreRequest& operator=(const DeleteLogStoreRequest &) = default ;
    DeleteLogStoreRequest& operator=(DeleteLogStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->logUserId_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteLogStoreRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline DeleteLogStoreRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline DeleteLogStoreRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DeleteLogStoreRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline DeleteLogStoreRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLogStoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteLogStoreRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int64_t> logUserId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
