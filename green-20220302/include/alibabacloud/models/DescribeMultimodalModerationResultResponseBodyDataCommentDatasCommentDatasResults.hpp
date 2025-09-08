// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATASCOMMENTDATASRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATACOMMENTDATASCOMMENTDATASRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults(const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults(DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults &&) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults() = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& operator=(const DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults &) = default ;
    DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& operator=(DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->label_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeMultimodalModerationResultResponseBodyDataCommentDatasCommentDatasResults& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
