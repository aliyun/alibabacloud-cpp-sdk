// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookInputOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookInputOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookInputOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookInputOutputResponseBody() = default ;
    DescribePlaybookInputOutputResponseBody(const DescribePlaybookInputOutputResponseBody &) = default ;
    DescribePlaybookInputOutputResponseBody(DescribePlaybookInputOutputResponseBody &&) = default ;
    DescribePlaybookInputOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookInputOutputResponseBody() = default ;
    DescribePlaybookInputOutputResponseBody& operator=(const DescribePlaybookInputOutputResponseBody &) = default ;
    DescribePlaybookInputOutputResponseBody& operator=(DescribePlaybookInputOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(ExeConfig, exeConfig_);
        DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
        DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(ExeConfig, exeConfig_);
        DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
        DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exeConfig_ == nullptr
        && this->inputParams_ == nullptr && this->outputParams_ == nullptr && this->paramType_ == nullptr && this->playbookUuid_ == nullptr; };
      // exeConfig Field Functions 
      bool hasExeConfig() const { return this->exeConfig_ != nullptr;};
      void deleteExeConfig() { this->exeConfig_ = nullptr;};
      inline string getExeConfig() const { DARABONBA_PTR_GET_DEFAULT(exeConfig_, "") };
      inline Config& setExeConfig(string exeConfig) { DARABONBA_PTR_SET_VALUE(exeConfig_, exeConfig) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline Config& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // outputParams Field Functions 
      bool hasOutputParams() const { return this->outputParams_ != nullptr;};
      void deleteOutputParams() { this->outputParams_ = nullptr;};
      inline string getOutputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
      inline Config& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline Config& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Config& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    protected:
      // The execution method of the playbook is in JSONObject format.
      shared_ptr<string> exeConfig_ {};
      // The input parameter configuration of the playbook. The value is a JSON array.
      shared_ptr<string> inputParams_ {};
      // The output parameter configuration. This parameter is unavailable and is always left empty.
      shared_ptr<string> outputParams_ {};
      // The input parameter type of the playbook. Valid values:
      // 
      // *   **template-ip**
      // *   **template-file**
      // *   **template-process**
      // *   **custom**
      shared_ptr<string> paramType_ {};
      // The UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribePlaybookInputOutputResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribePlaybookInputOutputResponseBody::Config) };
    inline DescribePlaybookInputOutputResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribePlaybookInputOutputResponseBody::Config) };
    inline DescribePlaybookInputOutputResponseBody& setConfig(const DescribePlaybookInputOutputResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribePlaybookInputOutputResponseBody& setConfig(DescribePlaybookInputOutputResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookInputOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations.
    shared_ptr<DescribePlaybookInputOutputResponseBody::Config> config_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
