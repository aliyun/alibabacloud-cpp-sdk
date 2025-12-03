// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYREQUESTPARAMETERSREQUESTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYREQUESTPARAMETERSREQUESTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyRequestParametersRequestParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyRequestParametersRequestParameter& obj) { 
      DARABONBA_PTR_TO_JSON(ApiParameterName, apiParameterName_);
      DARABONBA_PTR_TO_JSON(ArrayItemsType, arrayItemsType_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocOrder, docOrder_);
      DARABONBA_PTR_TO_JSON(DocShow, docShow_);
      DARABONBA_PTR_TO_JSON(EnumValue, enumValue_);
      DARABONBA_PTR_TO_JSON(JsonScheme, jsonScheme_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_TO_JSON(RegularExpression, regularExpression_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyRequestParametersRequestParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiParameterName, apiParameterName_);
      DARABONBA_PTR_FROM_JSON(ArrayItemsType, arrayItemsType_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocOrder, docOrder_);
      DARABONBA_PTR_FROM_JSON(DocShow, docShow_);
      DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
      DARABONBA_PTR_FROM_JSON(JsonScheme, jsonScheme_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(ParameterType, parameterType_);
      DARABONBA_PTR_FROM_JSON(RegularExpression, regularExpression_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter() = default ;
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter(const DescribeApiHistoryResponseBodyRequestParametersRequestParameter &) = default ;
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter(DescribeApiHistoryResponseBodyRequestParametersRequestParameter &&) = default ;
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyRequestParametersRequestParameter() = default ;
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter& operator=(const DescribeApiHistoryResponseBodyRequestParametersRequestParameter &) = default ;
    DescribeApiHistoryResponseBodyRequestParametersRequestParameter& operator=(DescribeApiHistoryResponseBodyRequestParametersRequestParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiParameterName_ == nullptr
        && return this->arrayItemsType_ == nullptr && return this->defaultValue_ == nullptr && return this->demoValue_ == nullptr && return this->description_ == nullptr && return this->docOrder_ == nullptr
        && return this->docShow_ == nullptr && return this->enumValue_ == nullptr && return this->jsonScheme_ == nullptr && return this->location_ == nullptr && return this->maxLength_ == nullptr
        && return this->maxValue_ == nullptr && return this->minLength_ == nullptr && return this->minValue_ == nullptr && return this->parameterType_ == nullptr && return this->regularExpression_ == nullptr
        && return this->required_ == nullptr; };
    // apiParameterName Field Functions 
    bool hasApiParameterName() const { return this->apiParameterName_ != nullptr;};
    void deleteApiParameterName() { this->apiParameterName_ = nullptr;};
    inline string apiParameterName() const { DARABONBA_PTR_GET_DEFAULT(apiParameterName_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setApiParameterName(string apiParameterName) { DARABONBA_PTR_SET_VALUE(apiParameterName_, apiParameterName) };


    // arrayItemsType Field Functions 
    bool hasArrayItemsType() const { return this->arrayItemsType_ != nullptr;};
    void deleteArrayItemsType() { this->arrayItemsType_ = nullptr;};
    inline string arrayItemsType() const { DARABONBA_PTR_GET_DEFAULT(arrayItemsType_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setArrayItemsType(string arrayItemsType) { DARABONBA_PTR_SET_VALUE(arrayItemsType_, arrayItemsType) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // demoValue Field Functions 
    bool hasDemoValue() const { return this->demoValue_ != nullptr;};
    void deleteDemoValue() { this->demoValue_ = nullptr;};
    inline string demoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // docOrder Field Functions 
    bool hasDocOrder() const { return this->docOrder_ != nullptr;};
    void deleteDocOrder() { this->docOrder_ = nullptr;};
    inline int32_t docOrder() const { DARABONBA_PTR_GET_DEFAULT(docOrder_, 0) };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setDocOrder(int32_t docOrder) { DARABONBA_PTR_SET_VALUE(docOrder_, docOrder) };


    // docShow Field Functions 
    bool hasDocShow() const { return this->docShow_ != nullptr;};
    void deleteDocShow() { this->docShow_ = nullptr;};
    inline string docShow() const { DARABONBA_PTR_GET_DEFAULT(docShow_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setDocShow(string docShow) { DARABONBA_PTR_SET_VALUE(docShow_, docShow) };


    // enumValue Field Functions 
    bool hasEnumValue() const { return this->enumValue_ != nullptr;};
    void deleteEnumValue() { this->enumValue_ = nullptr;};
    inline string enumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


    // jsonScheme Field Functions 
    bool hasJsonScheme() const { return this->jsonScheme_ != nullptr;};
    void deleteJsonScheme() { this->jsonScheme_ = nullptr;};
    inline string jsonScheme() const { DARABONBA_PTR_GET_DEFAULT(jsonScheme_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setJsonScheme(string jsonScheme) { DARABONBA_PTR_SET_VALUE(jsonScheme_, jsonScheme) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int64_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int64_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int64_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0L) };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setMinLength(int64_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int64_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0L) };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setMinValue(int64_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // parameterType Field Functions 
    bool hasParameterType() const { return this->parameterType_ != nullptr;};
    void deleteParameterType() { this->parameterType_ = nullptr;};
    inline string parameterType() const { DARABONBA_PTR_GET_DEFAULT(parameterType_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setParameterType(string parameterType) { DARABONBA_PTR_SET_VALUE(parameterType_, parameterType) };


    // regularExpression Field Functions 
    bool hasRegularExpression() const { return this->regularExpression_ != nullptr;};
    void deleteRegularExpression() { this->regularExpression_ = nullptr;};
    inline string regularExpression() const { DARABONBA_PTR_GET_DEFAULT(regularExpression_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setRegularExpression(string regularExpression) { DARABONBA_PTR_SET_VALUE(regularExpression_, regularExpression) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline string required() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
    inline DescribeApiHistoryResponseBodyRequestParametersRequestParameter& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // The name of the parameter in the API request.
    std::shared_ptr<string> apiParameterName_ = nullptr;
    // The type of the array element.
    std::shared_ptr<string> arrayItemsType_ = nullptr;
    // The default value.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The sample value.
    std::shared_ptr<string> demoValue_ = nullptr;
    // The parameter description.
    std::shared_ptr<string> description_ = nullptr;
    // The order in which the parameter is sorted in the document.
    std::shared_ptr<int32_t> docOrder_ = nullptr;
    // Indicates whether the document is public. Valid values: **PUBLIC** and **PRIVATE**.
    std::shared_ptr<string> docShow_ = nullptr;
    // The hash values that are supported when **ParameterType** is set to Int, Long, Float, Double, or String. Separate values with commas (,). Examples: 1,2,3,4,9 and A,B,C,E,F.
    std::shared_ptr<string> enumValue_ = nullptr;
    // JSON scheme
    std::shared_ptr<string> jsonScheme_ = nullptr;
    // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
    std::shared_ptr<string> location_ = nullptr;
    // The maximum parameter length when **ParameterType** is set to String.
    std::shared_ptr<int64_t> maxLength_ = nullptr;
    // The maximum parameter value when **ParameterType** is set to Int, Long, Float, or Double.
    std::shared_ptr<int64_t> maxValue_ = nullptr;
    // The minimum parameter length when **ParameterType** is set to String.
    std::shared_ptr<int64_t> minLength_ = nullptr;
    // The minimum parameter value when **ParameterType** is set to Int, Long, Float, or Double.
    std::shared_ptr<int64_t> minValue_ = nullptr;
    // The data type of the parameter. Valid values: String, Int, Long, Float, Double, and Boolean.
    std::shared_ptr<string> parameterType_ = nullptr;
    // The regular expression that is used for parameter validation when **ParameterType** is set to String.
    std::shared_ptr<string> regularExpression_ = nullptr;
    // Indicates whether the parameter is required. Valid values: **REQUIRED** and **OPTIONAL**.
    std::shared_ptr<string> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
