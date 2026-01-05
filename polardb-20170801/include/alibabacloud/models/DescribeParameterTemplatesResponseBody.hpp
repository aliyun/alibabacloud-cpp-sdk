// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ParameterCount, parameterCount_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ParameterCount, parameterCount_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterTemplatesResponseBody() = default ;
    DescribeParameterTemplatesResponseBody(const DescribeParameterTemplatesResponseBody &) = default ;
    DescribeParameterTemplatesResponseBody(DescribeParameterTemplatesResponseBody &&) = default ;
    DescribeParameterTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBody() = default ;
    DescribeParameterTemplatesResponseBody& operator=(const DescribeParameterTemplatesResponseBody &) = default ;
    DescribeParameterTemplatesResponseBody& operator=(DescribeParameterTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateRecord, templateRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateRecord, templateRecord_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TemplateRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateRecord& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_TO_JSON(ForceModify, forceModify_);
          DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_TO_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(ForceModify, forceModify_);
          DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_FROM_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        TemplateRecord() = default ;
        TemplateRecord(const TemplateRecord &) = default ;
        TemplateRecord(TemplateRecord &&) = default ;
        TemplateRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateRecord() = default ;
        TemplateRecord& operator=(const TemplateRecord &) = default ;
        TemplateRecord& operator=(TemplateRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->forceModify_ == nullptr && this->forceRestart_ == nullptr && this->isNodeAvailable_ == nullptr && this->paramRelyRule_ == nullptr && this->parameterDescription_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline TemplateRecord& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // forceModify Field Functions 
        bool hasForceModify() const { return this->forceModify_ != nullptr;};
        void deleteForceModify() { this->forceModify_ = nullptr;};
        inline string getForceModify() const { DARABONBA_PTR_GET_DEFAULT(forceModify_, "") };
        inline TemplateRecord& setForceModify(string forceModify) { DARABONBA_PTR_SET_VALUE(forceModify_, forceModify) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline string getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, "") };
        inline TemplateRecord& setForceRestart(string forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // isNodeAvailable Field Functions 
        bool hasIsNodeAvailable() const { return this->isNodeAvailable_ != nullptr;};
        void deleteIsNodeAvailable() { this->isNodeAvailable_ = nullptr;};
        inline string getIsNodeAvailable() const { DARABONBA_PTR_GET_DEFAULT(isNodeAvailable_, "") };
        inline TemplateRecord& setIsNodeAvailable(string isNodeAvailable) { DARABONBA_PTR_SET_VALUE(isNodeAvailable_, isNodeAvailable) };


        // paramRelyRule Field Functions 
        bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
        void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
        inline string getParamRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
        inline TemplateRecord& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline TemplateRecord& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline TemplateRecord& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline TemplateRecord& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The valid values of the parameter.
        shared_ptr<string> checkingCode_ {};
        // Indicates whether the parameter setting can be modified. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> forceModify_ {};
        // Indicates whether a cluster restart is required to make the parameter modification take effect. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> forceRestart_ {};
        // Indicates whether the parameter is a global parameter. Valid values:
        // 
        // *   **0**: yes. The modified parameter value is synchronized to other nodes by default.
        // *   **1**: no. You can customize the nodes to which the modified parameter value can be synchronized.
        shared_ptr<string> isNodeAvailable_ {};
        // The parameter dependencies.
        shared_ptr<string> paramRelyRule_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The default value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->templateRecord_ == nullptr; };
      // templateRecord Field Functions 
      bool hasTemplateRecord() const { return this->templateRecord_ != nullptr;};
      void deleteTemplateRecord() { this->templateRecord_ = nullptr;};
      inline const vector<Parameters::TemplateRecord> & getTemplateRecord() const { DARABONBA_PTR_GET_CONST(templateRecord_, vector<Parameters::TemplateRecord>) };
      inline vector<Parameters::TemplateRecord> getTemplateRecord() { DARABONBA_PTR_GET(templateRecord_, vector<Parameters::TemplateRecord>) };
      inline Parameters& setTemplateRecord(const vector<Parameters::TemplateRecord> & templateRecord) { DARABONBA_PTR_SET_VALUE(templateRecord_, templateRecord) };
      inline Parameters& setTemplateRecord(vector<Parameters::TemplateRecord> && templateRecord) { DARABONBA_PTR_SET_RVALUE(templateRecord_, templateRecord) };


    protected:
      shared_ptr<vector<Parameters::TemplateRecord>> templateRecord_ {};
    };

    virtual bool empty() const override { return this->DBType_ == nullptr
        && this->DBVersion_ == nullptr && this->engine_ == nullptr && this->parameterCount_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeParameterTemplatesResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeParameterTemplatesResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParameterTemplatesResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // parameterCount Field Functions 
    bool hasParameterCount() const { return this->parameterCount_ != nullptr;};
    void deleteParameterCount() { this->parameterCount_ = nullptr;};
    inline string getParameterCount() const { DARABONBA_PTR_GET_DEFAULT(parameterCount_, "") };
    inline DescribeParameterTemplatesResponseBody& setParameterCount(string parameterCount) { DARABONBA_PTR_SET_VALUE(parameterCount_, parameterCount) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeParameterTemplatesResponseBody::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeParameterTemplatesResponseBody::Parameters) };
    inline DescribeParameterTemplatesResponseBody::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, DescribeParameterTemplatesResponseBody::Parameters) };
    inline DescribeParameterTemplatesResponseBody& setParameters(const DescribeParameterTemplatesResponseBody::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeParameterTemplatesResponseBody& setParameters(DescribeParameterTemplatesResponseBody::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the database engine.
    shared_ptr<string> DBType_ {};
    // The version of the database engine.
    shared_ptr<string> DBVersion_ {};
    // The database engine of the cluster.
    shared_ptr<string> engine_ {};
    // The number of parameters.
    shared_ptr<string> parameterCount_ {};
    // The details of the parameters.
    shared_ptr<DescribeParameterTemplatesResponseBody::Parameters> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
