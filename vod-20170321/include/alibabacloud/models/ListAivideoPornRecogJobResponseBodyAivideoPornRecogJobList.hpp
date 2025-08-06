// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOPORNRECOGJOBRESPONSEBODYAIVIDEOPORNRECOGJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOPORNRECOGJOBRESPONSEBODYAIVIDEOPORNRECOGJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoPornRecogJob, AIVideoPornRecogJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoPornRecogJob, AIVideoPornRecogJob_);
    };
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList() = default ;
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList(const ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList &) = default ;
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList(ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList &&) = default ;
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList() = default ;
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& operator=(const ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList &) = default ;
    ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& operator=(ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoPornRecogJob_ != nullptr; };
    // AIVideoPornRecogJob Field Functions 
    bool hasAIVideoPornRecogJob() const { return this->AIVideoPornRecogJob_ != nullptr;};
    void deleteAIVideoPornRecogJob() { this->AIVideoPornRecogJob_ = nullptr;};
    inline const vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob> & AIVideoPornRecogJob() const { DARABONBA_PTR_GET_CONST(AIVideoPornRecogJob_, vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob>) };
    inline vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob> AIVideoPornRecogJob() { DARABONBA_PTR_GET(AIVideoPornRecogJob_, vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob>) };
    inline ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& setAIVideoPornRecogJob(const vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob> & AIVideoPornRecogJob) { DARABONBA_PTR_SET_VALUE(AIVideoPornRecogJob_, AIVideoPornRecogJob) };
    inline ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobList& setAIVideoPornRecogJob(vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob> && AIVideoPornRecogJob) { DARABONBA_PTR_SET_RVALUE(AIVideoPornRecogJob_, AIVideoPornRecogJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoPornRecogJobResponseBodyAIVideoPornRecogJobListAIVideoPornRecogJob>> AIVideoPornRecogJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
