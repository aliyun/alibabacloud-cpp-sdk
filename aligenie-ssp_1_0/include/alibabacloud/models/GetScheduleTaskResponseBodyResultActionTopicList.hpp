// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODYRESULTACTIONTOPICLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODYRESULTACTIONTOPICLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetScheduleTaskResponseBodyResultActionTopicList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleTaskResponseBodyResultActionTopicList& obj) { 
      DARABONBA_ANY_TO_JSON(CustomAction, customAction_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleTaskResponseBodyResultActionTopicList& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomAction, customAction_);
    };
    GetScheduleTaskResponseBodyResultActionTopicList() = default ;
    GetScheduleTaskResponseBodyResultActionTopicList(const GetScheduleTaskResponseBodyResultActionTopicList &) = default ;
    GetScheduleTaskResponseBodyResultActionTopicList(GetScheduleTaskResponseBodyResultActionTopicList &&) = default ;
    GetScheduleTaskResponseBodyResultActionTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleTaskResponseBodyResultActionTopicList() = default ;
    GetScheduleTaskResponseBodyResultActionTopicList& operator=(const GetScheduleTaskResponseBodyResultActionTopicList &) = default ;
    GetScheduleTaskResponseBodyResultActionTopicList& operator=(GetScheduleTaskResponseBodyResultActionTopicList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customAction_ != nullptr; };
    // customAction Field Functions 
    bool hasCustomAction() const { return this->customAction_ != nullptr;};
    void deleteCustomAction() { this->customAction_ = nullptr;};
    inline     const Darabonba::Json & customAction() const { DARABONBA_GET(customAction_) };
    Darabonba::Json & customAction() { DARABONBA_GET(customAction_) };
    inline GetScheduleTaskResponseBodyResultActionTopicList& setCustomAction(const Darabonba::Json & customAction) { DARABONBA_SET_VALUE(customAction_, customAction) };
    inline GetScheduleTaskResponseBodyResultActionTopicList& setCustomAction(Darabonba::Json & customAction) { DARABONBA_SET_RVALUE(customAction_, customAction) };


  protected:
    Darabonba::Json customAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
