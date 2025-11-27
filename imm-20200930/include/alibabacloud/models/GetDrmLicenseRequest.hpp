// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRMLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDRMLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetDRMLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDRMLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(NotifyEndpoint, notifyEndpoint_);
      DARABONBA_PTR_TO_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProtectionSystem, protectionSystem_);
    };
    friend void from_json(const Darabonba::Json& j, GetDRMLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(NotifyEndpoint, notifyEndpoint_);
      DARABONBA_PTR_FROM_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProtectionSystem, protectionSystem_);
    };
    GetDRMLicenseRequest() = default ;
    GetDRMLicenseRequest(const GetDRMLicenseRequest &) = default ;
    GetDRMLicenseRequest(GetDRMLicenseRequest &&) = default ;
    GetDRMLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDRMLicenseRequest() = default ;
    GetDRMLicenseRequest& operator=(const GetDRMLicenseRequest &) = default ;
    GetDRMLicenseRequest& operator=(GetDRMLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->notifyEndpoint_ == nullptr && return this->notifyTopicName_ == nullptr && return this->projectName_ == nullptr && return this->protectionSystem_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetDRMLicenseRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // notifyEndpoint Field Functions 
    bool hasNotifyEndpoint() const { return this->notifyEndpoint_ != nullptr;};
    void deleteNotifyEndpoint() { this->notifyEndpoint_ = nullptr;};
    inline string notifyEndpoint() const { DARABONBA_PTR_GET_DEFAULT(notifyEndpoint_, "") };
    inline GetDRMLicenseRequest& setNotifyEndpoint(string notifyEndpoint) { DARABONBA_PTR_SET_VALUE(notifyEndpoint_, notifyEndpoint) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string notifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline GetDRMLicenseRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDRMLicenseRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // protectionSystem Field Functions 
    bool hasProtectionSystem() const { return this->protectionSystem_ != nullptr;};
    void deleteProtectionSystem() { this->protectionSystem_ = nullptr;};
    inline string protectionSystem() const { DARABONBA_PTR_GET_DEFAULT(protectionSystem_, "") };
    inline GetDRMLicenseRequest& setProtectionSystem(string protectionSystem) { DARABONBA_PTR_SET_VALUE(protectionSystem_, protectionSystem) };


  protected:
    std::shared_ptr<string> keyId_ = nullptr;
    std::shared_ptr<string> notifyEndpoint_ = nullptr;
    std::shared_ptr<string> notifyTopicName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> protectionSystem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
