// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupQueryUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupQueryUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupQueryUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgUserGroupQueryUserListResponseBody() = default ;
    DsgUserGroupQueryUserListResponseBody(const DsgUserGroupQueryUserListResponseBody &) = default ;
    DsgUserGroupQueryUserListResponseBody(DsgUserGroupQueryUserListResponseBody &&) = default ;
    DsgUserGroupQueryUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupQueryUserListResponseBody() = default ;
    DsgUserGroupQueryUserListResponseBody& operator=(const DsgUserGroupQueryUserListResponseBody &) = default ;
    DsgUserGroupQueryUserListResponseBody& operator=(DsgUserGroupQueryUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(BaseId, baseId_);
        DARABONBA_PTR_TO_JSON(ParentAccountId, parentAccountId_);
        DARABONBA_PTR_TO_JSON(YunAccount, yunAccount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
        DARABONBA_PTR_FROM_JSON(ParentAccountId, parentAccountId_);
        DARABONBA_PTR_FROM_JSON(YunAccount, yunAccount_);
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
      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountType_ == nullptr && this->baseId_ == nullptr && this->parentAccountId_ == nullptr && this->yunAccount_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
      inline Data& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // baseId Field Functions 
      bool hasBaseId() const { return this->baseId_ != nullptr;};
      void deleteBaseId() { this->baseId_ = nullptr;};
      inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
      inline Data& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


      // parentAccountId Field Functions 
      bool hasParentAccountId() const { return this->parentAccountId_ != nullptr;};
      void deleteParentAccountId() { this->parentAccountId_ = nullptr;};
      inline string getParentAccountId() const { DARABONBA_PTR_GET_DEFAULT(parentAccountId_, "") };
      inline Data& setParentAccountId(string parentAccountId) { DARABONBA_PTR_SET_VALUE(parentAccountId_, parentAccountId) };


      // yunAccount Field Functions 
      bool hasYunAccount() const { return this->yunAccount_ != nullptr;};
      void deleteYunAccount() { this->yunAccount_ = nullptr;};
      inline string getYunAccount() const { DARABONBA_PTR_GET_DEFAULT(yunAccount_, "") };
      inline Data& setYunAccount(string yunAccount) { DARABONBA_PTR_SET_VALUE(yunAccount_, yunAccount) };


    protected:
      // The name of the user.
      shared_ptr<string> accountName_ {};
      // The type of the user. Valid values:
      // 
      // *   1 to 5: Alibaba Cloud account
      // *   6: RAM role
      shared_ptr<int32_t> accountType_ {};
      // The user ID or role ID.
      shared_ptr<string> baseId_ {};
      // The parent user ID. This parameter is required if a RAM user is used.
      shared_ptr<string> parentAccountId_ {};
      // The name of the Alibaba Cloud account or RAM role. The return value of this parameter must be used if the user group is created by using an Alibaba Cloud account or a RAM role.
      shared_ptr<string> yunAccount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DsgUserGroupQueryUserListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DsgUserGroupQueryUserListResponseBody::Data>) };
    inline vector<DsgUserGroupQueryUserListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DsgUserGroupQueryUserListResponseBody::Data>) };
    inline DsgUserGroupQueryUserListResponseBody& setData(const vector<DsgUserGroupQueryUserListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DsgUserGroupQueryUserListResponseBody& setData(vector<DsgUserGroupQueryUserListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgUserGroupQueryUserListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgUserGroupQueryUserListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgUserGroupQueryUserListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgUserGroupQueryUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgUserGroupQueryUserListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned result.
    shared_ptr<vector<DsgUserGroupQueryUserListResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
