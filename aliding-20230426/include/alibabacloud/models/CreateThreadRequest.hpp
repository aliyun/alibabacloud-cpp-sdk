// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThreadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(clientEnum, clientEnum_);
      DARABONBA_PTR_TO_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_TO_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThreadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(clientEnum, clientEnum_);
      DARABONBA_PTR_FROM_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_FROM_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
    };
    CreateThreadRequest() = default ;
    CreateThreadRequest(const CreateThreadRequest &) = default ;
    CreateThreadRequest(CreateThreadRequest &&) = default ;
    CreateThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThreadRequest() = default ;
    CreateThreadRequest& operator=(const CreateThreadRequest &) = default ;
    CreateThreadRequest& operator=(CreateThreadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtLoginUser : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtLoginUser& obj) { 
        DARABONBA_PTR_TO_JSON(extLoginUserDomain, extLoginUserDomain_);
        DARABONBA_PTR_TO_JSON(extLoginUserId, extLoginUserId_);
        DARABONBA_PTR_TO_JSON(extLoginUserName, extLoginUserName_);
      };
      friend void from_json(const Darabonba::Json& j, ExtLoginUser& obj) { 
        DARABONBA_PTR_FROM_JSON(extLoginUserDomain, extLoginUserDomain_);
        DARABONBA_PTR_FROM_JSON(extLoginUserId, extLoginUserId_);
        DARABONBA_PTR_FROM_JSON(extLoginUserName, extLoginUserName_);
      };
      ExtLoginUser() = default ;
      ExtLoginUser(const ExtLoginUser &) = default ;
      ExtLoginUser(ExtLoginUser &&) = default ;
      ExtLoginUser(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtLoginUser() = default ;
      ExtLoginUser& operator=(const ExtLoginUser &) = default ;
      ExtLoginUser& operator=(ExtLoginUser &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extLoginUserDomain_ == nullptr
        && this->extLoginUserId_ == nullptr && this->extLoginUserName_ == nullptr; };
      // extLoginUserDomain Field Functions 
      bool hasExtLoginUserDomain() const { return this->extLoginUserDomain_ != nullptr;};
      void deleteExtLoginUserDomain() { this->extLoginUserDomain_ = nullptr;};
      inline string getExtLoginUserDomain() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserDomain_, "") };
      inline ExtLoginUser& setExtLoginUserDomain(string extLoginUserDomain) { DARABONBA_PTR_SET_VALUE(extLoginUserDomain_, extLoginUserDomain) };


      // extLoginUserId Field Functions 
      bool hasExtLoginUserId() const { return this->extLoginUserId_ != nullptr;};
      void deleteExtLoginUserId() { this->extLoginUserId_ = nullptr;};
      inline string getExtLoginUserId() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserId_, "") };
      inline ExtLoginUser& setExtLoginUserId(string extLoginUserId) { DARABONBA_PTR_SET_VALUE(extLoginUserId_, extLoginUserId) };


      // extLoginUserName Field Functions 
      bool hasExtLoginUserName() const { return this->extLoginUserName_ != nullptr;};
      void deleteExtLoginUserName() { this->extLoginUserName_ = nullptr;};
      inline string getExtLoginUserName() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserName_, "") };
      inline ExtLoginUser& setExtLoginUserName(string extLoginUserName) { DARABONBA_PTR_SET_VALUE(extLoginUserName_, extLoginUserName) };


    protected:
      shared_ptr<string> extLoginUserDomain_ {};
      shared_ptr<string> extLoginUserId_ {};
      shared_ptr<string> extLoginUserName_ {};
    };

    virtual bool empty() const override { return this->assistantId_ == nullptr
        && this->clientEnum_ == nullptr && this->extLoginUser_ == nullptr && this->originalAssistantId_ == nullptr && this->sourceIdOfOriginalAssistantId_ == nullptr && this->sourceTypeOfOriginalAssistantId_ == nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string getAssistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline CreateThreadRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // clientEnum Field Functions 
    bool hasClientEnum() const { return this->clientEnum_ != nullptr;};
    void deleteClientEnum() { this->clientEnum_ = nullptr;};
    inline string getClientEnum() const { DARABONBA_PTR_GET_DEFAULT(clientEnum_, "") };
    inline CreateThreadRequest& setClientEnum(string clientEnum) { DARABONBA_PTR_SET_VALUE(clientEnum_, clientEnum) };


    // extLoginUser Field Functions 
    bool hasExtLoginUser() const { return this->extLoginUser_ != nullptr;};
    void deleteExtLoginUser() { this->extLoginUser_ = nullptr;};
    inline const CreateThreadRequest::ExtLoginUser & getExtLoginUser() const { DARABONBA_PTR_GET_CONST(extLoginUser_, CreateThreadRequest::ExtLoginUser) };
    inline CreateThreadRequest::ExtLoginUser getExtLoginUser() { DARABONBA_PTR_GET(extLoginUser_, CreateThreadRequest::ExtLoginUser) };
    inline CreateThreadRequest& setExtLoginUser(const CreateThreadRequest::ExtLoginUser & extLoginUser) { DARABONBA_PTR_SET_VALUE(extLoginUser_, extLoginUser) };
    inline CreateThreadRequest& setExtLoginUser(CreateThreadRequest::ExtLoginUser && extLoginUser) { DARABONBA_PTR_SET_RVALUE(extLoginUser_, extLoginUser) };


    // originalAssistantId Field Functions 
    bool hasOriginalAssistantId() const { return this->originalAssistantId_ != nullptr;};
    void deleteOriginalAssistantId() { this->originalAssistantId_ = nullptr;};
    inline string getOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(originalAssistantId_, "") };
    inline CreateThreadRequest& setOriginalAssistantId(string originalAssistantId) { DARABONBA_PTR_SET_VALUE(originalAssistantId_, originalAssistantId) };


    // sourceIdOfOriginalAssistantId Field Functions 
    bool hasSourceIdOfOriginalAssistantId() const { return this->sourceIdOfOriginalAssistantId_ != nullptr;};
    void deleteSourceIdOfOriginalAssistantId() { this->sourceIdOfOriginalAssistantId_ = nullptr;};
    inline string getSourceIdOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfOriginalAssistantId_, "") };
    inline CreateThreadRequest& setSourceIdOfOriginalAssistantId(string sourceIdOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfOriginalAssistantId_, sourceIdOfOriginalAssistantId) };


    // sourceTypeOfOriginalAssistantId Field Functions 
    bool hasSourceTypeOfOriginalAssistantId() const { return this->sourceTypeOfOriginalAssistantId_ != nullptr;};
    void deleteSourceTypeOfOriginalAssistantId() { this->sourceTypeOfOriginalAssistantId_ = nullptr;};
    inline int32_t getSourceTypeOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeOfOriginalAssistantId_, 0) };
    inline CreateThreadRequest& setSourceTypeOfOriginalAssistantId(int32_t sourceTypeOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceTypeOfOriginalAssistantId_, sourceTypeOfOriginalAssistantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> assistantId_ {};
    shared_ptr<string> clientEnum_ {};
    shared_ptr<CreateThreadRequest::ExtLoginUser> extLoginUser_ {};
    shared_ptr<string> originalAssistantId_ {};
    shared_ptr<string> sourceIdOfOriginalAssistantId_ {};
    shared_ptr<int32_t> sourceTypeOfOriginalAssistantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
