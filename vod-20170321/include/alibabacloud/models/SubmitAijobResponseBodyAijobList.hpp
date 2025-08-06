// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODYAIJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODYAIJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitAIJobResponseBodyAIJobListAIJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIJobResponseBodyAIJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIJobResponseBodyAIJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIJob, AIJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIJobResponseBodyAIJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJob, AIJob_);
    };
    SubmitAIJobResponseBodyAIJobList() = default ;
    SubmitAIJobResponseBodyAIJobList(const SubmitAIJobResponseBodyAIJobList &) = default ;
    SubmitAIJobResponseBodyAIJobList(SubmitAIJobResponseBodyAIJobList &&) = default ;
    SubmitAIJobResponseBodyAIJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIJobResponseBodyAIJobList() = default ;
    SubmitAIJobResponseBodyAIJobList& operator=(const SubmitAIJobResponseBodyAIJobList &) = default ;
    SubmitAIJobResponseBodyAIJobList& operator=(SubmitAIJobResponseBodyAIJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJob_ != nullptr; };
    // AIJob Field Functions 
    bool hasAIJob() const { return this->AIJob_ != nullptr;};
    void deleteAIJob() { this->AIJob_ = nullptr;};
    inline const vector<Models::SubmitAIJobResponseBodyAIJobListAIJob> & AIJob() const { DARABONBA_PTR_GET_CONST(AIJob_, vector<Models::SubmitAIJobResponseBodyAIJobListAIJob>) };
    inline vector<Models::SubmitAIJobResponseBodyAIJobListAIJob> AIJob() { DARABONBA_PTR_GET(AIJob_, vector<Models::SubmitAIJobResponseBodyAIJobListAIJob>) };
    inline SubmitAIJobResponseBodyAIJobList& setAIJob(const vector<Models::SubmitAIJobResponseBodyAIJobListAIJob> & AIJob) { DARABONBA_PTR_SET_VALUE(AIJob_, AIJob) };
    inline SubmitAIJobResponseBodyAIJobList& setAIJob(vector<Models::SubmitAIJobResponseBodyAIJobListAIJob> && AIJob) { DARABONBA_PTR_SET_RVALUE(AIJob_, AIJob) };


  protected:
    std::shared_ptr<vector<Models::SubmitAIJobResponseBodyAIJobListAIJob>> AIJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
