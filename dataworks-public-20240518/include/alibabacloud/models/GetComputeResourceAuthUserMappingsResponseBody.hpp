// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTERESOURCEAUTHUSERMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTERESOURCEAUTHUSERMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComputeResourceAuthUserMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeResourceAuthUserMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeResourceAuthUserMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetComputeResourceAuthUserMappingsResponseBody() = default ;
    GetComputeResourceAuthUserMappingsResponseBody(const GetComputeResourceAuthUserMappingsResponseBody &) = default ;
    GetComputeResourceAuthUserMappingsResponseBody(GetComputeResourceAuthUserMappingsResponseBody &&) = default ;
    GetComputeResourceAuthUserMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeResourceAuthUserMappingsResponseBody() = default ;
    GetComputeResourceAuthUserMappingsResponseBody& operator=(const GetComputeResourceAuthUserMappingsResponseBody &) = default ;
    GetComputeResourceAuthUserMappingsResponseBody& operator=(GetComputeResourceAuthUserMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(HadoopAuthType, hadoopAuthType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(HadoopAuthType, hadoopAuthType_);
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
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
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
        virtual bool empty() const override { return this->userId_ == nullptr
        && this->username_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Accounts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Accounts& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The Alibaba Cloud UID.
        shared_ptr<string> userId_ {};
        // The username in the target system, such as an LDAP account.
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->hadoopAuthType_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<Data::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Data::Accounts>) };
      inline vector<Data::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<Data::Accounts>) };
      inline Data& setAccounts(const vector<Data::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline Data& setAccounts(vector<Data::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // hadoopAuthType Field Functions 
      bool hasHadoopAuthType() const { return this->hadoopAuthType_ != nullptr;};
      void deleteHadoopAuthType() { this->hadoopAuthType_ = nullptr;};
      inline string getHadoopAuthType() const { DARABONBA_PTR_GET_DEFAULT(hadoopAuthType_, "") };
      inline Data& setHadoopAuthType(string hadoopAuthType) { DARABONBA_PTR_SET_VALUE(hadoopAuthType_, hadoopAuthType) };


    protected:
      // The list of mapped account information.
      shared_ptr<vector<Data::Accounts>> accounts_ {};
      // The authentication type, such as LDAP.
      shared_ptr<string> hadoopAuthType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetComputeResourceAuthUserMappingsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetComputeResourceAuthUserMappingsResponseBody::Data) };
    inline GetComputeResourceAuthUserMappingsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetComputeResourceAuthUserMappingsResponseBody::Data) };
    inline GetComputeResourceAuthUserMappingsResponseBody& setData(const GetComputeResourceAuthUserMappingsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetComputeResourceAuthUserMappingsResponseBody& setData(GetComputeResourceAuthUserMappingsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeResourceAuthUserMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetComputeResourceAuthUserMappingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<GetComputeResourceAuthUserMappingsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
