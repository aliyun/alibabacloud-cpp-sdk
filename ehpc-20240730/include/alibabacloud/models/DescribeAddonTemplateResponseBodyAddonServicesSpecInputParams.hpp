// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODYADDONSERVICESSPECINPUTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODYADDONSERVICESSPECINPUTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& obj) { 
      DARABONBA_PTR_TO_JSON(HelpText, helpText_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& obj) { 
      DARABONBA_PTR_FROM_JSON(HelpText, helpText_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams() = default ;
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams(const DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams &) = default ;
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams(DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams &&) = default ;
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams() = default ;
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& operator=(const DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams &) = default ;
    DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& operator=(DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->helpText_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // helpText Field Functions 
    bool hasHelpText() const { return this->helpText_ != nullptr;};
    void deleteHelpText() { this->helpText_ = nullptr;};
    inline string helpText() const { DARABONBA_PTR_GET_DEFAULT(helpText_, "") };
    inline DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& setHelpText(string helpText) { DARABONBA_PTR_SET_VALUE(helpText_, helpText) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The help information of the parameter.
    std::shared_ptr<string> helpText_ = nullptr;
    // The parameter label.
    std::shared_ptr<string> label_ = nullptr;
    // The parameter name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter type.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The parameter value.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
