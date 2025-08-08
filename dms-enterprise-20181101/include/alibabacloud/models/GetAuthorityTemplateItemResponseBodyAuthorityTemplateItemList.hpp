// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMRESPONSEBODYAUTHORITYTEMPLATEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMRESPONSEBODYAUTHORITYTEMPLATEITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateItem, authorityTemplateItem_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateItem, authorityTemplateItem_);
    };
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList() = default ;
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList(const GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList &) = default ;
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList(GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList &&) = default ;
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList() = default ;
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& operator=(const GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList &) = default ;
    GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& operator=(GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityTemplateItem_ != nullptr; };
    // authorityTemplateItem Field Functions 
    bool hasAuthorityTemplateItem() const { return this->authorityTemplateItem_ != nullptr;};
    void deleteAuthorityTemplateItem() { this->authorityTemplateItem_ = nullptr;};
    inline const vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem> & authorityTemplateItem() const { DARABONBA_PTR_GET_CONST(authorityTemplateItem_, vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem>) };
    inline vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem> authorityTemplateItem() { DARABONBA_PTR_GET(authorityTemplateItem_, vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem>) };
    inline GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& setAuthorityTemplateItem(const vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem> & authorityTemplateItem) { DARABONBA_PTR_SET_VALUE(authorityTemplateItem_, authorityTemplateItem) };
    inline GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList& setAuthorityTemplateItem(vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem> && authorityTemplateItem) { DARABONBA_PTR_SET_RVALUE(authorityTemplateItem_, authorityTemplateItem) };


  protected:
    std::shared_ptr<vector<Models::GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemListAuthorityTemplateItem>> authorityTemplateItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
