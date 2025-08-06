// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODYAIVIDEOTERRORISMRECOGJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBRESPONSEBODYAIVIDEOTERRORISMRECOGJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTerrorismRecogJob, AIVideoTerrorismRecogJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTerrorismRecogJob, AIVideoTerrorismRecogJob_);
    };
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList() = default ;
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList(const ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList &) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList(ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList &&) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList() = default ;
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& operator=(const ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList &) = default ;
    ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& operator=(ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTerrorismRecogJob_ != nullptr; };
    // AIVideoTerrorismRecogJob Field Functions 
    bool hasAIVideoTerrorismRecogJob() const { return this->AIVideoTerrorismRecogJob_ != nullptr;};
    void deleteAIVideoTerrorismRecogJob() { this->AIVideoTerrorismRecogJob_ = nullptr;};
    inline const vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob> & AIVideoTerrorismRecogJob() const { DARABONBA_PTR_GET_CONST(AIVideoTerrorismRecogJob_, vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob>) };
    inline vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob> AIVideoTerrorismRecogJob() { DARABONBA_PTR_GET(AIVideoTerrorismRecogJob_, vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob>) };
    inline ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& setAIVideoTerrorismRecogJob(const vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob> & AIVideoTerrorismRecogJob) { DARABONBA_PTR_SET_VALUE(AIVideoTerrorismRecogJob_, AIVideoTerrorismRecogJob) };
    inline ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobList& setAIVideoTerrorismRecogJob(vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob> && AIVideoTerrorismRecogJob) { DARABONBA_PTR_SET_RVALUE(AIVideoTerrorismRecogJob_, AIVideoTerrorismRecogJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoTerrorismRecogJobResponseBodyAIVideoTerrorismRecogJobListAIVideoTerrorismRecogJob>> AIVideoTerrorismRecogJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
