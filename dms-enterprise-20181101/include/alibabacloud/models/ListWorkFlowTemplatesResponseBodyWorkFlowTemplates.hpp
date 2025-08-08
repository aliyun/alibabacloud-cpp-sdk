// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowTemplatesResponseBodyWorkFlowTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(WorkFlowTemplate, workFlowTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkFlowTemplate, workFlowTemplate_);
    };
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplates &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates(ListWorkFlowTemplatesResponseBodyWorkFlowTemplates &&) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplates() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& operator=(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplates &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& operator=(ListWorkFlowTemplatesResponseBodyWorkFlowTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workFlowTemplate_ != nullptr; };
    // workFlowTemplate Field Functions 
    bool hasWorkFlowTemplate() const { return this->workFlowTemplate_ != nullptr;};
    void deleteWorkFlowTemplate() { this->workFlowTemplate_ = nullptr;};
    inline const vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate> & workFlowTemplate() const { DARABONBA_PTR_GET_CONST(workFlowTemplate_, vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate>) };
    inline vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate> workFlowTemplate() { DARABONBA_PTR_GET(workFlowTemplate_, vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate>) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& setWorkFlowTemplate(const vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate> & workFlowTemplate) { DARABONBA_PTR_SET_VALUE(workFlowTemplate_, workFlowTemplate) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplates& setWorkFlowTemplate(vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate> && workFlowTemplate) { DARABONBA_PTR_SET_RVALUE(workFlowTemplate_, workFlowTemplate) };


  protected:
    std::shared_ptr<vector<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate>> workFlowTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
