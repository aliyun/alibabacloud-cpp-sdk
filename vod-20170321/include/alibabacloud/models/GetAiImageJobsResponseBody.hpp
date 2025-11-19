// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIIMAGEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIImageJobsResponseBodyAIImageJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIImageJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIImageJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageJobList, AIImageJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIImageJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageJobList, AIImageJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIImageJobsResponseBody() = default ;
    GetAIImageJobsResponseBody(const GetAIImageJobsResponseBody &) = default ;
    GetAIImageJobsResponseBody(GetAIImageJobsResponseBody &&) = default ;
    GetAIImageJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIImageJobsResponseBody() = default ;
    GetAIImageJobsResponseBody& operator=(const GetAIImageJobsResponseBody &) = default ;
    GetAIImageJobsResponseBody& operator=(GetAIImageJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIImageJobList_ == nullptr
        && return this->requestId_ == nullptr; };
    // AIImageJobList Field Functions 
    bool hasAIImageJobList() const { return this->AIImageJobList_ != nullptr;};
    void deleteAIImageJobList() { this->AIImageJobList_ = nullptr;};
    inline const vector<GetAIImageJobsResponseBodyAIImageJobList> & AIImageJobList() const { DARABONBA_PTR_GET_CONST(AIImageJobList_, vector<GetAIImageJobsResponseBodyAIImageJobList>) };
    inline vector<GetAIImageJobsResponseBodyAIImageJobList> AIImageJobList() { DARABONBA_PTR_GET(AIImageJobList_, vector<GetAIImageJobsResponseBodyAIImageJobList>) };
    inline GetAIImageJobsResponseBody& setAIImageJobList(const vector<GetAIImageJobsResponseBodyAIImageJobList> & AIImageJobList) { DARABONBA_PTR_SET_VALUE(AIImageJobList_, AIImageJobList) };
    inline GetAIImageJobsResponseBody& setAIImageJobList(vector<GetAIImageJobsResponseBodyAIImageJobList> && AIImageJobList) { DARABONBA_PTR_SET_RVALUE(AIImageJobList_, AIImageJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIImageJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image AI processing jobs.
    std::shared_ptr<vector<GetAIImageJobsResponseBodyAIImageJobList>> AIImageJobList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
