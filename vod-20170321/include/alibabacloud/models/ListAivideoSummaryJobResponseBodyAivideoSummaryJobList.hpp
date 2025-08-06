// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOSUMMARYJOBRESPONSEBODYAIVIDEOSUMMARYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOSUMMARYJOBRESPONSEBODYAIVIDEOSUMMARYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoSummaryJob, AIVideoSummaryJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoSummaryJob, AIVideoSummaryJob_);
    };
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList() = default ;
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList(const ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList &) = default ;
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList(ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList &&) = default ;
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList() = default ;
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& operator=(const ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList &) = default ;
    ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& operator=(ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoSummaryJob_ != nullptr; };
    // AIVideoSummaryJob Field Functions 
    bool hasAIVideoSummaryJob() const { return this->AIVideoSummaryJob_ != nullptr;};
    void deleteAIVideoSummaryJob() { this->AIVideoSummaryJob_ = nullptr;};
    inline const vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob> & AIVideoSummaryJob() const { DARABONBA_PTR_GET_CONST(AIVideoSummaryJob_, vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob>) };
    inline vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob> AIVideoSummaryJob() { DARABONBA_PTR_GET(AIVideoSummaryJob_, vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob>) };
    inline ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& setAIVideoSummaryJob(const vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob> & AIVideoSummaryJob) { DARABONBA_PTR_SET_VALUE(AIVideoSummaryJob_, AIVideoSummaryJob) };
    inline ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobList& setAIVideoSummaryJob(vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob> && AIVideoSummaryJob) { DARABONBA_PTR_SET_RVALUE(AIVideoSummaryJob_, AIVideoSummaryJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoSummaryJobResponseBodyAIVideoSummaryJobListAIVideoSummaryJob>> AIVideoSummaryJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
