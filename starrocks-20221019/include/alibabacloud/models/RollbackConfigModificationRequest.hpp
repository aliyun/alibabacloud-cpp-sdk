// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKCONFIGMODIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKCONFIGMODIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class RollbackConfigModificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackConfigModificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigHistoryId, configHistoryId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackConfigModificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigHistoryId, configHistoryId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    RollbackConfigModificationRequest() = default ;
    RollbackConfigModificationRequest(const RollbackConfigModificationRequest &) = default ;
    RollbackConfigModificationRequest(RollbackConfigModificationRequest &&) = default ;
    RollbackConfigModificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackConfigModificationRequest() = default ;
    RollbackConfigModificationRequest& operator=(const RollbackConfigModificationRequest &) = default ;
    RollbackConfigModificationRequest& operator=(RollbackConfigModificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configHistoryId_ == nullptr
        && this->instanceId_ == nullptr && this->restart_ == nullptr; };
    // configHistoryId Field Functions 
    bool hasConfigHistoryId() const { return this->configHistoryId_ != nullptr;};
    void deleteConfigHistoryId() { this->configHistoryId_ = nullptr;};
    inline int64_t getConfigHistoryId() const { DARABONBA_PTR_GET_DEFAULT(configHistoryId_, 0L) };
    inline RollbackConfigModificationRequest& setConfigHistoryId(int64_t configHistoryId) { DARABONBA_PTR_SET_VALUE(configHistoryId_, configHistoryId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RollbackConfigModificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline RollbackConfigModificationRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    shared_ptr<int64_t> configHistoryId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
