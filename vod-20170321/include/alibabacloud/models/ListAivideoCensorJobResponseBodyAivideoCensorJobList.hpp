// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCENSORJOBRESPONSEBODYAIVIDEOCENSORJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCENSORJOBRESPONSEBODYAIVIDEOCENSORJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCensorJobResponseBodyAIVideoCensorJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCensorJob, AIVideoCensorJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCensorJob, AIVideoCensorJob_);
    };
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList() = default ;
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList(const ListAIVideoCensorJobResponseBodyAIVideoCensorJobList &) = default ;
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList(ListAIVideoCensorJobResponseBodyAIVideoCensorJobList &&) = default ;
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCensorJobResponseBodyAIVideoCensorJobList() = default ;
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& operator=(const ListAIVideoCensorJobResponseBodyAIVideoCensorJobList &) = default ;
    ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& operator=(ListAIVideoCensorJobResponseBodyAIVideoCensorJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCensorJob_ != nullptr; };
    // AIVideoCensorJob Field Functions 
    bool hasAIVideoCensorJob() const { return this->AIVideoCensorJob_ != nullptr;};
    void deleteAIVideoCensorJob() { this->AIVideoCensorJob_ = nullptr;};
    inline const vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob> & AIVideoCensorJob() const { DARABONBA_PTR_GET_CONST(AIVideoCensorJob_, vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob>) };
    inline vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob> AIVideoCensorJob() { DARABONBA_PTR_GET(AIVideoCensorJob_, vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob>) };
    inline ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& setAIVideoCensorJob(const vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob> & AIVideoCensorJob) { DARABONBA_PTR_SET_VALUE(AIVideoCensorJob_, AIVideoCensorJob) };
    inline ListAIVideoCensorJobResponseBodyAIVideoCensorJobList& setAIVideoCensorJob(vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob> && AIVideoCensorJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCensorJob_, AIVideoCensorJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoCensorJobResponseBodyAIVideoCensorJobListAIVideoCensorJob>> AIVideoCensorJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
