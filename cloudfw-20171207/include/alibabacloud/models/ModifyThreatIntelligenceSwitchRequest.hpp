// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyThreatIntelligenceSwitchRequestCategoryList.hpp>
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
    virtual bool empty() const override { return this->categoryList_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<ModifyThreatIntelligenceSwitchRequestCategoryList> & categoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<ModifyThreatIntelligenceSwitchRequestCategoryList>) };
    inline vector<ModifyThreatIntelligenceSwitchRequestCategoryList> categoryList() { DARABONBA_PTR_GET(categoryList_, vector<ModifyThreatIntelligenceSwitchRequestCategoryList>) };
    inline ModifyThreatIntelligenceSwitchRequest& setCategoryList(const vector<ModifyThreatIntelligenceSwitchRequestCategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline ModifyThreatIntelligenceSwitchRequest& setCategoryList(vector<ModifyThreatIntelligenceSwitchRequestCategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


  protected:
    std::shared_ptr<vector<ModifyThreatIntelligenceSwitchRequestCategoryList>> categoryList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
