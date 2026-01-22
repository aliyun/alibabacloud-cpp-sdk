// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    CheckCloudResourceAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationState_ == nullptr
        && this->roleArn_ == nullptr; };
      // authorizationState Field Functions 
      bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
      void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
      inline string getAuthorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, "") };
      inline Data& setAuthorizationState(string authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Data& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    protected:
      shared_ptr<string> authorizationState_ {};
      shared_ptr<string> roleArn_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CheckCloudResourceAuthorizedResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CheckCloudResourceAuthorizedResponseBody::Data) };
    inline CheckCloudResourceAuthorizedResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CheckCloudResourceAuthorizedResponseBody::Data) };
    inline CheckCloudResourceAuthorizedResponseBody& setData(const CheckCloudResourceAuthorizedResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckCloudResourceAuthorizedResponseBody& setData(CheckCloudResourceAuthorizedResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCloudResourceAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckCloudResourceAuthorizedResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
