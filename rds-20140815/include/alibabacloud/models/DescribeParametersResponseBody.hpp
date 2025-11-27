// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeParametersResponseBodyConfigParameters.hpp>
#include <alibabacloud/models/DescribeParametersResponseBodyParamGroupInfo.hpp>
#include <alibabacloud/models/DescribeParametersResponseBodyRunningParameters.hpp>
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
    virtual bool empty() const override { return this->configParameters_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->paramGroupInfo_ == nullptr && return this->requestId_ == nullptr && return this->runningParameters_ == nullptr; };
    // configParameters Field Functions 
    bool hasConfigParameters() const { return this->configParameters_ != nullptr;};
    void deleteConfigParameters() { this->configParameters_ = nullptr;};
    inline const DescribeParametersResponseBodyConfigParameters & configParameters() const { DARABONBA_PTR_GET_CONST(configParameters_, DescribeParametersResponseBodyConfigParameters) };
    inline DescribeParametersResponseBodyConfigParameters configParameters() { DARABONBA_PTR_GET(configParameters_, DescribeParametersResponseBodyConfigParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(const DescribeParametersResponseBodyConfigParameters & configParameters) { DARABONBA_PTR_SET_VALUE(configParameters_, configParameters) };
    inline DescribeParametersResponseBody& setConfigParameters(DescribeParametersResponseBodyConfigParameters && configParameters) { DARABONBA_PTR_SET_RVALUE(configParameters_, configParameters) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParametersResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParametersResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // paramGroupInfo Field Functions 
    bool hasParamGroupInfo() const { return this->paramGroupInfo_ != nullptr;};
    void deleteParamGroupInfo() { this->paramGroupInfo_ = nullptr;};
    inline const DescribeParametersResponseBodyParamGroupInfo & paramGroupInfo() const { DARABONBA_PTR_GET_CONST(paramGroupInfo_, DescribeParametersResponseBodyParamGroupInfo) };
    inline DescribeParametersResponseBodyParamGroupInfo paramGroupInfo() { DARABONBA_PTR_GET(paramGroupInfo_, DescribeParametersResponseBodyParamGroupInfo) };
    inline DescribeParametersResponseBody& setParamGroupInfo(const DescribeParametersResponseBodyParamGroupInfo & paramGroupInfo) { DARABONBA_PTR_SET_VALUE(paramGroupInfo_, paramGroupInfo) };
    inline DescribeParametersResponseBody& setParamGroupInfo(DescribeParametersResponseBodyParamGroupInfo && paramGroupInfo) { DARABONBA_PTR_SET_RVALUE(paramGroupInfo_, paramGroupInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningParameters Field Functions 
    bool hasRunningParameters() const { return this->runningParameters_ != nullptr;};
    void deleteRunningParameters() { this->runningParameters_ = nullptr;};
    inline const DescribeParametersResponseBodyRunningParameters & runningParameters() const { DARABONBA_PTR_GET_CONST(runningParameters_, DescribeParametersResponseBodyRunningParameters) };
    inline DescribeParametersResponseBodyRunningParameters runningParameters() { DARABONBA_PTR_GET(runningParameters_, DescribeParametersResponseBodyRunningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(const DescribeParametersResponseBodyRunningParameters & runningParameters) { DARABONBA_PTR_SET_VALUE(runningParameters_, runningParameters) };
    inline DescribeParametersResponseBody& setRunningParameters(DescribeParametersResponseBodyRunningParameters && runningParameters) { DARABONBA_PTR_SET_RVALUE(runningParameters_, runningParameters) };


  protected:
    // The list of parameters that are being synchronized.
    // 
    // > After you modify and submit the parameters, you must wait for the parameters to be synchronized to the instance. After the synchronization, you can delete the parameters from the list.
    std::shared_ptr<DescribeParametersResponseBodyConfigParameters> configParameters_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The information about the parameter template.
    std::shared_ptr<DescribeParametersResponseBodyParamGroupInfo> paramGroupInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The parameters that are in use.
    std::shared_ptr<DescribeParametersResponseBodyRunningParameters> runningParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
