// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUrlModerationResultResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlModerationResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlModerationResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    DescribeUrlModerationResultResponseBodyDataResult() = default ;
    DescribeUrlModerationResultResponseBodyDataResult(const DescribeUrlModerationResultResponseBodyDataResult &) = default ;
    DescribeUrlModerationResultResponseBodyDataResult(DescribeUrlModerationResultResponseBodyDataResult &&) = default ;
    DescribeUrlModerationResultResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlModerationResultResponseBodyDataResult() = default ;
    DescribeUrlModerationResultResponseBodyDataResult& operator=(const DescribeUrlModerationResultResponseBodyDataResult &) = default ;
    DescribeUrlModerationResultResponseBodyDataResult& operator=(DescribeUrlModerationResultResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->label_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline DescribeUrlModerationResultResponseBodyDataResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeUrlModerationResultResponseBodyDataResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
    std::shared_ptr<float> confidence_ = nullptr;
    // The labels returned after the asynchronous URL moderation.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
