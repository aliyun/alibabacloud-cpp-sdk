// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDASPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDASPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class EnableDasProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDasProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SqlRetention, sqlRetention_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDasProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SqlRetention, sqlRetention_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    EnableDasProRequest() = default ;
    EnableDasProRequest(const EnableDasProRequest &) = default ;
    EnableDasProRequest(EnableDasProRequest &&) = default ;
    EnableDasProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDasProRequest() = default ;
    EnableDasProRequest& operator=(const EnableDasProRequest &) = default ;
    EnableDasProRequest& operator=(EnableDasProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->sqlRetention_ == nullptr && this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableDasProRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlRetention Field Functions 
    bool hasSqlRetention() const { return this->sqlRetention_ != nullptr;};
    void deleteSqlRetention() { this->sqlRetention_ = nullptr;};
    inline int32_t getSqlRetention() const { DARABONBA_PTR_GET_DEFAULT(sqlRetention_, 0) };
    inline EnableDasProRequest& setSqlRetention(int32_t sqlRetention) { DARABONBA_PTR_SET_VALUE(sqlRetention_, sqlRetention) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EnableDasProRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The instance ID of the database.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The storage duration of SQL Explorer data. Unit: days. Default value: **30**. Valid values:
    // 
    // - **30**
    // - **180**
    // - **365**
    // - **1095**
    // - **1825**
    shared_ptr<int32_t> sqlRetention_ {};
    // The instance ID, which is the ID of the Alibaba Cloud account that created the database instance.
    // 
    // > This parameter is optional. After you specify the ID of the target database instance, the system automatically obtains the instance ID when you call the API operation.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
