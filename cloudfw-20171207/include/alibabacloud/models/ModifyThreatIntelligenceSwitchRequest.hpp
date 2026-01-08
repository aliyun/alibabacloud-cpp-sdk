// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyThreatIntelligenceSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyThreatIntelligenceSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyThreatIntelligenceSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
    };
    ModifyThreatIntelligenceSwitchRequest() = default ;
    ModifyThreatIntelligenceSwitchRequest(const ModifyThreatIntelligenceSwitchRequest &) = default ;
    ModifyThreatIntelligenceSwitchRequest(ModifyThreatIntelligenceSwitchRequest &&) = default ;
    ModifyThreatIntelligenceSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyThreatIntelligenceSwitchRequest() = default ;
    ModifyThreatIntelligenceSwitchRequest& operator=(const ModifyThreatIntelligenceSwitchRequest &) = default ;
    ModifyThreatIntelligenceSwitchRequest& operator=(ModifyThreatIntelligenceSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      };
      friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      };
      CategoryList() = default ;
      CategoryList(const CategoryList &) = default ;
      CategoryList(CategoryList &&) = default ;
      CategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CategoryList() = default ;
      CategoryList& operator=(const CategoryList &) = default ;
      CategoryList& operator=(CategoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->categoryId_ == nullptr && this->enableStatus_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline CategoryList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline CategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline CategoryList& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> categoryId_ {};
      shared_ptr<string> enableStatus_ {};
    };

    virtual bool empty() const override { return this->categoryList_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<ModifyThreatIntelligenceSwitchRequest::CategoryList> & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<ModifyThreatIntelligenceSwitchRequest::CategoryList>) };
    inline vector<ModifyThreatIntelligenceSwitchRequest::CategoryList> getCategoryList() { DARABONBA_PTR_GET(categoryList_, vector<ModifyThreatIntelligenceSwitchRequest::CategoryList>) };
    inline ModifyThreatIntelligenceSwitchRequest& setCategoryList(const vector<ModifyThreatIntelligenceSwitchRequest::CategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline ModifyThreatIntelligenceSwitchRequest& setCategoryList(vector<ModifyThreatIntelligenceSwitchRequest::CategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


  protected:
    shared_ptr<vector<ModifyThreatIntelligenceSwitchRequest::CategoryList>> categoryList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
