// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ParamGroupInfo, paramGroupInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigParameters, configParameters_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ParamGroupInfo, paramGroupInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody(DescribeParametersResponseBody &&) = default ;
    DescribeParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBody() = default ;
    DescribeParametersResponseBody& operator=(const DescribeParametersResponseBody &) = default ;
    DescribeParametersResponseBody& operator=(DescribeParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunningParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunningParameters& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceParameter, DBInstanceParameter_);
      };
      friend void from_json(const Darabonba::Json& j, RunningParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceParameter, DBInstanceParameter_);
      };
      RunningParameters() = default ;
      RunningParameters(const RunningParameters &) = default ;
      RunningParameters(RunningParameters &&) = default ;
      RunningParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunningParameters() = default ;
      RunningParameters& operator=(const RunningParameters &) = default ;
      RunningParameters& operator=(RunningParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterDefaultValue, parameterDefaultValue_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
          DARABONBA_PTR_TO_JSON(ParameterValueRange, parameterValueRange_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterDefaultValue, parameterDefaultValue_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
          DARABONBA_PTR_FROM_JSON(ParameterValueRange, parameterValueRange_);
        };
        DBInstanceParameter() = default ;
        DBInstanceParameter(const DBInstanceParameter &) = default ;
        DBInstanceParameter(DBInstanceParameter &&) = default ;
        DBInstanceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceParameter() = default ;
        DBInstanceParameter& operator=(const DBInstanceParameter &) = default ;
        DBInstanceParameter& operator=(DBInstanceParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterDefaultValue_ == nullptr
        && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr && this->parameterValueRange_ == nullptr; };
        // parameterDefaultValue Field Functions 
        bool hasParameterDefaultValue() const { return this->parameterDefaultValue_ != nullptr;};
        void deleteParameterDefaultValue() { this->parameterDefaultValue_ = nullptr;};
        inline string getParameterDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(parameterDefaultValue_, "") };
        inline DBInstanceParameter& setParameterDefaultValue(string parameterDefaultValue) { DARABONBA_PTR_SET_VALUE(parameterDefaultValue_, parameterDefaultValue) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline DBInstanceParameter& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline DBInstanceParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline DBInstanceParameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


        // parameterValueRange Field Functions 
        bool hasParameterValueRange() const { return this->parameterValueRange_ != nullptr;};
        void deleteParameterValueRange() { this->parameterValueRange_ = nullptr;};
        inline string getParameterValueRange() const { DARABONBA_PTR_GET_DEFAULT(parameterValueRange_, "") };
        inline DBInstanceParameter& setParameterValueRange(string parameterValueRange) { DARABONBA_PTR_SET_VALUE(parameterValueRange_, parameterValueRange) };


      protected:
        // The default value of the parameter.
        shared_ptr<string> parameterDefaultValue_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
        // The valid values of the parameter.
        shared_ptr<string> parameterValueRange_ {};
      };

      virtual bool empty() const override { return this->DBInstanceParameter_ == nullptr; };
      // DBInstanceParameter Field Functions 
      bool hasDBInstanceParameter() const { return this->DBInstanceParameter_ != nullptr;};
      void deleteDBInstanceParameter() { this->DBInstanceParameter_ = nullptr;};
      inline const vector<RunningParameters::DBInstanceParameter> & getDBInstanceParameter() const { DARABONBA_PTR_GET_CONST(DBInstanceParameter_, vector<RunningParameters::DBInstanceParameter>) };
      inline vector<RunningParameters::DBInstanceParameter> getDBInstanceParameter() { DARABONBA_PTR_GET(DBInstanceParameter_, vector<RunningParameters::DBInstanceParameter>) };
      inline RunningParameters& setDBInstanceParameter(const vector<RunningParameters::DBInstanceParameter> & dBInstanceParameter) { DARABONBA_PTR_SET_VALUE(DBInstanceParameter_, dBInstanceParameter) };
      inline RunningParameters& setDBInstanceParameter(vector<RunningParameters::DBInstanceParameter> && dBInstanceParameter) { DARABONBA_PTR_SET_RVALUE(DBInstanceParameter_, dBInstanceParameter) };


    protected:
      shared_ptr<vector<RunningParameters::DBInstanceParameter>> DBInstanceParameter_ {};
    };

    class ParamGroupInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParamGroupInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      };
      friend void from_json(const Darabonba::Json& j, ParamGroupInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
      };
      ParamGroupInfo() = default ;
      ParamGroupInfo(const ParamGroupInfo &) = default ;
      ParamGroupInfo(ParamGroupInfo &&) = default ;
      ParamGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParamGroupInfo() = default ;
      ParamGroupInfo& operator=(const ParamGroupInfo &) = default ;
      ParamGroupInfo& operator=(ParamGroupInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramGroupId_ == nullptr
        && this->parameterGroupDesc_ == nullptr && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr; };
      // paramGroupId Field Functions 
      bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
      void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
      inline string getParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
      inline ParamGroupInfo& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


      // parameterGroupDesc Field Functions 
      bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
      void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
      inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
      inline ParamGroupInfo& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


      // parameterGroupName Field Functions 
      bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
      void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
      inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
      inline ParamGroupInfo& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


      // parameterGroupType Field Functions 
      bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
      void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
      inline string getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
      inline ParamGroupInfo& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    protected:
      // The ID of the parameter template.
      shared_ptr<string> paramGroupId_ {};
      // The description of the parameter template.
      shared_ptr<string> parameterGroupDesc_ {};
      // The name of the parameter template.
      shared_ptr<string> parameterGroupName_ {};
      // The type of the parameter template.
      shared_ptr<string> parameterGroupType_ {};
    };

    class ConfigParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigParameters& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceParameter, DBInstanceParameter_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceParameter, DBInstanceParameter_);
      };
      ConfigParameters() = default ;
      ConfigParameters(const ConfigParameters &) = default ;
      ConfigParameters(ConfigParameters &&) = default ;
      ConfigParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigParameters() = default ;
      ConfigParameters& operator=(const ConfigParameters &) = default ;
      ConfigParameters& operator=(ConfigParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        DBInstanceParameter() = default ;
        DBInstanceParameter(const DBInstanceParameter &) = default ;
        DBInstanceParameter(DBInstanceParameter &&) = default ;
        DBInstanceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceParameter() = default ;
        DBInstanceParameter& operator=(const DBInstanceParameter &) = default ;
        DBInstanceParameter& operator=(DBInstanceParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterDescription_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValue_ == nullptr; };
        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline DBInstanceParameter& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline DBInstanceParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline DBInstanceParameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->DBInstanceParameter_ == nullptr; };
      // DBInstanceParameter Field Functions 
      bool hasDBInstanceParameter() const { return this->DBInstanceParameter_ != nullptr;};
      void deleteDBInstanceParameter() { this->DBInstanceParameter_ = nullptr;};
      inline const vector<ConfigParameters::DBInstanceParameter> & getDBInstanceParameter() const { DARABONBA_PTR_GET_CONST(DBInstanceParameter_, vector<ConfigParameters::DBInstanceParameter>) };
      inline vector<ConfigParameters::DBInstanceParameter> getDBInstanceParameter() { DARABONBA_PTR_GET(DBInstanceParameter_, vector<ConfigParameters::DBInstanceParameter>) };
      inline ConfigParameters& setDBInstanceParameter(const vector<ConfigParameters::DBInstanceParameter> & dBInstanceParameter) { DARABONBA_PTR_SET_VALUE(DBInstanceParameter_, dBInstanceParameter) };
      inline ConfigParameters& setDBInstanceParameter(vector<ConfigParameters::DBInstanceParameter> && dBInstanceParameter) { DARABONBA_PTR_SET_RVALUE(DBInstanceParameter_, dBInstanceParameter) };


    protected:
      shared_ptr<vector<ConfigParameters::DBInstanceParameter>> DBInstanceParameter_ {};
    };

    virtual bool empty() const override { return this->configParameters_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->paramGroupInfo_ == nullptr && this->requestId_ == nullptr && this->runningParameters_ == nullptr; };
    // configParameters Field Functions 
    bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
    void deleteConfigParameters() { this->configParameters_ = nullptr;};
    inline const DescribeParametersResponseBody::ConfigParameters & getConfigParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, DescribeParametersResponseBody::ConfigParameters) };
    inline DescribeParametersResponseBody::ConfigParameters getConfigParameters() { DARABONBA_PTR_GET(configParameters_, DescribeParametersResponseBody::ConfigParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(const DescribeParametersResponseBody::ConfigParameters & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(DescribeParametersResponseBody::ConfigParameters && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParametersResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // paramGroupInfo Field Functions 
    bool hasParamGroupInfo() const { return this->paramGroupInfo_ != nullptr;};
    void deleteParamGroupInfo() { this->paramGroupInfo_ = nullptr;};
    inline const DescribeParametersResponseBody::ParamGroupInfo & getParamGroupInfo() const { DARABONBA_PTR_GET_CONST(paramGroupInfo_, DescribeParametersResponseBody::ParamGroupInfo) };
    inline DescribeParametersResponseBody::ParamGroupInfo getParamGroupInfo() { DARABONBA_PTR_GET(paramGroupInfo_, DescribeParametersResponseBody::ParamGroupInfo) };
    inline DescribeParametersResponseBody& setParamGroupInfo(const DescribeParametersResponseBody::ParamGroupInfo & paramGroupInfo) { DARABONBA_PTR_SET_VALUE(paramGroupInfo_, paramGroupInfo) };
    inline DescribeParametersResponseBody& setParamGroupInfo(DescribeParametersResponseBody::ParamGroupInfo && paramGroupInfo) { DARABONBA_PTR_SET_RVALUE(paramGroupInfo_, paramGroupInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeParametersResponseBody::RunningParameters & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeParametersResponseBody::RunningParameters) };
    inline DescribeParametersResponseBody::RunningParameters getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeParametersResponseBody::RunningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(const DescribeParametersResponseBody::RunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(DescribeParametersResponseBody::RunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The list of parameters that are being synchronized.
    // 
    // > After you modify and submit the parameters, you must wait for the parameters to be synchronized to the instance. After the synchronization, you can delete the parameters from the list.
    shared_ptr<DescribeParametersResponseBody::ConfigParameters> configParameters_ {};
    // The type of the database engine.
    shared_ptr<string> engine_ {};
    // The version of the database engine.
    shared_ptr<string> engineVersion_ {};
    // The information about the parameter template.
    shared_ptr<DescribeParametersResponseBody::ParamGroupInfo> paramGroupInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The parameters that are in use.
    shared_ptr<DescribeParametersResponseBody::RunningParameters> runningParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
