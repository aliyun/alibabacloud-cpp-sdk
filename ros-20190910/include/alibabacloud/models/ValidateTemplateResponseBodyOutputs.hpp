// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ValidateTemplateResponseBodyOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateResponseBodyOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(OutputKey, outputKey_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateResponseBodyOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(OutputKey, outputKey_);
    };
    ValidateTemplateResponseBodyOutputs() = default ;
    ValidateTemplateResponseBodyOutputs(const ValidateTemplateResponseBodyOutputs &) = default ;
    ValidateTemplateResponseBodyOutputs(ValidateTemplateResponseBodyOutputs &&) = default ;
    ValidateTemplateResponseBodyOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateResponseBodyOutputs() = default ;
    ValidateTemplateResponseBodyOutputs& operator=(const ValidateTemplateResponseBodyOutputs &) = default ;
    ValidateTemplateResponseBodyOutputs& operator=(ValidateTemplateResponseBodyOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->label_ != nullptr && this->outputKey_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ValidateTemplateResponseBodyOutputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ValidateTemplateResponseBodyOutputs& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // outputKey Field Functions 
    bool hasOutputKey() const { return this->outputKey_ != nullptr;};
    void deleteOutputKey() { this->outputKey_ = nullptr;};
    inline string outputKey() const { DARABONBA_PTR_GET_DEFAULT(outputKey_, "") };
    inline ValidateTemplateResponseBodyOutputs& setOutputKey(string outputKey) { DARABONBA_PTR_SET_VALUE(outputKey_, outputKey) };


  protected:
    // The description of the template output.
    std::shared_ptr<string> description_ = nullptr;
    // The alias of the template output.
    std::shared_ptr<string> label_ = nullptr;
    // The name of the template output.
    std::shared_ptr<string> outputKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
