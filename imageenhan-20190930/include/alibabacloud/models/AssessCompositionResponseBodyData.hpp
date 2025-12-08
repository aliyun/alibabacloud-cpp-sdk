// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessCompositionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessCompositionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, AssessCompositionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    AssessCompositionResponseBodyData() = default ;
    AssessCompositionResponseBodyData(const AssessCompositionResponseBodyData &) = default ;
    AssessCompositionResponseBodyData(AssessCompositionResponseBodyData &&) = default ;
    AssessCompositionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessCompositionResponseBodyData() = default ;
    AssessCompositionResponseBodyData& operator=(const AssessCompositionResponseBodyData &) = default ;
    AssessCompositionResponseBodyData& operator=(AssessCompositionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline AssessCompositionResponseBodyData& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
