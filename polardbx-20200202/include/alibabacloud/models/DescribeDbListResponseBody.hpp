// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLISTRESPONSEBODY_HPP_
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
  class DescribeDbListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDbListResponseBody() = default ;
    DescribeDbListResponseBody(const DescribeDbListResponseBody &) = default ;
    DescribeDbListResponseBody(DescribeDbListResponseBody &&) = default ;
    DescribeDbListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbListResponseBody() = default ;
    DescribeDbListResponseBody& operator=(const DescribeDbListResponseBody &) = default ;
    DescribeDbListResponseBody& operator=(DescribeDbListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
        DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
        DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
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
      class Accounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
        };
        friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
        };
        Accounts() = default ;
        Accounts(const Accounts &) = default ;
        Accounts(Accounts &&) = default ;
        Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Accounts() = default ;
        Accounts& operator=(const Accounts &) = default ;
        Accounts& operator=(Accounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Accounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountPrivilege Field Functions 
        bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
        void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
        inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
        inline Accounts& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> accountPrivilege_ {};
      };

      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->characterSetName_ == nullptr && this->DBDescription_ == nullptr && this->DBInstanceName_ == nullptr && this->DBName_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<Data::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Data::Accounts>) };
      inline vector<Data::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<Data::Accounts>) };
      inline Data& setAccounts(const vector<Data::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline Data& setAccounts(vector<Data::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // characterSetName Field Functions 
      bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
      void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
      inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
      inline Data& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


      // DBDescription Field Functions 
      bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
      void deleteDBDescription() { this->DBDescription_ = nullptr;};
      inline string getDBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
      inline Data& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


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


    protected:
      shared_ptr<vector<Data::Accounts>> accounts_ {};
      shared_ptr<string> characterSetName_ {};
      shared_ptr<string> DBDescription_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> DBName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDbListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDbListResponseBody::Data>) };
    inline vector<DescribeDbListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDbListResponseBody::Data>) };
    inline DescribeDbListResponseBody& setData(const vector<DescribeDbListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDbListResponseBody& setData(vector<DescribeDbListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDbListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDbListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDbListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeDbListResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
