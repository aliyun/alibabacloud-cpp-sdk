// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTAGJOBRESPONSEBODYAIVIDEOTAGJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTAGJOBRESPONSEBODYAIVIDEOTAGJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTagJobResponseBodyAIVideoTagJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTagJobResponseBodyAIVideoTagJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTagJob, AIVideoTagJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTagJobResponseBodyAIVideoTagJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTagJob, AIVideoTagJob_);
    };
    ListAIVideoTagJobResponseBodyAIVideoTagJobList() = default ;
    ListAIVideoTagJobResponseBodyAIVideoTagJobList(const ListAIVideoTagJobResponseBodyAIVideoTagJobList &) = default ;
    ListAIVideoTagJobResponseBodyAIVideoTagJobList(ListAIVideoTagJobResponseBodyAIVideoTagJobList &&) = default ;
    ListAIVideoTagJobResponseBodyAIVideoTagJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTagJobResponseBodyAIVideoTagJobList() = default ;
    ListAIVideoTagJobResponseBodyAIVideoTagJobList& operator=(const ListAIVideoTagJobResponseBodyAIVideoTagJobList &) = default ;
    ListAIVideoTagJobResponseBodyAIVideoTagJobList& operator=(ListAIVideoTagJobResponseBodyAIVideoTagJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTagJob_ != nullptr; };
    // AIVideoTagJob Field Functions 
    bool hasAIVideoTagJob() const { return this->AIVideoTagJob_ != nullptr;};
    void deleteAIVideoTagJob() { this->AIVideoTagJob_ = nullptr;};
    inline const vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob> & AIVideoTagJob() const { DARABONBA_PTR_GET_CONST(AIVideoTagJob_, vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob>) };
    inline vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob> AIVideoTagJob() { DARABONBA_PTR_GET(AIVideoTagJob_, vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob>) };
    inline ListAIVideoTagJobResponseBodyAIVideoTagJobList& setAIVideoTagJob(const vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob> & AIVideoTagJob) { DARABONBA_PTR_SET_VALUE(AIVideoTagJob_, AIVideoTagJob) };
    inline ListAIVideoTagJobResponseBodyAIVideoTagJobList& setAIVideoTagJob(vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob> && AIVideoTagJob) { DARABONBA_PTR_SET_RVALUE(AIVideoTagJob_, AIVideoTagJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoTagJobResponseBodyAIVideoTagJobListAIVideoTagJob>> AIVideoTagJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
