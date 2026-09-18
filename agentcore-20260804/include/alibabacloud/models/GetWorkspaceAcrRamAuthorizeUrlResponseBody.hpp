// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEACRRAMAUTHORIZEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEACRRAMAUTHORIZEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetWorkspaceAcrRamAuthorizeUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceAcrRamAuthorizeUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceAcrRamAuthorizeUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetWorkspaceAcrRamAuthorizeUrlResponseBody() = default ;
    GetWorkspaceAcrRamAuthorizeUrlResponseBody(const GetWorkspaceAcrRamAuthorizeUrlResponseBody &) = default ;
    GetWorkspaceAcrRamAuthorizeUrlResponseBody(GetWorkspaceAcrRamAuthorizeUrlResponseBody &&) = default ;
    GetWorkspaceAcrRamAuthorizeUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceAcrRamAuthorizeUrlResponseBody() = default ;
    GetWorkspaceAcrRamAuthorizeUrlResponseBody& operator=(const GetWorkspaceAcrRamAuthorizeUrlResponseBody &) = default ;
    GetWorkspaceAcrRamAuthorizeUrlResponseBody& operator=(GetWorkspaceAcrRamAuthorizeUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_TO_JSON(authorizeUrl, authorizeUrl_);
        DARABONBA_PTR_TO_JSON(roleName, roleName_);
        DARABONBA_PTR_TO_JSON(roleSource, roleSource_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_FROM_JSON(authorizeUrl, authorizeUrl_);
        DARABONBA_PTR_FROM_JSON(roleName, roleName_);
        DARABONBA_PTR_FROM_JSON(roleSource, roleSource_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->authorizeUrl_ == nullptr && this->roleName_ == nullptr && this->roleSource_ == nullptr && this->workspaceId_ == nullptr; };
      // acrInstanceId Field Functions 
      bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
      void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
      inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
      inline Data& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // authorizeUrl Field Functions 
      bool hasAuthorizeUrl() const { return this->authorizeUrl_ != nullptr;};
      void deleteAuthorizeUrl() { this->authorizeUrl_ = nullptr;};
      inline string getAuthorizeUrl() const { DARABONBA_PTR_GET_DEFAULT(authorizeUrl_, "") };
      inline Data& setAuthorizeUrl(string authorizeUrl) { DARABONBA_PTR_SET_VALUE(authorizeUrl_, authorizeUrl) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // roleSource Field Functions 
      bool hasRoleSource() const { return this->roleSource_ != nullptr;};
      void deleteRoleSource() { this->roleSource_ = nullptr;};
      inline string getRoleSource() const { DARABONBA_PTR_GET_DEFAULT(roleSource_, "") };
      inline Data& setRoleSource(string roleSource) { DARABONBA_PTR_SET_VALUE(roleSource_, roleSource) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ACR Enterprise instance ID.
      shared_ptr<string> acrInstanceId_ {};
      // The RAM authorization URL used to create or append ACR permissions for the shared role on the target repository.
      shared_ptr<string> authorizeUrl_ {};
      // The shared role name selected by the backend. This value is not editable on the frontend.
      shared_ptr<string> roleName_ {};
      // The source of the shared role. This value does not indicate that authorization is complete.
      shared_ptr<string> roleSource_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data) };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data) };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setData(const GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setData(GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkspaceAcrRamAuthorizeUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetWorkspaceAcrRamAuthorizeUrlResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
