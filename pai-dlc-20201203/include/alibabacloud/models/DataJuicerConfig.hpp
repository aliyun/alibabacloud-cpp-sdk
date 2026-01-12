// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAJUICERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATAJUICERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DataJuicerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataJuicerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(EnableResourceEstimation, enableResourceEstimation_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(ResourceLimit, resourceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DataJuicerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(EnableResourceEstimation, enableResourceEstimation_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(ResourceLimit, resourceLimit_);
    };
    DataJuicerConfig() = default ;
    DataJuicerConfig(const DataJuicerConfig &) = default ;
    DataJuicerConfig(DataJuicerConfig &&) = default ;
    DataJuicerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataJuicerConfig() = default ;
    DataJuicerConfig& operator=(const DataJuicerConfig &) = default ;
    DataJuicerConfig& operator=(DataJuicerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandType_ == nullptr
        && this->enableResourceEstimation_ == nullptr && this->executionMode_ == nullptr && this->resourceLimit_ == nullptr; };
    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DataJuicerConfig& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // enableResourceEstimation Field Functions 
    bool hasEnableResourceEstimation() const { return this->enableResourceEstimation_ != nullptr;};
    void deleteEnableResourceEstimation() { this->enableResourceEstimation_ = nullptr;};
    inline bool getEnableResourceEstimation() const { DARABONBA_PTR_GET_DEFAULT(enableResourceEstimation_, false) };
    inline DataJuicerConfig& setEnableResourceEstimation(bool enableResourceEstimation) { DARABONBA_PTR_SET_VALUE(enableResourceEstimation_, enableResourceEstimation) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline DataJuicerConfig& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // resourceLimit Field Functions 
    bool hasResourceLimit() const { return this->resourceLimit_ != nullptr;};
    void deleteResourceLimit() { this->resourceLimit_ = nullptr;};
    inline const ResourceLimit & getResourceLimit() const { DARABONBA_PTR_GET_CONST(resourceLimit_, ResourceLimit) };
    inline ResourceLimit getResourceLimit() { DARABONBA_PTR_GET(resourceLimit_, ResourceLimit) };
    inline DataJuicerConfig& setResourceLimit(const ResourceLimit & resourceLimit) { DARABONBA_PTR_SET_VALUE(resourceLimit_, resourceLimit) };
    inline DataJuicerConfig& setResourceLimit(ResourceLimit && resourceLimit) { DARABONBA_PTR_SET_RVALUE(resourceLimit_, resourceLimit) };


  protected:
    shared_ptr<string> commandType_ {};
    shared_ptr<bool> enableResourceEstimation_ {};
    shared_ptr<string> executionMode_ {};
    shared_ptr<ResourceLimit> resourceLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
