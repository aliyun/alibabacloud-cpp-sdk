// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODYAIJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODYAIJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIJobResponseBodyAIJobListAIJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIJobResponseBodyAIJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIJobResponseBodyAIJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIJob, AIJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIJobResponseBodyAIJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJob, AIJob_);
    };
    ListAIJobResponseBodyAIJobList() = default ;
    ListAIJobResponseBodyAIJobList(const ListAIJobResponseBodyAIJobList &) = default ;
    ListAIJobResponseBodyAIJobList(ListAIJobResponseBodyAIJobList &&) = default ;
    ListAIJobResponseBodyAIJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIJobResponseBodyAIJobList() = default ;
    ListAIJobResponseBodyAIJobList& operator=(const ListAIJobResponseBodyAIJobList &) = default ;
    ListAIJobResponseBodyAIJobList& operator=(ListAIJobResponseBodyAIJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIJob_ != nullptr; };
    // AIJob Field Functions 
    bool hasAIJob() const { return this->AIJob_ != nullptr;};
    void deleteAIJob() { this->AIJob_ = nullptr;};
    inline const vector<Models::ListAIJobResponseBodyAIJobListAIJob> & AIJob() const { DARABONBA_PTR_GET_CONST(AIJob_, vector<Models::ListAIJobResponseBodyAIJobListAIJob>) };
    inline vector<Models::ListAIJobResponseBodyAIJobListAIJob> AIJob() { DARABONBA_PTR_GET(AIJob_, vector<Models::ListAIJobResponseBodyAIJobListAIJob>) };
    inline ListAIJobResponseBodyAIJobList& setAIJob(const vector<Models::ListAIJobResponseBodyAIJobListAIJob> & AIJob) { DARABONBA_PTR_SET_VALUE(AIJob_, AIJob) };
    inline ListAIJobResponseBodyAIJobList& setAIJob(vector<Models::ListAIJobResponseBodyAIJobListAIJob> && AIJob) { DARABONBA_PTR_SET_RVALUE(AIJob_, AIJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIJobResponseBodyAIJobListAIJob>> AIJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
