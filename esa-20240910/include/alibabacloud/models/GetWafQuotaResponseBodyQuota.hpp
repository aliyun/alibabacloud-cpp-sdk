// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTA_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWafQuotaResponseBodyQuotaList.hpp>
#include <alibabacloud/models/GetWafQuotaResponseBodyQuotaManagedRulesGroup.hpp>
#include <alibabacloud/models/GetWafQuotaResponseBodyQuotaPage.hpp>
#include <alibabacloud/models/GetWafQuotaResponseBodyQuotaScenePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaResponseBodyQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaResponseBodyQuota& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(ManagedRulesGroup, managedRulesGroup_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(ScenePolicy, scenePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaResponseBodyQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(ManagedRulesGroup, managedRulesGroup_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(ScenePolicy, scenePolicy_);
    };
    GetWafQuotaResponseBodyQuota() = default ;
    GetWafQuotaResponseBodyQuota(const GetWafQuotaResponseBodyQuota &) = default ;
    GetWafQuotaResponseBodyQuota(GetWafQuotaResponseBodyQuota &&) = default ;
    GetWafQuotaResponseBodyQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaResponseBodyQuota() = default ;
    GetWafQuotaResponseBodyQuota& operator=(const GetWafQuotaResponseBodyQuota &) = default ;
    GetWafQuotaResponseBodyQuota& operator=(GetWafQuotaResponseBodyQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->managedRulesGroup_ == nullptr && return this->page_ == nullptr && return this->scenePolicy_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::GetWafQuotaResponseBodyQuotaList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::GetWafQuotaResponseBodyQuotaList) };
    inline Models::GetWafQuotaResponseBodyQuotaList list() { DARABONBA_PTR_GET(list_, Models::GetWafQuotaResponseBodyQuotaList) };
    inline GetWafQuotaResponseBodyQuota& setList(const Models::GetWafQuotaResponseBodyQuotaList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetWafQuotaResponseBodyQuota& setList(Models::GetWafQuotaResponseBodyQuotaList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // managedRulesGroup Field Functions 
    bool hasManagedRulesGroup() const { return this->managedRulesGroup_ != nullptr;};
    void deleteManagedRulesGroup() { this->managedRulesGroup_ = nullptr;};
    inline const Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup & managedRulesGroup() const { DARABONBA_PTR_GET_CONST(managedRulesGroup_, Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup) };
    inline Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup managedRulesGroup() { DARABONBA_PTR_GET(managedRulesGroup_, Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup) };
    inline GetWafQuotaResponseBodyQuota& setManagedRulesGroup(const Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup & managedRulesGroup) { DARABONBA_PTR_SET_VALUE(managedRulesGroup_, managedRulesGroup) };
    inline GetWafQuotaResponseBodyQuota& setManagedRulesGroup(Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup && managedRulesGroup) { DARABONBA_PTR_SET_RVALUE(managedRulesGroup_, managedRulesGroup) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const Models::GetWafQuotaResponseBodyQuotaPage & page() const { DARABONBA_PTR_GET_CONST(page_, Models::GetWafQuotaResponseBodyQuotaPage) };
    inline Models::GetWafQuotaResponseBodyQuotaPage page() { DARABONBA_PTR_GET(page_, Models::GetWafQuotaResponseBodyQuotaPage) };
    inline GetWafQuotaResponseBodyQuota& setPage(const Models::GetWafQuotaResponseBodyQuotaPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline GetWafQuotaResponseBodyQuota& setPage(Models::GetWafQuotaResponseBodyQuotaPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // scenePolicy Field Functions 
    bool hasScenePolicy() const { return this->scenePolicy_ != nullptr;};
    void deleteScenePolicy() { this->scenePolicy_ = nullptr;};
    inline const Models::GetWafQuotaResponseBodyQuotaScenePolicy & scenePolicy() const { DARABONBA_PTR_GET_CONST(scenePolicy_, Models::GetWafQuotaResponseBodyQuotaScenePolicy) };
    inline Models::GetWafQuotaResponseBodyQuotaScenePolicy scenePolicy() { DARABONBA_PTR_GET(scenePolicy_, Models::GetWafQuotaResponseBodyQuotaScenePolicy) };
    inline GetWafQuotaResponseBodyQuota& setScenePolicy(const Models::GetWafQuotaResponseBodyQuotaScenePolicy & scenePolicy) { DARABONBA_PTR_SET_VALUE(scenePolicy_, scenePolicy) };
    inline GetWafQuotaResponseBodyQuota& setScenePolicy(Models::GetWafQuotaResponseBodyQuotaScenePolicy && scenePolicy) { DARABONBA_PTR_SET_RVALUE(scenePolicy_, scenePolicy) };


  protected:
    // Quota information related to custom lists.
    std::shared_ptr<Models::GetWafQuotaResponseBodyQuotaList> list_ = nullptr;
    // Quota information related to the WAF managed rules group.
    std::shared_ptr<Models::GetWafQuotaResponseBodyQuotaManagedRulesGroup> managedRulesGroup_ = nullptr;
    // Quota information related to custom response pages.
    std::shared_ptr<Models::GetWafQuotaResponseBodyQuotaPage> page_ = nullptr;
    // Quota information related to scene protection.
    std::shared_ptr<Models::GetWafQuotaResponseBodyQuotaScenePolicy> scenePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
