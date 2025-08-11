// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPortalMenuAuthorizationResponseBodyResultReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenuAuthorizationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenuAuthorizationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(MenuId, menuId_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenuAuthorizationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MenuId, menuId_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
    };
    ListPortalMenuAuthorizationResponseBodyResult() = default ;
    ListPortalMenuAuthorizationResponseBodyResult(const ListPortalMenuAuthorizationResponseBodyResult &) = default ;
    ListPortalMenuAuthorizationResponseBodyResult(ListPortalMenuAuthorizationResponseBodyResult &&) = default ;
    ListPortalMenuAuthorizationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenuAuthorizationResponseBodyResult() = default ;
    ListPortalMenuAuthorizationResponseBodyResult& operator=(const ListPortalMenuAuthorizationResponseBodyResult &) = default ;
    ListPortalMenuAuthorizationResponseBodyResult& operator=(ListPortalMenuAuthorizationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->menuId_ != nullptr
        && this->receivers_ != nullptr && this->showOnlyWithAccess_ != nullptr; };
    // menuId Field Functions 
    bool hasMenuId() const { return this->menuId_ != nullptr;};
    void deleteMenuId() { this->menuId_ = nullptr;};
    inline string menuId() const { DARABONBA_PTR_GET_DEFAULT(menuId_, "") };
    inline ListPortalMenuAuthorizationResponseBodyResult& setMenuId(string menuId) { DARABONBA_PTR_SET_VALUE(menuId_, menuId) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers>) };
    inline vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers> receivers() { DARABONBA_PTR_GET(receivers_, vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers>) };
    inline ListPortalMenuAuthorizationResponseBodyResult& setReceivers(const vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline ListPortalMenuAuthorizationResponseBodyResult& setReceivers(vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // showOnlyWithAccess Field Functions 
    bool hasShowOnlyWithAccess() const { return this->showOnlyWithAccess_ != nullptr;};
    void deleteShowOnlyWithAccess() { this->showOnlyWithAccess_ = nullptr;};
    inline bool showOnlyWithAccess() const { DARABONBA_PTR_GET_DEFAULT(showOnlyWithAccess_, false) };
    inline ListPortalMenuAuthorizationResponseBodyResult& setShowOnlyWithAccess(bool showOnlyWithAccess) { DARABONBA_PTR_SET_VALUE(showOnlyWithAccess_, showOnlyWithAccess) };


  protected:
    // The menu ID of the BI portal leaf node.
    std::shared_ptr<string> menuId_ = nullptr;
    // The details of the object to which the menu is authorized.
    std::shared_ptr<vector<Models::ListPortalMenuAuthorizationResponseBodyResultReceivers>> receivers_ = nullptr;
    // Whether only authorization is visible. Valid values:
    // 
    // *   true: Only the authorization is visible.
    // *   false: Both are visible.
    std::shared_ptr<bool> showOnlyWithAccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
