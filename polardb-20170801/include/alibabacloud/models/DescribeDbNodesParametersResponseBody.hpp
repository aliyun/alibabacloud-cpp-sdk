// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODESPARAMETERSRESPONSEBODY_HPP_
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
  class DescribeDBNodesParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodesParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodesParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBNodesParametersResponseBody() = default ;
    DescribeDBNodesParametersResponseBody(const DescribeDBNodesParametersResponseBody &) = default ;
    DescribeDBNodesParametersResponseBody(DescribeDBNodesParametersResponseBody &&) = default ;
    DescribeDBNodesParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodesParametersResponseBody() = default ;
    DescribeDBNodesParametersResponseBody& operator=(const DescribeDBNodesParametersResponseBody &) = default ;
    DescribeDBNodesParametersResponseBody& operator=(DescribeDBNodesParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBNodeIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeIds& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
      };
      DBNodeIds() = default ;
      DBNodeIds(const DBNodeIds &) = default ;
      DBNodeIds(DBNodeIds &&) = default ;
      DBNodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeIds() = default ;
      DBNodeIds& operator=(const DBNodeIds &) = default ;
      DBNodeIds& operator=(DBNodeIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RunningParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunningParameters& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(DefaultParameterValue, defaultParameterValue_);
          DARABONBA_PTR_TO_JSON(Factor, factor_);
          DARABONBA_PTR_TO_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_TO_JSON(IsModifiable, isModifiable_);
          DARABONBA_PTR_TO_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ParameterStatus, parameterStatus_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, RunningParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(DefaultParameterValue, defaultParameterValue_);
          DARABONBA_PTR_FROM_JSON(Factor, factor_);
          DARABONBA_PTR_FROM_JSON(ForceRestart, forceRestart_);
          DARABONBA_PTR_FROM_JSON(IsModifiable, isModifiable_);
          DARABONBA_PTR_FROM_JSON(IsNodeAvailable, isNodeAvailable_);
          DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ParameterStatus, parameterStatus_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
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
        virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->dataType_ == nullptr && this->defaultParameterValue_ == nullptr && this->factor_ == nullptr && this->forceRestart_ == nullptr && this->isModifiable_ == nullptr
        && this->isNodeAvailable_ == nullptr && this->paramRelyRule_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterStatus_ == nullptr
        && this->parameterValue_ == nullptr; };
        // checkingCode Field Functions 
        bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
        void deleteCheckingCode() { this->checkingCode_ = nullptr;};
        inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
        inline RunningParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline RunningParameters& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // defaultParameterValue Field Functions 
        bool hasDefaultParameterValue() const { return this->defaultParameterValue_ != nullptr;};
        void deleteDefaultParameterValue() { this->defaultParameterValue_ = nullptr;};
        inline string getDefaultParameterValue() const { DARABONBA_PTR_GET_DEFAULT(defaultParameterValue_, "") };
        inline RunningParameters& setDefaultParameterValue(string defaultParameterValue) { DARABONBA_PTR_SET_VALUE(defaultParameterValue_, defaultParameterValue) };


        // factor Field Functions 
        bool hasFactor() const { return this->factor_ != nullptr;};
        void deleteFactor() { this->factor_ = nullptr;};
        inline string getFactor() const { DARABONBA_PTR_GET_DEFAULT(factor_, "") };
        inline RunningParameters& setFactor(string factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


        // forceRestart Field Functions 
        bool hasForceRestart() const { return this->forceRestart_ != nullptr;};
        void deleteForceRestart() { this->forceRestart_ = nullptr;};
        inline bool getForceRestart() const { DARABONBA_PTR_GET_DEFAULT(forceRestart_, false) };
        inline RunningParameters& setForceRestart(bool forceRestart) { DARABONBA_PTR_SET_VALUE(forceRestart_, forceRestart) };


        // isModifiable Field Functions 
        bool hasIsModifiable() const { return this->isModifiable_ != nullptr;};
        void deleteIsModifiable() { this->isModifiable_ = nullptr;};
        inline bool getIsModifiable() const { DARABONBA_PTR_GET_DEFAULT(isModifiable_, false) };
        inline RunningParameters& setIsModifiable(bool isModifiable) { DARABONBA_PTR_SET_VALUE(isModifiable_, isModifiable) };


        // isNodeAvailable Field Functions 
        bool hasIsNodeAvailable() const { return this->isNodeAvailable_ != nullptr;};
        void deleteIsNodeAvailable() { this->isNodeAvailable_ = nullptr;};
        inline string getIsNodeAvailable() const { DARABONBA_PTR_GET_DEFAULT(isNodeAvailable_, "") };
        inline RunningParameters& setIsNodeAvailable(string isNodeAvailable) { DARABONBA_PTR_SET_VALUE(isNodeAvailable_, isNodeAvailable) };


        // paramRelyRule Field Functions 
        bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
        void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
        inline string getParamRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
        inline RunningParameters& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline RunningParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline RunningParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // parameterStatus Field Functions 
        bool hasParameterStatus() const { return this->parameterStatus_ != nullptr;};
        void deleteParameterStatus() { this->parameterStatus_ = nullptr;};
        inline string getParameterStatus() const { DARABONBA_PTR_GET_DEFAULT(parameterStatus_, "") };
        inline RunningParameters& setParameterStatus(string parameterStatus) { DARABONBA_PTR_SET_VALUE(parameterStatus_, parameterStatus) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline RunningParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The valid values of the parameter.
        shared_ptr<string> checkingCode_ {};
        // The data type of the parameter value. Valid values:
        // 
        // *   **INT**
        // *   **STRING**
        // *   **B**
        shared_ptr<string> dataType_ {};
        // The default value of the parameter.
        shared_ptr<string> defaultParameterValue_ {};
        // A divisor of the parameter. For a parameter of the integer or byte type, the valid values must be a multiple of Factor unless you set Factor to 0.
        shared_ptr<string> factor_ {};
        // Indicates whether a cluster restart is required to allow the parameter modification to take effect. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> forceRestart_ {};
        // Indicates whether the parameter can be modified. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> isModifiable_ {};
        // Indicates whether the parameter is a global parameter. Valid values:
        // 
        // *   **0**: yes. The modified parameter value is synchronized to other nodes.
        // *   **1**: no. You can customize the nodes to which the modified parameter value can be synchronized to.
        shared_ptr<string> isNodeAvailable_ {};
        // The dependencies of the parameter.
        shared_ptr<string> paramRelyRule_ {};
        // The description of the parameter.
        shared_ptr<string> parameterDescription_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The status of the parameter. Valid values:
        // 
        // *   **normal**
        // *   **modifying**
        shared_ptr<string> parameterStatus_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->runningParameters_ == nullptr; };
      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline DBNodeIds& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // runningParameters Field Functions 
      bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
      void deleteRunningParameters() { this->runningParameters_ = nullptr;};
      inline const vector<DBNodeIds::RunningParameters> & getRunningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, vector<DBNodeIds::RunningParameters>) };
      inline vector<DBNodeIds::RunningParameters> getRunningParameters() { DARABONBA_PTR_GET(runningParameters_, vector<DBNodeIds::RunningParameters>) };
      inline DBNodeIds& setRunningParameters(const vector<DBNodeIds::RunningParameters> & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
      inline DBNodeIds& setRunningParameters(vector<DBNodeIds::RunningParameters> && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


    protected:
      // The ID of the node.
      shared_ptr<string> DBNodeId_ {};
      // The parameters of the current node.
      shared_ptr<vector<DBNodeIds::RunningParameters>> runningParameters_ {};
    };

    virtual bool empty() const override { return this->DBNodeIds_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->engine_ == nullptr && this->requestId_ == nullptr; };
    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const vector<DescribeDBNodesParametersResponseBody::DBNodeIds> & getDBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<DescribeDBNodesParametersResponseBody::DBNodeIds>) };
    inline vector<DescribeDBNodesParametersResponseBody::DBNodeIds> getDBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<DescribeDBNodesParametersResponseBody::DBNodeIds>) };
    inline DescribeDBNodesParametersResponseBody& setDBNodeIds(const vector<DescribeDBNodesParametersResponseBody::DBNodeIds> & dBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, dBNodeIds) };
    inline DescribeDBNodesParametersResponseBody& setDBNodeIds(vector<DescribeDBNodesParametersResponseBody::DBNodeIds> && dBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, dBNodeIds) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBNodesParametersResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBNodesParametersResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBNodesParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBNodesParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the nodes.
    shared_ptr<vector<DescribeDBNodesParametersResponseBody::DBNodeIds>> DBNodeIds_ {};
    // The type of the database engine. Set the value to **MySQL**.
    shared_ptr<string> DBType_ {};
    // The version of the MySQL database engine. Valid values:
    // 
    // *   **5.6**
    // *   **5.7**
    // *   **8.0**
    shared_ptr<string> DBVersion_ {};
    // The cluster engine.
    shared_ptr<string> engine_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
