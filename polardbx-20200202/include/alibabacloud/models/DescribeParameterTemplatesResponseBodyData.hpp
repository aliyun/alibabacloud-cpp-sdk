// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterTemplatesResponseBodyDataParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ParameterCount, parameterCount_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ParameterCount, parameterCount_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    DescribeParameterTemplatesResponseBodyData() = default ;
    DescribeParameterTemplatesResponseBodyData(const DescribeParameterTemplatesResponseBodyData &) = default ;
    DescribeParameterTemplatesResponseBodyData(DescribeParameterTemplatesResponseBodyData &&) = default ;
    DescribeParameterTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBodyData() = default ;
    DescribeParameterTemplatesResponseBodyData& operator=(const DescribeParameterTemplatesResponseBodyData &) = default ;
    DescribeParameterTemplatesResponseBodyData& operator=(DescribeParameterTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && return this->engineVersion_ == nullptr && return this->parameterCount_ == nullptr && return this->parameters_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeParameterTemplatesResponseBodyData& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParameterTemplatesResponseBodyData& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // parameterCount Field Functions 
    bool hasParameterCount() const { return this->parameterCount_ != nullptr;};
    void deleteParameterCount() { this->parameterCount_ = nullptr;};
    inline int32_t parameterCount() const { DARABONBA_PTR_GET_DEFAULT(parameterCount_, 0) };
    inline DescribeParameterTemplatesResponseBodyData& setParameterCount(int32_t parameterCount) { DARABONBA_PTR_SET_VALUE(parameterCount_, parameterCount) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::DescribeParameterTemplatesResponseBodyDataParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::DescribeParameterTemplatesResponseBodyDataParameters>) };
    inline vector<Models::DescribeParameterTemplatesResponseBodyDataParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::DescribeParameterTemplatesResponseBodyDataParameters>) };
    inline DescribeParameterTemplatesResponseBodyData& setParameters(const vector<Models::DescribeParameterTemplatesResponseBodyDataParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeParameterTemplatesResponseBodyData& setParameters(vector<Models::DescribeParameterTemplatesResponseBodyDataParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<int32_t> parameterCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeParameterTemplatesResponseBodyDataParameters>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
