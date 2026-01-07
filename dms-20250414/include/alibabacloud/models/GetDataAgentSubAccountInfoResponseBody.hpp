// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTSUBACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTSUBACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentSubAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentSubAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentSubAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataAgentSubAccountInfoResponseBody() = default ;
    GetDataAgentSubAccountInfoResponseBody(const GetDataAgentSubAccountInfoResponseBody &) = default ;
    GetDataAgentSubAccountInfoResponseBody(GetDataAgentSubAccountInfoResponseBody &&) = default ;
    GetDataAgentSubAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentSubAccountInfoResponseBody() = default ;
    GetDataAgentSubAccountInfoResponseBody& operator=(const GetDataAgentSubAccountInfoResponseBody &) = default ;
    GetDataAgentSubAccountInfoResponseBody& operator=(GetDataAgentSubAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(MainAccountId, mainAccountId_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(MainAccountId, mainAccountId_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->mainAccountId_ == nullptr && this->updateDate_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline int64_t getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, 0L) };
      inline Data& setCreateDate(int64_t createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // mainAccountId Field Functions 
      bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
      void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
      inline string getMainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
      inline Data& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline int64_t getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, 0L) };
      inline Data& setUpdateDate(int64_t updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<int64_t> createDate_ {};
      shared_ptr<string> mainAccountId_ {};
      shared_ptr<int64_t> updateDate_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataAgentSubAccountInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataAgentSubAccountInfoResponseBody::Data) };
    inline GetDataAgentSubAccountInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataAgentSubAccountInfoResponseBody::Data) };
    inline GetDataAgentSubAccountInfoResponseBody& setData(const GetDataAgentSubAccountInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataAgentSubAccountInfoResponseBody& setData(GetDataAgentSubAccountInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataAgentSubAccountInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataAgentSubAccountInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataAgentSubAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataAgentSubAccountInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetDataAgentSubAccountInfoResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
