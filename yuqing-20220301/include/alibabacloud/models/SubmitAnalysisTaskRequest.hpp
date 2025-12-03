// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class SubmitAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analyseType, analyseType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_TO_JSON(teamHashId, teamHashId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analyseType, analyseType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_FROM_JSON(teamHashId, teamHashId_);
    };
    SubmitAnalysisTaskRequest() = default ;
    SubmitAnalysisTaskRequest(const SubmitAnalysisTaskRequest &) = default ;
    SubmitAnalysisTaskRequest(SubmitAnalysisTaskRequest &&) = default ;
    SubmitAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisTaskRequest() = default ;
    SubmitAnalysisTaskRequest& operator=(const SubmitAnalysisTaskRequest &) = default ;
    SubmitAnalysisTaskRequest& operator=(SubmitAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyseType_ == nullptr
        && return this->requestId_ == nullptr && return this->searchCondition_ == nullptr && return this->teamHashId_ == nullptr; };
    // analyseType Field Functions 
    bool hasAnalyseType() const { return this->analyseType_ != nullptr;};
    void deleteAnalyseType() { this->analyseType_ = nullptr;};
    inline string analyseType() const { DARABONBA_PTR_GET_DEFAULT(analyseType_, "") };
    inline SubmitAnalysisTaskRequest& setAnalyseType(string analyseType) { DARABONBA_PTR_SET_VALUE(analyseType_, analyseType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAnalysisTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline const SearchCondition & searchCondition() const { DARABONBA_PTR_GET_CONST(searchCondition_, SearchCondition) };
    inline SearchCondition searchCondition() { DARABONBA_PTR_GET(searchCondition_, SearchCondition) };
    inline SubmitAnalysisTaskRequest& setSearchCondition(const SearchCondition & searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };
    inline SubmitAnalysisTaskRequest& setSearchCondition(SearchCondition && searchCondition) { DARABONBA_PTR_SET_RVALUE(searchCondition_, searchCondition) };


    // teamHashId Field Functions 
    bool hasTeamHashId() const { return this->teamHashId_ != nullptr;};
    void deleteTeamHashId() { this->teamHashId_ = nullptr;};
    inline string teamHashId() const { DARABONBA_PTR_GET_DEFAULT(teamHashId_, "") };
    inline SubmitAnalysisTaskRequest& setTeamHashId(string teamHashId) { DARABONBA_PTR_SET_VALUE(teamHashId_, teamHashId) };


  protected:
    std::shared_ptr<string> analyseType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<SearchCondition> searchCondition_ = nullptr;
    std::shared_ptr<string> teamHashId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
