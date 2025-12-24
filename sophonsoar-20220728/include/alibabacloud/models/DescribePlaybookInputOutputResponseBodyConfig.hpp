// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookInputOutputResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookInputOutputResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExeConfig, exeConfig_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookInputOutputResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExeConfig, exeConfig_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    DescribePlaybookInputOutputResponseBodyConfig() = default ;
    DescribePlaybookInputOutputResponseBodyConfig(const DescribePlaybookInputOutputResponseBodyConfig &) = default ;
    DescribePlaybookInputOutputResponseBodyConfig(DescribePlaybookInputOutputResponseBodyConfig &&) = default ;
    DescribePlaybookInputOutputResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookInputOutputResponseBodyConfig() = default ;
    DescribePlaybookInputOutputResponseBodyConfig& operator=(const DescribePlaybookInputOutputResponseBodyConfig &) = default ;
    DescribePlaybookInputOutputResponseBodyConfig& operator=(DescribePlaybookInputOutputResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exeConfig_ == nullptr
        && return this->inputParams_ == nullptr && return this->outputParams_ == nullptr && return this->paramType_ == nullptr && return this->playbookUuid_ == nullptr; };
    // exeConfig Field Functions 
    bool hasExeConfig() const { return this->exeConfig_ != nullptr;};
    void deleteExeConfig() { this->exeConfig_ = nullptr;};
    inline string exeConfig() const { DARABONBA_PTR_GET_DEFAULT(exeConfig_, "") };
    inline DescribePlaybookInputOutputResponseBodyConfig& setExeConfig(string exeConfig) { DARABONBA_PTR_SET_VALUE(exeConfig_, exeConfig) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline DescribePlaybookInputOutputResponseBodyConfig& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // outputParams Field Functions 
    bool hasOutputParams() const { return this->outputParams_ != nullptr;};
    void deleteOutputParams() { this->outputParams_ = nullptr;};
    inline string outputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
    inline DescribePlaybookInputOutputResponseBodyConfig& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribePlaybookInputOutputResponseBodyConfig& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybookInputOutputResponseBodyConfig& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The execution method of the playbook is in JSONObject format.
    std::shared_ptr<string> exeConfig_ = nullptr;
    // The input parameter configuration of the playbook. The value is a JSON array.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The output parameter configuration. This parameter is unavailable and is always left empty.
    std::shared_ptr<string> outputParams_ = nullptr;
    // The input parameter type of the playbook. Valid values:
    // 
    // *   **template-ip**
    // *   **template-file**
    // *   **template-process**
    // *   **custom**
    std::shared_ptr<string> paramType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
