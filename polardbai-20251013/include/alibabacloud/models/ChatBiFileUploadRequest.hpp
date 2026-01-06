// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthMessage, authMessage_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthMessage, authMessage_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ChatBIFileUploadRequest() = default ;
    ChatBIFileUploadRequest(const ChatBIFileUploadRequest &) = default ;
    ChatBIFileUploadRequest(ChatBIFileUploadRequest &&) = default ;
    ChatBIFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIFileUploadRequest() = default ;
    ChatBIFileUploadRequest& operator=(const ChatBIFileUploadRequest &) = default ;
    ChatBIFileUploadRequest& operator=(ChatBIFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authMessage_ == nullptr
        && this->authType_ == nullptr && this->fileName_ == nullptr && this->instanceName_ == nullptr; };
    // authMessage Field Functions 
    bool hasAuthMessage() const { return this->authMessage_ != nullptr;};
    void deleteAuthMessage() { this->authMessage_ = nullptr;};
    inline string getAuthMessage() const { DARABONBA_PTR_GET_DEFAULT(authMessage_, "") };
    inline ChatBIFileUploadRequest& setAuthMessage(string authMessage) { DARABONBA_PTR_SET_VALUE(authMessage_, authMessage) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ChatBIFileUploadRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ChatBIFileUploadRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIFileUploadRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    shared_ptr<string> authMessage_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
