// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSummaryTemplateResponseBodyDataPropertyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetSummaryTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Editor, editor_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Editor, editor_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetSummaryTemplateResponseBodyData() = default ;
    GetSummaryTemplateResponseBodyData(const GetSummaryTemplateResponseBodyData &) = default ;
    GetSummaryTemplateResponseBodyData(GetSummaryTemplateResponseBodyData &&) = default ;
    GetSummaryTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryTemplateResponseBodyData() = default ;
    GetSummaryTemplateResponseBodyData& operator=(const GetSummaryTemplateResponseBodyData &) = default ;
    GetSummaryTemplateResponseBodyData& operator=(GetSummaryTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->editor_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->propertyList_ != nullptr && this->state_ != nullptr
        && this->templateId_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetSummaryTemplateResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // editor Field Functions 
    bool hasEditor() const { return this->editor_ != nullptr;};
    void deleteEditor() { this->editor_ = nullptr;};
    inline string editor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
    inline GetSummaryTemplateResponseBodyData& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSummaryTemplateResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSummaryTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyList Field Functions 
    bool hasPropertyList() const { return this->propertyList_ != nullptr;};
    void deletePropertyList() { this->propertyList_ = nullptr;};
    inline const vector<Models::GetSummaryTemplateResponseBodyDataPropertyList> & propertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<Models::GetSummaryTemplateResponseBodyDataPropertyList>) };
    inline vector<Models::GetSummaryTemplateResponseBodyDataPropertyList> propertyList() { DARABONBA_PTR_GET(propertyList_, vector<Models::GetSummaryTemplateResponseBodyDataPropertyList>) };
    inline GetSummaryTemplateResponseBodyData& setPropertyList(const vector<Models::GetSummaryTemplateResponseBodyDataPropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
    inline GetSummaryTemplateResponseBodyData& setPropertyList(vector<Models::GetSummaryTemplateResponseBodyDataPropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSummaryTemplateResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetSummaryTemplateResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> editor_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetSummaryTemplateResponseBodyDataPropertyList>> propertyList_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
