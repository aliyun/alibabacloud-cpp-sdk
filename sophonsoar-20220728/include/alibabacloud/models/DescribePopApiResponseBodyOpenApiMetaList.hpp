// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODYOPENAPIMETALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODYOPENAPIMETALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePopApiResponseBodyOpenApiMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePopApiResponseBodyOpenApiMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePopApiResponseBodyOpenApiMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePopApiResponseBodyOpenApiMetaList() = default ;
    DescribePopApiResponseBodyOpenApiMetaList(const DescribePopApiResponseBodyOpenApiMetaList &) = default ;
    DescribePopApiResponseBodyOpenApiMetaList(DescribePopApiResponseBodyOpenApiMetaList &&) = default ;
    DescribePopApiResponseBodyOpenApiMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePopApiResponseBodyOpenApiMetaList() = default ;
    DescribePopApiResponseBodyOpenApiMetaList& operator=(const DescribePopApiResponseBodyOpenApiMetaList &) = default ;
    DescribePopApiResponseBodyOpenApiMetaList& operator=(DescribePopApiResponseBodyOpenApiMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->exampleValue_ == nullptr && return this->name_ == nullptr && return this->required_ == nullptr && return this->style_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePopApiResponseBodyOpenApiMetaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline DescribePopApiResponseBodyOpenApiMetaList& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePopApiResponseBodyOpenApiMetaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DescribePopApiResponseBodyOpenApiMetaList& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline DescribePopApiResponseBodyOpenApiMetaList& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePopApiResponseBodyOpenApiMetaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The parameter description.
    std::shared_ptr<string> description_ = nullptr;
    // The example value.
    std::shared_ptr<string> exampleValue_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the parameter is required.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    // The data type of the parameter field. Valid values:
    // 
    // *   **string**
    // *   **boolean**
    // *   **integer**
    // *   **long**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
