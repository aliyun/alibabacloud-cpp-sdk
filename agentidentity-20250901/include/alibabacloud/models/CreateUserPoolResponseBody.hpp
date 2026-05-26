// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateUserPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPool, userPool_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPool, userPool_);
    };
    CreateUserPoolResponseBody() = default ;
    CreateUserPoolResponseBody(const CreateUserPoolResponseBody &) = default ;
    CreateUserPoolResponseBody(CreateUserPoolResponseBody &&) = default ;
    CreateUserPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPoolResponseBody() = default ;
    CreateUserPoolResponseBody& operator=(const CreateUserPoolResponseBody &) = default ;
    CreateUserPoolResponseBody& operator=(CreateUserPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPool& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, UserPool& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      UserPool() = default ;
      UserPool(const UserPool &) = default ;
      UserPool(UserPool &&) = default ;
      UserPool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPool() = default ;
      UserPool& operator=(const UserPool &) = default ;
      UserPool& operator=(UserPool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->updateTime_ == nullptr && this->userPoolId_ == nullptr && this->userPoolName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserPool& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserPool& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline UserPool& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userPoolId Field Functions 
      bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
      void deleteUserPoolId() { this->userPoolId_ = nullptr;};
      inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
      inline UserPool& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline UserPool& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userPoolId_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userPool_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPool Field Functions 
    bool hasUserPool() const { return this->userPool_ != nullptr;};
    void deleteUserPool() { this->userPool_ = nullptr;};
    inline const CreateUserPoolResponseBody::UserPool & getUserPool() const { DARABONBA_PTR_GET_CONST(userPool_, CreateUserPoolResponseBody::UserPool) };
    inline CreateUserPoolResponseBody::UserPool getUserPool() { DARABONBA_PTR_GET(userPool_, CreateUserPoolResponseBody::UserPool) };
    inline CreateUserPoolResponseBody& setUserPool(const CreateUserPoolResponseBody::UserPool & userPool) { DARABONBA_PTR_SET_VALUE(userPool_, userPool) };
    inline CreateUserPoolResponseBody& setUserPool(CreateUserPoolResponseBody::UserPool && userPool) { DARABONBA_PTR_SET_RVALUE(userPool_, userPool) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateUserPoolResponseBody::UserPool> userPool_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
