// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATASUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATASUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotTopicSummariesResponseBodyDataSummarySummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListHotTopicSummariesResponseBodyDataSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicSummariesResponseBodyDataSummary& obj) { 
      DARABONBA_PTR_TO_JSON(summaries, summaries_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicSummariesResponseBodyDataSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(summaries, summaries_);
    };
    ListHotTopicSummariesResponseBodyDataSummary() = default ;
    ListHotTopicSummariesResponseBodyDataSummary(const ListHotTopicSummariesResponseBodyDataSummary &) = default ;
    ListHotTopicSummariesResponseBodyDataSummary(ListHotTopicSummariesResponseBodyDataSummary &&) = default ;
    ListHotTopicSummariesResponseBodyDataSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicSummariesResponseBodyDataSummary() = default ;
    ListHotTopicSummariesResponseBodyDataSummary& operator=(const ListHotTopicSummariesResponseBodyDataSummary &) = default ;
    ListHotTopicSummariesResponseBodyDataSummary& operator=(ListHotTopicSummariesResponseBodyDataSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summaries_ == nullptr; };
    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries>) };
    inline vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries>) };
    inline ListHotTopicSummariesResponseBodyDataSummary& setSummaries(const vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline ListHotTopicSummariesResponseBodyDataSummary& setSummaries(vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


  protected:
    std::shared_ptr<vector<Models::ListHotTopicSummariesResponseBodyDataSummarySummaries>> summaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
