// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODYAIVIDEOCATEGORYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBRESPONSEBODYAIVIDEOCATEGORYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCategoryJob, AIVideoCategoryJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCategoryJob, AIVideoCategoryJob_);
    };
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList() = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList(const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList &) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList(ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList &&) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList() = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& operator=(const ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList &) = default ;
    ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& operator=(ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCategoryJob_ != nullptr; };
    // AIVideoCategoryJob Field Functions 
    bool hasAIVideoCategoryJob() const { return this->AIVideoCategoryJob_ != nullptr;};
    void deleteAIVideoCategoryJob() { this->AIVideoCategoryJob_ = nullptr;};
    inline const vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob> & AIVideoCategoryJob() const { DARABONBA_PTR_GET_CONST(AIVideoCategoryJob_, vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob>) };
    inline vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob> AIVideoCategoryJob() { DARABONBA_PTR_GET(AIVideoCategoryJob_, vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob>) };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& setAIVideoCategoryJob(const vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob> & AIVideoCategoryJob) { DARABONBA_PTR_SET_VALUE(AIVideoCategoryJob_, AIVideoCategoryJob) };
    inline ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobList& setAIVideoCategoryJob(vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob> && AIVideoCategoryJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCategoryJob_, AIVideoCategoryJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoCategoryJobResponseBodyAIVideoCategoryJobListAIVideoCategoryJob>> AIVideoCategoryJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
