// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListBindAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBindAccountResponseBody() = default ;
    ListBindAccountResponseBody(const ListBindAccountResponseBody &) = default ;
    ListBindAccountResponseBody(ListBindAccountResponseBody &&) = default ;
    ListBindAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindAccountResponseBody() = default ;
    ListBindAccountResponseBody& operator=(const ListBindAccountResponseBody &) = default ;
    ListBindAccountResponseBody& operator=(ListBindAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(BindId, bindId_);
        DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DataSourceCount, dataSourceCount_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(BindId, bindId_);
        DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DataSourceCount, dataSourceCount_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
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
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->accountId_ == nullptr && this->accountName_ == nullptr && this->bindId_ == nullptr && this->cloudCode_ == nullptr && this->createUser_ == nullptr
        && this->dataSourceCount_ == nullptr && this->modifyTime_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline Data& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // bindId Field Functions 
      bool hasBindId() const { return this->bindId_ != nullptr;};
      void deleteBindId() { this->bindId_ = nullptr;};
      inline int64_t getBindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, 0L) };
      inline Data& setBindId(int64_t bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


      // cloudCode Field Functions 
      bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
      void deleteCloudCode() { this->cloudCode_ = nullptr;};
      inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
      inline Data& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // dataSourceCount Field Functions 
      bool hasDataSourceCount() const { return this->dataSourceCount_ != nullptr;};
      void deleteDataSourceCount() { this->dataSourceCount_ = nullptr;};
      inline int64_t getDataSourceCount() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCount_, 0L) };
      inline Data& setDataSourceCount(int64_t dataSourceCount) { DARABONBA_PTR_SET_VALUE(dataSourceCount_, dataSourceCount) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    protected:
      // The AccessKey ID of the cloud account.
      shared_ptr<string> accessId_ {};
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The username of the cloud account.
      shared_ptr<string> accountName_ {};
      // The ID that is generated when the cloud account is added.
      shared_ptr<int64_t> bindId_ {};
      // The code of the cloud service provider. Valid values:
      // 
      // *   qcloud: Tencent Cloud
      // *   aliyun: Alibaba Cloud
      // *   hcloud: Huawei Cloud
      shared_ptr<string> cloudCode_ {};
      // The ID of the account that is used to add the cloud account.
      shared_ptr<string> createUser_ {};
      // The number of data sources that are added to the threat analysis feature within the cloud account.
      shared_ptr<int64_t> dataSourceCount_ {};
      // The modification time.
      shared_ptr<string> modifyTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBindAccountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBindAccountResponseBody::Data>) };
    inline vector<ListBindAccountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBindAccountResponseBody::Data>) };
    inline ListBindAccountResponseBody& setData(const vector<ListBindAccountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBindAccountResponseBody& setData(vector<ListBindAccountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListBindAccountResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
