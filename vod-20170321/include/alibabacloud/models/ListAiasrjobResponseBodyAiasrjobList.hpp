// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIASRJOBRESPONSEBODYAIASRJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIASRJOBRESPONSEBODYAIASRJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIASRJobResponseBodyAIASRJobListAIASRJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIASRJobResponseBodyAIASRJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIASRJobResponseBodyAIASRJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIASRJob, AIASRJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIASRJobResponseBodyAIASRJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIASRJob, AIASRJob_);
    };
    ListAIASRJobResponseBodyAIASRJobList() = default ;
    ListAIASRJobResponseBodyAIASRJobList(const ListAIASRJobResponseBodyAIASRJobList &) = default ;
    ListAIASRJobResponseBodyAIASRJobList(ListAIASRJobResponseBodyAIASRJobList &&) = default ;
    ListAIASRJobResponseBodyAIASRJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIASRJobResponseBodyAIASRJobList() = default ;
    ListAIASRJobResponseBodyAIASRJobList& operator=(const ListAIASRJobResponseBodyAIASRJobList &) = default ;
    ListAIASRJobResponseBodyAIASRJobList& operator=(ListAIASRJobResponseBodyAIASRJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIASRJob_ != nullptr; };
    // AIASRJob Field Functions 
    bool hasAIASRJob() const { return this->AIASRJob_ != nullptr;};
    void deleteAIASRJob() { this->AIASRJob_ = nullptr;};
    inline const vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob> & AIASRJob() const { DARABONBA_PTR_GET_CONST(AIASRJob_, vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob>) };
    inline vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob> AIASRJob() { DARABONBA_PTR_GET(AIASRJob_, vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob>) };
    inline ListAIASRJobResponseBodyAIASRJobList& setAIASRJob(const vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob> & AIASRJob) { DARABONBA_PTR_SET_VALUE(AIASRJob_, AIASRJob) };
    inline ListAIASRJobResponseBodyAIASRJobList& setAIASRJob(vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob> && AIASRJob) { DARABONBA_PTR_SET_RVALUE(AIASRJob_, AIASRJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIASRJobResponseBodyAIASRJobListAIASRJob>> AIASRJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
