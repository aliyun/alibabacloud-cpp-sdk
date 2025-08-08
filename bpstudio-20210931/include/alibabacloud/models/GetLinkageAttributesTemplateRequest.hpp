// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINKAGEATTRIBUTESTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLINKAGEATTRIBUTESTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLinkageAttributesTemplateRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetLinkageAttributesTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLinkageAttributesTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TargetVariable, targetVariable_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_ANY_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetLinkageAttributesTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TargetVariable, targetVariable_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_ANY_FROM_JSON(Variables, variables_);
    };
    GetLinkageAttributesTemplateRequest() = default ;
    GetLinkageAttributesTemplateRequest(const GetLinkageAttributesTemplateRequest &) = default ;
    GetLinkageAttributesTemplateRequest(GetLinkageAttributesTemplateRequest &&) = default ;
    GetLinkageAttributesTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLinkageAttributesTemplateRequest() = default ;
    GetLinkageAttributesTemplateRequest& operator=(const GetLinkageAttributesTemplateRequest &) = default ;
    GetLinkageAttributesTemplateRequest& operator=(GetLinkageAttributesTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaId_ != nullptr
        && this->instances_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->targetVariable_ != nullptr && this->templateId_ != nullptr
        && this->variables_ != nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline GetLinkageAttributesTemplateRequest& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetLinkageAttributesTemplateRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetLinkageAttributesTemplateRequestInstances>) };
    inline vector<GetLinkageAttributesTemplateRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<GetLinkageAttributesTemplateRequestInstances>) };
    inline GetLinkageAttributesTemplateRequest& setInstances(const vector<GetLinkageAttributesTemplateRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetLinkageAttributesTemplateRequest& setInstances(vector<GetLinkageAttributesTemplateRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetLinkageAttributesTemplateRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetLinkageAttributesTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // targetVariable Field Functions 
    bool hasTargetVariable() const { return this->targetVariable_ != nullptr;};
    void deleteTargetVariable() { this->targetVariable_ = nullptr;};
    inline string targetVariable() const { DARABONBA_PTR_GET_DEFAULT(targetVariable_, "") };
    inline GetLinkageAttributesTemplateRequest& setTargetVariable(string targetVariable) { DARABONBA_PTR_SET_VALUE(targetVariable_, targetVariable) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLinkageAttributesTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & variables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & variables() { DARABONBA_GET(variables_) };
    inline GetLinkageAttributesTemplateRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline GetLinkageAttributesTemplateRequest& setVariables(Darabonba::Json & variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> areaId_ = nullptr;
    std::shared_ptr<vector<GetLinkageAttributesTemplateRequestInstances>> instances_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetVariable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    Darabonba::Json variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
