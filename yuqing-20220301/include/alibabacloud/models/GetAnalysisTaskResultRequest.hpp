// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANALYSISTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETANALYSISTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class GetAnalysisTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnalysisTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(teamHashId, teamHashId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnalysisTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(teamHashId, teamHashId_);
    };
    GetAnalysisTaskResultRequest() = default ;
    GetAnalysisTaskResultRequest(const GetAnalysisTaskResultRequest &) = default ;
    GetAnalysisTaskResultRequest(GetAnalysisTaskResultRequest &&) = default ;
    GetAnalysisTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnalysisTaskResultRequest() = default ;
    GetAnalysisTaskResultRequest& operator=(const GetAnalysisTaskResultRequest &) = default ;
    GetAnalysisTaskResultRequest& operator=(GetAnalysisTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisId_ == nullptr
        && return this->requestId_ == nullptr && return this->teamHashId_ == nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline int64_t analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, 0L) };
    inline GetAnalysisTaskResultRequest& setAnalysisId(int64_t analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAnalysisTaskResultRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // teamHashId Field Functions 
    bool hasTeamHashId() const { return this->teamHashId_ != nullptr;};
    void deleteTeamHashId() { this->teamHashId_ = nullptr;};
    inline string teamHashId() const { DARABONBA_PTR_GET_DEFAULT(teamHashId_, "") };
    inline GetAnalysisTaskResultRequest& setTeamHashId(string teamHashId) { DARABONBA_PTR_SET_VALUE(teamHashId_, teamHashId) };


  protected:
    std::shared_ptr<int64_t> analysisId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> teamHashId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
