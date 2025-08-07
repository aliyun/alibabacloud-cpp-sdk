// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeParameterTemplatesResponseBodyParameters.hpp>
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
    virtual bool empty() const override { this->DBType_ != nullptr
        && this->DBVersion_ != nullptr && this->engine_ != nullptr && this->parameterCount_ != nullptr && this->parameters_ != nullptr && this->requestId_ != nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeParameterTemplatesResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeParameterTemplatesResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParameterTemplatesResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // parameterCount Field Functions 
    bool hasParameterCount() const { return this->parameterCount_ != nullptr;};
    void deleteParameterCount() { this->parameterCount_ = nullptr;};
    inline string parameterCount() const { DARABONBA_PTR_GET_DEFAULT(parameterCount_, "") };
    inline DescribeParameterTemplatesResponseBody& setParameterCount(string parameterCount) { DARABONBA_PTR_SET_VALUE(parameterCount_, parameterCount) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeParameterTemplatesResponseBodyParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeParameterTemplatesResponseBodyParameters) };
    inline DescribeParameterTemplatesResponseBodyParameters parameters() { DARABONBA_PTR_GET(parameters_, DescribeParameterTemplatesResponseBodyParameters) };
    inline DescribeParameterTemplatesResponseBody& setParameters(const DescribeParameterTemplatesResponseBodyParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeParameterTemplatesResponseBody& setParameters(DescribeParameterTemplatesResponseBodyParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the database engine.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The database engine of the cluster.
    std::shared_ptr<string> engine_ = nullptr;
    // The number of parameters.
    std::shared_ptr<string> parameterCount_ = nullptr;
    // The details of the parameters.
    std::shared_ptr<DescribeParameterTemplatesResponseBodyParameters> parameters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
