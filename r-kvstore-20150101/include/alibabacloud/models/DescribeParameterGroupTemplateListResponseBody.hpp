// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeParameterGroupTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupTemplateListResponseBody() = default ;
    DescribeParameterGroupTemplateListResponseBody(const DescribeParameterGroupTemplateListResponseBody &) = default ;
    DescribeParameterGroupTemplateListResponseBody(DescribeParameterGroupTemplateListResponseBody &&) = default ;
    DescribeParameterGroupTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupTemplateListResponseBody() = default ;
    DescribeParameterGroupTemplateListResponseBody& operator=(const DescribeParameterGroupTemplateListResponseBody &) = default ;
    DescribeParameterGroupTemplateListResponseBody& operator=(DescribeParameterGroupTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_TO_JSON(Effective, effective_);
        DARABONBA_PTR_TO_JSON(Factor, factor_);
        DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        DARABONBA_PTR_TO_JSON(Revisable, revisable_);
        DARABONBA_PTR_TO_JSON(SupportModifyForMinorVersion, supportModifyForMinorVersion_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
        DARABONBA_PTR_FROM_JSON(Effective, effective_);
        DARABONBA_PTR_FROM_JSON(Factor, factor_);
        DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        DARABONBA_PTR_FROM_JSON(Revisable, revisable_);
        DARABONBA_PTR_FROM_JSON(SupportModifyForMinorVersion, supportModifyForMinorVersion_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
      virtual bool empty() const override { return this->checkingCode_ == nullptr
        && this->effective_ == nullptr && this->factor_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr && this->parameterValue_ == nullptr
        && this->revisable_ == nullptr && this->supportModifyForMinorVersion_ == nullptr && this->unit_ == nullptr; };
      // checkingCode Field Functions 
      bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
      void deleteCheckingCode() { this->checkingCode_ = nullptr;};
      inline string getCheckingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
      inline Parameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


      // effective Field Functions 
      bool hasEffective() const { return this->effective_ != nullptr;};
      void deleteEffective() { this->effective_ = nullptr;};
      inline int64_t getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, 0L) };
      inline Parameters& setEffective(int64_t effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


      // factor Field Functions 
      bool hasFactor() const { return this->factor_ != nullptr;};
      void deleteFactor() { this->factor_ = nullptr;};
      inline int64_t getFactor() const { DARABONBA_PTR_GET_DEFAULT(factor_, 0L) };
      inline Parameters& setFactor(int64_t factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


      // parameterDescription Field Functions 
      bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
      void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
      inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
      inline Parameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline Parameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      // revisable Field Functions 
      bool hasRevisable() const { return this->revisable_ != nullptr;};
      void deleteRevisable() { this->revisable_ = nullptr;};
      inline int64_t getRevisable() const { DARABONBA_PTR_GET_DEFAULT(revisable_, 0L) };
      inline Parameters& setRevisable(int64_t revisable) { DARABONBA_PTR_SET_VALUE(revisable_, revisable) };


      // supportModifyForMinorVersion Field Functions 
      bool hasSupportModifyForMinorVersion() const { return this->supportModifyForMinorVersion_ != nullptr;};
      void deleteSupportModifyForMinorVersion() { this->supportModifyForMinorVersion_ = nullptr;};
      inline bool getSupportModifyForMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(supportModifyForMinorVersion_, false) };
      inline Parameters& setSupportModifyForMinorVersion(bool supportModifyForMinorVersion) { DARABONBA_PTR_SET_VALUE(supportModifyForMinorVersion_, supportModifyForMinorVersion) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Parameters& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The regular expression used to validate input.
      shared_ptr<string> checkingCode_ {};
      // Indicates whether the modification takes effect. Valid values: 0 and 1. A value of 0 indicates that the modification does not take effect. A value of 1 indicates that the modification takes effect.
      shared_ptr<int64_t> effective_ {};
      // A divisor of the parameter. For a parameter of the integer or byte type, the valid values must be a multiple of Factor unless you set Factor to 0.
      shared_ptr<int64_t> factor_ {};
      // The description of the parameter.
      shared_ptr<string> parameterDescription_ {};
      // The parameter name.
      shared_ptr<string> parameterName_ {};
      // The default value of the parameter.
      shared_ptr<string> parameterValue_ {};
      // Indicates whether the parameter can be modified. Valid values:
      // 
      // *   **0: The parameter cannot be modified.**
      // *   **1**: The parameter can be modified.
      shared_ptr<int64_t> revisable_ {};
      // Indicates whether the minor version can be changed. Valid values: true and false.
      shared_ptr<bool> supportModifyForMinorVersion_ {};
      // The unit of the parameter value. Valid values: INT (ordinary integer), STRING (fixed string), and B (byte).
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->engineVersion_ == nullptr
        && this->parameters_ == nullptr && this->requestId_ == nullptr; };
    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeParameterGroupTemplateListResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeParameterGroupTemplateListResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeParameterGroupTemplateListResponseBody::Parameters>) };
    inline vector<DescribeParameterGroupTemplateListResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeParameterGroupTemplateListResponseBody::Parameters>) };
    inline DescribeParameterGroupTemplateListResponseBody& setParameters(const vector<DescribeParameterGroupTemplateListResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeParameterGroupTemplateListResponseBody& setParameters(vector<DescribeParameterGroupTemplateListResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compatible engine version. Valid values:
    // 
    // Redis Open Source Edition: 5.0, 6.0, and 7.0. Tair DRAM-based instances: 5.0 and 6.0. Tair persistent memory-optimized instances: 6.0. Tair ESSD-based instances: 4.0.
    shared_ptr<string> engineVersion_ {};
    // The information about parameters.
    shared_ptr<vector<DescribeParameterGroupTemplateListResponseBody::Parameters>> parameters_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
