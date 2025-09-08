// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListBindAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DataSourceCount, dataSourceCount_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DataSourceCount, dataSourceCount_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
    };
    ListBindAccountResponseBodyData() = default ;
    ListBindAccountResponseBodyData(const ListBindAccountResponseBodyData &) = default ;
    ListBindAccountResponseBodyData(ListBindAccountResponseBodyData &&) = default ;
    ListBindAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindAccountResponseBodyData() = default ;
    ListBindAccountResponseBodyData& operator=(const ListBindAccountResponseBodyData &) = default ;
    ListBindAccountResponseBodyData& operator=(ListBindAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->accountId_ != nullptr && this->accountName_ != nullptr && this->bindId_ != nullptr && this->cloudCode_ != nullptr && this->createUser_ != nullptr
        && this->dataSourceCount_ != nullptr && this->modifyTime_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline ListBindAccountResponseBodyData& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListBindAccountResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListBindAccountResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline int64_t bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, 0L) };
    inline ListBindAccountResponseBodyData& setBindId(int64_t bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListBindAccountResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListBindAccountResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dataSourceCount Field Functions 
    bool hasDataSourceCount() const { return this->dataSourceCount_ != nullptr;};
    void deleteDataSourceCount() { this->dataSourceCount_ = nullptr;};
    inline int64_t dataSourceCount() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCount_, 0L) };
    inline ListBindAccountResponseBodyData& setDataSourceCount(int64_t dataSourceCount) { DARABONBA_PTR_SET_VALUE(dataSourceCount_, dataSourceCount) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListBindAccountResponseBodyData& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


  protected:
    // The AccessKey ID of the cloud account.
    std::shared_ptr<string> accessId_ = nullptr;
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The username of the cloud account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID that is generated when the cloud account is added.
    std::shared_ptr<int64_t> bindId_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud
    // *   aliyun: Alibaba Cloud
    // *   hcloud: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the account that is used to add the cloud account.
    std::shared_ptr<string> createUser_ = nullptr;
    // The number of data sources that are added to the threat analysis feature within the cloud account.
    std::shared_ptr<int64_t> dataSourceCount_ = nullptr;
    // The modification time.
    std::shared_ptr<string> modifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
