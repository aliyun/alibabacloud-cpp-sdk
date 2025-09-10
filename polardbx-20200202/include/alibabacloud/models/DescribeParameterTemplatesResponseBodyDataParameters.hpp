// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYDATAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYDATAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterTemplatesResponseBodyDataParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBodyDataParameters& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_TO_JSON(Revisable, revisable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBodyDataParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingCode, checkingCode_);
      DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_FROM_JSON(Revisable, revisable_);
    };
    DescribeParameterTemplatesResponseBodyDataParameters() = default ;
    DescribeParameterTemplatesResponseBodyDataParameters(const DescribeParameterTemplatesResponseBodyDataParameters &) = default ;
    DescribeParameterTemplatesResponseBodyDataParameters(DescribeParameterTemplatesResponseBodyDataParameters &&) = default ;
    DescribeParameterTemplatesResponseBodyDataParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBodyDataParameters() = default ;
    DescribeParameterTemplatesResponseBodyDataParameters& operator=(const DescribeParameterTemplatesResponseBodyDataParameters &) = default ;
    DescribeParameterTemplatesResponseBodyDataParameters& operator=(DescribeParameterTemplatesResponseBodyDataParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingCode_ != nullptr
        && this->dynamic_ != nullptr && this->parameterDescription_ != nullptr && this->parameterName_ != nullptr && this->parameterValue_ != nullptr && this->revisable_ != nullptr; };
    // checkingCode Field Functions 
    bool hasCheckingCode() const { return this->checkingCode_ != nullptr;};
    void deleteCheckingCode() { this->checkingCode_ = nullptr;};
    inline string checkingCode() const { DARABONBA_PTR_GET_DEFAULT(checkingCode_, "") };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setCheckingCode(string checkingCode) { DARABONBA_PTR_SET_VALUE(checkingCode_, checkingCode) };


    // dynamic Field Functions 
    bool hasDynamic() const { return this->dynamic_ != nullptr;};
    void deleteDynamic() { this->dynamic_ = nullptr;};
    inline int32_t dynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, 0) };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setDynamic(int32_t dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    // revisable Field Functions 
    bool hasRevisable() const { return this->revisable_ != nullptr;};
    void deleteRevisable() { this->revisable_ = nullptr;};
    inline int32_t revisable() const { DARABONBA_PTR_GET_DEFAULT(revisable_, 0) };
    inline DescribeParameterTemplatesResponseBodyDataParameters& setRevisable(int32_t revisable) { DARABONBA_PTR_SET_VALUE(revisable_, revisable) };


  protected:
    std::shared_ptr<string> checkingCode_ = nullptr;
    std::shared_ptr<int32_t> dynamic_ = nullptr;
    std::shared_ptr<string> parameterDescription_ = nullptr;
    std::shared_ptr<string> parameterName_ = nullptr;
    std::shared_ptr<string> parameterValue_ = nullptr;
    std::shared_ptr<int32_t> revisable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
