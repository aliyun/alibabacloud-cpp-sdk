// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCOUNTATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCOUNTATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetAccountAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccountAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(LogEnabled, logEnabled_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(MessageTraceEnabled, messageTraceEnabled_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccountAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(LogEnabled, logEnabled_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(MessageTraceEnabled, messageTraceEnabled_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    SetAccountAttributesRequest() = default ;
    SetAccountAttributesRequest(const SetAccountAttributesRequest &) = default ;
    SetAccountAttributesRequest(SetAccountAttributesRequest &&) = default ;
    SetAccountAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccountAttributesRequest() = default ;
    SetAccountAttributesRequest& operator=(const SetAccountAttributesRequest &) = default ;
    SetAccountAttributesRequest& operator=(SetAccountAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->logEnabled_ == nullptr && this->logStoreName_ == nullptr && this->messageTraceEnabled_ == nullptr && this->projectName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetAccountAttributesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // logEnabled Field Functions 
    bool hasLogEnabled() const { return this->logEnabled_ != nullptr;};
    void deleteLogEnabled() { this->logEnabled_ = nullptr;};
    inline bool getLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(logEnabled_, false) };
    inline SetAccountAttributesRequest& setLogEnabled(bool logEnabled) { DARABONBA_PTR_SET_VALUE(logEnabled_, logEnabled) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline SetAccountAttributesRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // messageTraceEnabled Field Functions 
    bool hasMessageTraceEnabled() const { return this->messageTraceEnabled_ != nullptr;};
    void deleteMessageTraceEnabled() { this->messageTraceEnabled_ = nullptr;};
    inline bool getMessageTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(messageTraceEnabled_, false) };
    inline SetAccountAttributesRequest& setMessageTraceEnabled(bool messageTraceEnabled) { DARABONBA_PTR_SET_VALUE(messageTraceEnabled_, messageTraceEnabled) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SetAccountAttributesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // Ensures the idempotence of the request. Generate a parameter value from your client to ensure that the value is unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the log management feature.
    shared_ptr<bool> logEnabled_ {};
    // The name of the Simple Log Service Logstore.
    shared_ptr<string> logStoreName_ {};
    // Specifies whether to enable the message trace feature.
    shared_ptr<bool> messageTraceEnabled_ {};
    // The name of the Simple Log Service project.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
