// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEWAUTHORITYTEMPLATEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEWAUTHORITYTEMPLATEITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateItem, authorityTemplateItem_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateItem, authorityTemplateItem_);
    };
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList() = default ;
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList(const GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList &) = default ;
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList(GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList &&) = default ;
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList() = default ;
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& operator=(const GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList &) = default ;
    GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& operator=(GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorityTemplateItem_ == nullptr; };
    // authorityTemplateItem Field Functions 
    bool hasAuthorityTemplateItem() const { return this->authorityTemplateItem_ != nullptr;};
    void deleteAuthorityTemplateItem() { this->authorityTemplateItem_ = nullptr;};
    inline const vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem> & authorityTemplateItem() const { DARABONBA_PTR_GET_CONST(authorityTemplateItem_, vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem>) };
    inline vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem> authorityTemplateItem() { DARABONBA_PTR_GET(authorityTemplateItem_, vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem>) };
    inline GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& setAuthorityTemplateItem(const vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem> & authorityTemplateItem) { DARABONBA_PTR_SET_VALUE(authorityTemplateItem_, authorityTemplateItem) };
    inline GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemList& setAuthorityTemplateItem(vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem> && authorityTemplateItem) { DARABONBA_PTR_SET_RVALUE(authorityTemplateItem_, authorityTemplateItem) };


  protected:
    std::shared_ptr<vector<Models::GetAuthorityTemplateResponseBodyAuthorityTemplateViewAuthorityTemplateItemListAuthorityTemplateItem>> authorityTemplateItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
