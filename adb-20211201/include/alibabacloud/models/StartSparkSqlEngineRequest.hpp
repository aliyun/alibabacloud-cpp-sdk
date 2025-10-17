// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSPARKSQLENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSPARKSQLENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StartSparkSQLEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSparkSQLEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Jars, jars_);
      DARABONBA_PTR_TO_JSON(MaxExecutor, maxExecutor_);
      DARABONBA_PTR_TO_JSON(MinExecutor, minExecutor_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(SlotNum, slotNum_);
    };
    friend void from_json(const Darabonba::Json& j, StartSparkSQLEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Jars, jars_);
      DARABONBA_PTR_FROM_JSON(MaxExecutor, maxExecutor_);
      DARABONBA_PTR_FROM_JSON(MinExecutor, minExecutor_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(SlotNum, slotNum_);
    };
    StartSparkSQLEngineRequest() = default ;
    StartSparkSQLEngineRequest(const StartSparkSQLEngineRequest &) = default ;
    StartSparkSQLEngineRequest(StartSparkSQLEngineRequest &&) = default ;
    StartSparkSQLEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSparkSQLEngineRequest() = default ;
    StartSparkSQLEngineRequest& operator=(const StartSparkSQLEngineRequest &) = default ;
    StartSparkSQLEngineRequest& operator=(StartSparkSQLEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->jars_ == nullptr && return this->maxExecutor_ == nullptr && return this->minExecutor_ == nullptr && return this->resourceGroupName_ == nullptr
        && return this->slotNum_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline StartSparkSQLEngineRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline StartSparkSQLEngineRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // jars Field Functions 
    bool hasJars() const { return this->jars_ != nullptr;};
    void deleteJars() { this->jars_ = nullptr;};
    inline string jars() const { DARABONBA_PTR_GET_DEFAULT(jars_, "") };
    inline StartSparkSQLEngineRequest& setJars(string jars) { DARABONBA_PTR_SET_VALUE(jars_, jars) };


    // maxExecutor Field Functions 
    bool hasMaxExecutor() const { return this->maxExecutor_ != nullptr;};
    void deleteMaxExecutor() { this->maxExecutor_ = nullptr;};
    inline int64_t maxExecutor() const { DARABONBA_PTR_GET_DEFAULT(maxExecutor_, 0L) };
    inline StartSparkSQLEngineRequest& setMaxExecutor(int64_t maxExecutor) { DARABONBA_PTR_SET_VALUE(maxExecutor_, maxExecutor) };


    // minExecutor Field Functions 
    bool hasMinExecutor() const { return this->minExecutor_ != nullptr;};
    void deleteMinExecutor() { this->minExecutor_ = nullptr;};
    inline int64_t minExecutor() const { DARABONBA_PTR_GET_DEFAULT(minExecutor_, 0L) };
    inline StartSparkSQLEngineRequest& setMinExecutor(int64_t minExecutor) { DARABONBA_PTR_SET_VALUE(minExecutor_, minExecutor) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline StartSparkSQLEngineRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline int64_t slotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
    inline StartSparkSQLEngineRequest& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


  protected:
    // The configuration that is required to start the Spark SQL engine. Specify this value in the JSON format. For more information, see [Conf configuration parameters](https://help.aliyun.com/document_detail/471203.html).
    std::shared_ptr<string> config_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The Object Storage Service (OSS) paths of third-party JAR packages that are required to start the Spark SQL engine. Separate multiple OSS paths with commas (,).
    std::shared_ptr<string> jars_ = nullptr;
    // The maximum number of executors that are required to execute SQL statements. Valid values: 1 to 2000. If this value exceeds the total number of executes that are supported by the resource group, the Spark SQL engine fails to be started.
    std::shared_ptr<int64_t> maxExecutor_ = nullptr;
    // The minimum number of executors that are required to execute SQL statements. Valid values: 0 to 2000. A value of 0 indicates that no executors are permanent if no SQL statements are executed. If this value exceeds the total number of executors that are supported by the resource group, the Spark SQL engine fails to be started. The value must be less than the value of MaxExecutor.
    std::shared_ptr<int64_t> minExecutor_ = nullptr;
    // The name of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The maximum number of slots that are required to maintain Spark sessions for executing SQL statements. Valid values: 1 to 500.
    std::shared_ptr<int64_t> slotNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
