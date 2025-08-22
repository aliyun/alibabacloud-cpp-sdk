// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAJUICERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATAJUICERCONFIG_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
    };
    friend void from_json(const Darabonba::Json& j, DataJuicerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
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
    virtual bool empty() const override { this->commandType_ != nullptr
        && this->executionMode_ != nullptr; };
    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string commandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DataJuicerConfig& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline DataJuicerConfig& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


  protected:
    std::shared_ptr<string> commandType_ = nullptr;
    std::shared_ptr<string> executionMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
