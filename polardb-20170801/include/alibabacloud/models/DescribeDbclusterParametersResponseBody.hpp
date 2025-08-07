// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterParametersResponseBodyParameters.hpp>
#include <alibabacloud/models/DescribeDBClusterParametersResponseBodyRunningParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ParameterNumbers, parameterNumbers_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningParameters, runningParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ParameterNumbers, parameterNumbers_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningParameters, runningParameters_);
    };
    DescribeDBClusterParametersResponseBody() = default ;
    DescribeDBClusterParametersResponseBody(const DescribeDBClusterParametersResponseBody &) = default ;
    DescribeDBClusterParametersResponseBody(DescribeDBClusterParametersResponseBody &&) = default ;
    DescribeDBClusterParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterParametersResponseBody() = default ;
    DescribeDBClusterParametersResponseBody& operator=(const DescribeDBClusterParametersResponseBody &) = default ;
    DescribeDBClusterParametersResponseBody& operator=(DescribeDBClusterParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->DBType_ != nullptr && this->DBVersion_ != nullptr && this->engine_ != nullptr && this->parameterNumbers_ != nullptr && this->parameters_ != nullptr
        && this->requestId_ != nullptr && this->runningParameters_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterParametersResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // parameterNumbers Field Functions 
    bool hasParameterNumbers() const { return this->parameterNumbers_ != nullptr;};
    void deleteParameterNumbers() { this->parameterNumbers_ = nullptr;};
    inline string parameterNumbers() const { DARABONBA_PTR_GET_DEFAULT(parameterNumbers_, "") };
    inline DescribeDBClusterParametersResponseBody& setParameterNumbers(string parameterNumbers) { DARABONBA_PTR_SET_VALUE(parameterNumbers_, parameterNumbers) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeDBClusterParametersResponseBodyParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeDBClusterParametersResponseBodyParameters) };
    inline DescribeDBClusterParametersResponseBodyParameters parameters() { DARABONBA_PTR_GET(parameters_, DescribeDBClusterParametersResponseBodyParameters) };
    inline DescribeDBClusterParametersResponseBody& setParameters(const DescribeDBClusterParametersResponseBodyParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeDBClusterParametersResponseBody& setParameters(DescribeDBClusterParametersResponseBodyParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeDBClusterParametersResponseBodyRunningParameters & runningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeDBClusterParametersResponseBodyRunningParameters) };
    inline DescribeDBClusterParametersResponseBodyRunningParameters runningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeDBClusterParametersResponseBodyRunningParameters) };
    inline DescribeDBClusterParametersResponseBody& setRunningParameters(const DescribeDBClusterParametersResponseBodyRunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeDBClusterParametersResponseBody& setRunningParameters(DescribeDBClusterParametersResponseBodyRunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database engine that the clusters runs. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine. 
    // 
    // - Valid values for the MySQL database engine:   
    //   - **5.6**
    //   - **5.7**
    //   - **8.0**
    // - Valid value for the PostgreSQL database engine:    
    //   - **11**
    //   - **14**
    // - Valid value for the Oracle database engine:  **11**
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The cluster engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The number of parameters.
    std::shared_ptr<string> parameterNumbers_ = nullptr;
    // A comparison of parameters between the source RDS instance and the destination PolarDB cluster.
    std::shared_ptr<DescribeDBClusterParametersResponseBodyParameters> parameters_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The parameters of the PolarDB cluster.
    std::shared_ptr<DescribeDBClusterParametersResponseBodyRunningParameters> runningParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
