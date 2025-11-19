// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateDesktopImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(AutoCleanUserData, autoCleanUserData_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StartUpFilePathList, startUpFilePathList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(AutoCleanUserData, autoCleanUserData_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EnableStartUpConfig, enableStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StartUpFilePathList, startUpFilePathList_);
    };
    CreateDesktopImageRequest() = default ;
    CreateDesktopImageRequest(const CreateDesktopImageRequest &) = default ;
    CreateDesktopImageRequest(CreateDesktopImageRequest &&) = default ;
    CreateDesktopImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopImageRequest() = default ;
    CreateDesktopImageRequest& operator=(const CreateDesktopImageRequest &) = default ;
    CreateDesktopImageRequest& operator=(CreateDesktopImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->autoCleanUserData_ == nullptr && return this->description_ == nullptr && return this->desktopId_ == nullptr && return this->diskType_ == nullptr && return this->enableStartUpConfig_ == nullptr
        && return this->imageName_ == nullptr && return this->sessionId_ == nullptr && return this->startUpFilePathList_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateDesktopImageRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // autoCleanUserData Field Functions 
    bool hasAutoCleanUserData() const { return this->autoCleanUserData_ != nullptr;};
    void deleteAutoCleanUserData() { this->autoCleanUserData_ = nullptr;};
    inline bool autoCleanUserData() const { DARABONBA_PTR_GET_DEFAULT(autoCleanUserData_, false) };
    inline CreateDesktopImageRequest& setAutoCleanUserData(bool autoCleanUserData) { DARABONBA_PTR_SET_VALUE(autoCleanUserData_, autoCleanUserData) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDesktopImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline CreateDesktopImageRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateDesktopImageRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // enableStartUpConfig Field Functions 
    bool hasEnableStartUpConfig() const { return this->enableStartUpConfig_ != nullptr;};
    void deleteEnableStartUpConfig() { this->enableStartUpConfig_ = nullptr;};
    inline bool enableStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(enableStartUpConfig_, false) };
    inline CreateDesktopImageRequest& setEnableStartUpConfig(bool enableStartUpConfig) { DARABONBA_PTR_SET_VALUE(enableStartUpConfig_, enableStartUpConfig) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateDesktopImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateDesktopImageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startUpFilePathList Field Functions 
    bool hasStartUpFilePathList() const { return this->startUpFilePathList_ != nullptr;};
    void deleteStartUpFilePathList() { this->startUpFilePathList_ = nullptr;};
    inline const vector<string> & startUpFilePathList() const { DARABONBA_PTR_GET_CONST(startUpFilePathList_, vector<string>) };
    inline vector<string> startUpFilePathList() { DARABONBA_PTR_GET(startUpFilePathList_, vector<string>) };
    inline CreateDesktopImageRequest& setStartUpFilePathList(const vector<string> & startUpFilePathList) { DARABONBA_PTR_SET_VALUE(startUpFilePathList_, startUpFilePathList) };
    inline CreateDesktopImageRequest& setStartUpFilePathList(vector<string> && startUpFilePathList) { DARABONBA_PTR_SET_RVALUE(startUpFilePathList_, startUpFilePathList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<bool> autoCleanUserData_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> desktopId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<bool> enableStartUpConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<vector<string>> startUpFilePathList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
