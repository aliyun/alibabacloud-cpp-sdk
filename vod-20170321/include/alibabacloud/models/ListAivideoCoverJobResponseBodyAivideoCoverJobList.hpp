// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBRESPONSEBODYAIVIDEOCOVERJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBRESPONSEBODYAIVIDEOCOVERJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCoverJobResponseBodyAIVideoCoverJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCoverJob, AIVideoCoverJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCoverJob, AIVideoCoverJob_);
    };
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList() = default ;
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList(const ListAIVideoCoverJobResponseBodyAIVideoCoverJobList &) = default ;
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList(ListAIVideoCoverJobResponseBodyAIVideoCoverJobList &&) = default ;
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCoverJobResponseBodyAIVideoCoverJobList() = default ;
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& operator=(const ListAIVideoCoverJobResponseBodyAIVideoCoverJobList &) = default ;
    ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& operator=(ListAIVideoCoverJobResponseBodyAIVideoCoverJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCoverJob_ != nullptr; };
    // AIVideoCoverJob Field Functions 
    bool hasAIVideoCoverJob() const { return this->AIVideoCoverJob_ != nullptr;};
    void deleteAIVideoCoverJob() { this->AIVideoCoverJob_ = nullptr;};
    inline const vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob> & AIVideoCoverJob() const { DARABONBA_PTR_GET_CONST(AIVideoCoverJob_, vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob>) };
    inline vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob> AIVideoCoverJob() { DARABONBA_PTR_GET(AIVideoCoverJob_, vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob>) };
    inline ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& setAIVideoCoverJob(const vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob> & AIVideoCoverJob) { DARABONBA_PTR_SET_VALUE(AIVideoCoverJob_, AIVideoCoverJob) };
    inline ListAIVideoCoverJobResponseBodyAIVideoCoverJobList& setAIVideoCoverJob(vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob> && AIVideoCoverJob) { DARABONBA_PTR_SET_RVALUE(AIVideoCoverJob_, AIVideoCoverJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoCoverJobResponseBodyAIVideoCoverJobListAIVideoCoverJob>> AIVideoCoverJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
