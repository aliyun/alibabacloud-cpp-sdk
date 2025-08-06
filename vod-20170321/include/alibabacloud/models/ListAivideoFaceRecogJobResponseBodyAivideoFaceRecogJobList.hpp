// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOFACERECOGJOBRESPONSEBODYAIVIDEOFACERECOGJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOFACERECOGJOBRESPONSEBODYAIVIDEOFACERECOGJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoFaceRecogJob, AIVideoFaceRecogJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoFaceRecogJob, AIVideoFaceRecogJob_);
    };
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList() = default ;
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList(const ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList &) = default ;
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList(ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList &&) = default ;
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList() = default ;
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& operator=(const ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList &) = default ;
    ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& operator=(ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoFaceRecogJob_ != nullptr; };
    // AIVideoFaceRecogJob Field Functions 
    bool hasAIVideoFaceRecogJob() const { return this->AIVideoFaceRecogJob_ != nullptr;};
    void deleteAIVideoFaceRecogJob() { this->AIVideoFaceRecogJob_ = nullptr;};
    inline const vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob> & AIVideoFaceRecogJob() const { DARABONBA_PTR_GET_CONST(AIVideoFaceRecogJob_, vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob>) };
    inline vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob> AIVideoFaceRecogJob() { DARABONBA_PTR_GET(AIVideoFaceRecogJob_, vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob>) };
    inline ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& setAIVideoFaceRecogJob(const vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob> & AIVideoFaceRecogJob) { DARABONBA_PTR_SET_VALUE(AIVideoFaceRecogJob_, AIVideoFaceRecogJob) };
    inline ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobList& setAIVideoFaceRecogJob(vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob> && AIVideoFaceRecogJob) { DARABONBA_PTR_SET_RVALUE(AIVideoFaceRecogJob_, AIVideoFaceRecogJob) };


  protected:
    std::shared_ptr<vector<Models::ListAIVideoFaceRecogJobResponseBodyAIVideoFaceRecogJobListAIVideoFaceRecogJob>> AIVideoFaceRecogJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
