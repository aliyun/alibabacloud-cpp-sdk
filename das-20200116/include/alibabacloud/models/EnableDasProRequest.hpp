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
        && return this->sqlRetention_ == nullptr && return this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableDasProRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlRetention Field Functions 
    bool hasSqlRetention() const { return this->sqlRetention_ != nullptr;};
    void deleteSqlRetention() { this->sqlRetention_ = nullptr;};
    inline int32_t sqlRetention() const { DARABONBA_PTR_GET_DEFAULT(sqlRetention_, 0) };
    inline EnableDasProRequest& setSqlRetention(int32_t sqlRetention) { DARABONBA_PTR_SET_VALUE(sqlRetention_, sqlRetention) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EnableDasProRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The database instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The storage duration of SQL Explorer data. Unit: day. Default value: **30**. Valid values:
    // 
    // *   **30**
    // *   **180**
    // *   **365**
    // *   **1095**
    // *   **1825**
    std::shared_ptr<int32_t> sqlRetention_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    // 
    // >  This parameter is optional. The system can automatically obtain the account ID based on the value of InstanceId when you call this operation.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
