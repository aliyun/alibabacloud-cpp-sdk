// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATASUMMARYSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATASUMMARYSUMMARIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataDataSummarySummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& obj) { 
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries() = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries(const GetHotTopicBroadcastResponseBodyDataDataSummarySummaries &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries(GetHotTopicBroadcastResponseBodyDataDataSummarySummaries &&) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataDataSummarySummaries() = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& operator=(const GetHotTopicBroadcastResponseBodyDataDataSummarySummaries &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& operator=(GetHotTopicBroadcastResponseBodyDataDataSummarySummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->summary_ != nullptr
        && this->title_ != nullptr; };
    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataSummarySummaries& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
