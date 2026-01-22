// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeAccountListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAccountListResponseBody() = default ;
    DescribeAccountListResponseBody(const DescribeAccountListResponseBody &) = default ;
    DescribeAccountListResponseBody(DescribeAccountListResponseBody &&) = default ;
    DescribeAccountListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountListResponseBody() = default ;
    DescribeAccountListResponseBody& operator=(const DescribeAccountListResponseBody &) = default ;
    DescribeAccountListResponseBody& operator=(DescribeAccountListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
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
      virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPrivilege_ == nullptr && this->accountType_ == nullptr && this->DBInstanceName_ == nullptr && this->DBName_ == nullptr
        && this->gmtCreated_ == nullptr; };
      // accountDescription Field Functions 
      bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
      void deleteAccountDescription() { this->accountDescription_ = nullptr;};
      inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
      inline Data& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountPrivilege Field Functions 
      bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
      void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
      inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
      inline Data& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Data& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Data& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    protected:
      shared_ptr<string> accountDescription_ {};
      shared_ptr<string> accountName_ {};
      shared_ptr<string> accountPrivilege_ {};
      shared_ptr<string> accountType_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> DBName_ {};
      shared_ptr<string> gmtCreated_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAccountListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAccountListResponseBody::Data>) };
    inline vector<DescribeAccountListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAccountListResponseBody::Data>) };
    inline DescribeAccountListResponseBody& setData(const vector<DescribeAccountListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountListResponseBody& setData(vector<DescribeAccountListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAccountListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAccountListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeAccountListResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
