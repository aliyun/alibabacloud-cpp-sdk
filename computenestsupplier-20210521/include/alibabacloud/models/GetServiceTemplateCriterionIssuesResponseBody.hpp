// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTemplateCriterionIssuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateCriterionIssuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskyTemplateCount, riskyTemplateCount_);
      DARABONBA_PTR_TO_JSON(TemplateCriterionIssueList, templateCriterionIssueList_);
      DARABONBA_PTR_TO_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_TO_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateCriterionIssuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskyTemplateCount, riskyTemplateCount_);
      DARABONBA_PTR_FROM_JSON(TemplateCriterionIssueList, templateCriterionIssueList_);
      DARABONBA_PTR_FROM_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_FROM_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    GetServiceTemplateCriterionIssuesResponseBody() = default ;
    GetServiceTemplateCriterionIssuesResponseBody(const GetServiceTemplateCriterionIssuesResponseBody &) = default ;
    GetServiceTemplateCriterionIssuesResponseBody(GetServiceTemplateCriterionIssuesResponseBody &&) = default ;
    GetServiceTemplateCriterionIssuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateCriterionIssuesResponseBody() = default ;
    GetServiceTemplateCriterionIssuesResponseBody& operator=(const GetServiceTemplateCriterionIssuesResponseBody &) = default ;
    GetServiceTemplateCriterionIssuesResponseBody& operator=(GetServiceTemplateCriterionIssuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->riskyTemplateCount_ != nullptr && this->templateCriterionIssueList_ != nullptr && this->totalCriterionIssueCount_ != nullptr && this->totalMandatoryCriterionIssueCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskyTemplateCount Field Functions 
    bool hasRiskyTemplateCount() const { return this->riskyTemplateCount_ != nullptr;};
    void deleteRiskyTemplateCount() { this->riskyTemplateCount_ = nullptr;};
    inline int32_t riskyTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(riskyTemplateCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setRiskyTemplateCount(int32_t riskyTemplateCount) { DARABONBA_PTR_SET_VALUE(riskyTemplateCount_, riskyTemplateCount) };


    // templateCriterionIssueList Field Functions 
    bool hasTemplateCriterionIssueList() const { return this->templateCriterionIssueList_ != nullptr;};
    void deleteTemplateCriterionIssueList() { this->templateCriterionIssueList_ = nullptr;};
    inline const vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList> & templateCriterionIssueList() const { DARABONBA_PTR_GET_CONST(templateCriterionIssueList_, vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList>) };
    inline vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList> templateCriterionIssueList() { DARABONBA_PTR_GET(templateCriterionIssueList_, vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList>) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTemplateCriterionIssueList(const vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList> & templateCriterionIssueList) { DARABONBA_PTR_SET_VALUE(templateCriterionIssueList_, templateCriterionIssueList) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTemplateCriterionIssueList(vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList> && templateCriterionIssueList) { DARABONBA_PTR_SET_RVALUE(templateCriterionIssueList_, templateCriterionIssueList) };


    // totalCriterionIssueCount Field Functions 
    bool hasTotalCriterionIssueCount() const { return this->totalCriterionIssueCount_ != nullptr;};
    void deleteTotalCriterionIssueCount() { this->totalCriterionIssueCount_ = nullptr;};
    inline int32_t totalCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTotalCriterionIssueCount(int32_t totalCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalCriterionIssueCount_, totalCriterionIssueCount) };


    // totalMandatoryCriterionIssueCount Field Functions 
    bool hasTotalMandatoryCriterionIssueCount() const { return this->totalMandatoryCriterionIssueCount_ != nullptr;};
    void deleteTotalMandatoryCriterionIssueCount() { this->totalMandatoryCriterionIssueCount_ = nullptr;};
    inline int32_t totalMandatoryCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalMandatoryCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTotalMandatoryCriterionIssueCount(int32_t totalMandatoryCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalMandatoryCriterionIssueCount_, totalMandatoryCriterionIssueCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> riskyTemplateCount_ = nullptr;
    std::shared_ptr<vector<GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList>> templateCriterionIssueList_ = nullptr;
    std::shared_ptr<int32_t> totalCriterionIssueCount_ = nullptr;
    std::shared_ptr<int32_t> totalMandatoryCriterionIssueCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
