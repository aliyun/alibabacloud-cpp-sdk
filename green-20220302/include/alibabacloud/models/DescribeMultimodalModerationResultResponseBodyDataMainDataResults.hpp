// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATAMAINDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATAMAINDATARESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyDataMainDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyDataMainDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyDataMainDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults() = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults(const DescribeMultimodalModerationResultResponseBodyDataMainDataResults &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults(DescribeMultimodalModerationResultResponseBodyDataMainDataResults &&) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyDataMainDataResults() = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults& operator=(const DescribeMultimodalModerationResultResponseBodyDataMainDataResults &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataMainDataResults& operator=(DescribeMultimodalModerationResultResponseBodyDataMainDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->label_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMultimodalModerationResultResponseBodyDataMainDataResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeMultimodalModerationResultResponseBodyDataMainDataResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
