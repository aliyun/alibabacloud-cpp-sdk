// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODYTEMPLATECRITERIONISSUELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODYTEMPLATECRITERIONISSUELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& obj) { 
      DARABONBA_PTR_TO_JSON(CriterionIssues, criterionIssues_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
      DARABONBA_PTR_TO_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_TO_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& obj) { 
      DARABONBA_PTR_FROM_JSON(CriterionIssues, criterionIssues_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
      DARABONBA_PTR_FROM_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_FROM_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList() = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList(const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList &) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList(GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList &&) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList() = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& operator=(const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList &) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& operator=(GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->criterionIssues_ != nullptr
        && this->templateName_ != nullptr && this->templateUrl_ != nullptr && this->totalCriterionIssueCount_ != nullptr && this->totalMandatoryCriterionIssueCount_ != nullptr; };
    // criterionIssues Field Functions 
    bool hasCriterionIssues() const { return this->criterionIssues_ != nullptr;};
    void deleteCriterionIssues() { this->criterionIssues_ = nullptr;};
    inline const vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues> & criterionIssues() const { DARABONBA_PTR_GET_CONST(criterionIssues_, vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues>) };
    inline vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues> criterionIssues() { DARABONBA_PTR_GET(criterionIssues_, vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues>) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setCriterionIssues(const vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues> & criterionIssues) { DARABONBA_PTR_SET_VALUE(criterionIssues_, criterionIssues) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setCriterionIssues(vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues> && criterionIssues) { DARABONBA_PTR_SET_RVALUE(criterionIssues_, criterionIssues) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateUrl Field Functions 
    bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
    void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
    inline int32_t templateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setTemplateUrl(int32_t templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


    // totalCriterionIssueCount Field Functions 
    bool hasTotalCriterionIssueCount() const { return this->totalCriterionIssueCount_ != nullptr;};
    void deleteTotalCriterionIssueCount() { this->totalCriterionIssueCount_ = nullptr;};
    inline int32_t totalCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setTotalCriterionIssueCount(int32_t totalCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalCriterionIssueCount_, totalCriterionIssueCount) };


    // totalMandatoryCriterionIssueCount Field Functions 
    bool hasTotalMandatoryCriterionIssueCount() const { return this->totalMandatoryCriterionIssueCount_ != nullptr;};
    void deleteTotalMandatoryCriterionIssueCount() { this->totalMandatoryCriterionIssueCount_ = nullptr;};
    inline int32_t totalMandatoryCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalMandatoryCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueList& setTotalMandatoryCriterionIssueCount(int32_t totalMandatoryCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalMandatoryCriterionIssueCount_, totalMandatoryCriterionIssueCount) };


  protected:
    std::shared_ptr<vector<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues>> criterionIssues_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<int32_t> templateUrl_ = nullptr;
    std::shared_ptr<int32_t> totalCriterionIssueCount_ = nullptr;
    std::shared_ptr<int32_t> totalMandatoryCriterionIssueCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
