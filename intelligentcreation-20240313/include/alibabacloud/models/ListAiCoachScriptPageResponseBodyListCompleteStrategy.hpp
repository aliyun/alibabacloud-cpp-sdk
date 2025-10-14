// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCOMPLETESTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCOMPLETESTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCompleteStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCompleteStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCompleteStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(clickCompleteAutoEnd, clickCompleteAutoEnd_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(fullCoverageAutoEnd, fullCoverageAutoEnd_);
    };
    ListAICoachScriptPageResponseBodyListCompleteStrategy() = default ;
    ListAICoachScriptPageResponseBodyListCompleteStrategy(const ListAICoachScriptPageResponseBodyListCompleteStrategy &) = default ;
    ListAICoachScriptPageResponseBodyListCompleteStrategy(ListAICoachScriptPageResponseBodyListCompleteStrategy &&) = default ;
    ListAICoachScriptPageResponseBodyListCompleteStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCompleteStrategy() = default ;
    ListAICoachScriptPageResponseBodyListCompleteStrategy& operator=(const ListAICoachScriptPageResponseBodyListCompleteStrategy &) = default ;
    ListAICoachScriptPageResponseBodyListCompleteStrategy& operator=(ListAICoachScriptPageResponseBodyListCompleteStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clickCompleteAutoEnd_ == nullptr
        && return this->duration_ == nullptr && return this->fullCoverageAutoEnd_ == nullptr; };
    // clickCompleteAutoEnd Field Functions 
    bool hasClickCompleteAutoEnd() const { return this->clickCompleteAutoEnd_ != nullptr;};
    void deleteClickCompleteAutoEnd() { this->clickCompleteAutoEnd_ = nullptr;};
    inline bool clickCompleteAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(clickCompleteAutoEnd_, false) };
    inline ListAICoachScriptPageResponseBodyListCompleteStrategy& setClickCompleteAutoEnd(bool clickCompleteAutoEnd) { DARABONBA_PTR_SET_VALUE(clickCompleteAutoEnd_, clickCompleteAutoEnd) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListAICoachScriptPageResponseBodyListCompleteStrategy& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fullCoverageAutoEnd Field Functions 
    bool hasFullCoverageAutoEnd() const { return this->fullCoverageAutoEnd_ != nullptr;};
    void deleteFullCoverageAutoEnd() { this->fullCoverageAutoEnd_ = nullptr;};
    inline bool fullCoverageAutoEnd() const { DARABONBA_PTR_GET_DEFAULT(fullCoverageAutoEnd_, false) };
    inline ListAICoachScriptPageResponseBodyListCompleteStrategy& setFullCoverageAutoEnd(bool fullCoverageAutoEnd) { DARABONBA_PTR_SET_VALUE(fullCoverageAutoEnd_, fullCoverageAutoEnd) };


  protected:
    std::shared_ptr<bool> clickCompleteAutoEnd_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<bool> fullCoverageAutoEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
