// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEVISIBILITYMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEVISIBILITYMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ChangeVisibilityModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeVisibilityModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_TO_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_TO_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeVisibilityModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_FROM_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_FROM_JSON(ShowOnlyWithAccess, showOnlyWithAccess_);
    };
    ChangeVisibilityModelRequest() = default ;
    ChangeVisibilityModelRequest(const ChangeVisibilityModelRequest &) = default ;
    ChangeVisibilityModelRequest(ChangeVisibilityModelRequest &&) = default ;
    ChangeVisibilityModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeVisibilityModelRequest() = default ;
    ChangeVisibilityModelRequest& operator=(const ChangeVisibilityModelRequest &) = default ;
    ChangeVisibilityModelRequest& operator=(ChangeVisibilityModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPortalId_ != nullptr
        && this->menuIds_ != nullptr && this->showOnlyWithAccess_ != nullptr; };
    // dataPortalId Field Functions 
    bool hasDataPortalId() const { return this->dataPortalId_ != nullptr;};
    void deleteDataPortalId() { this->dataPortalId_ = nullptr;};
    inline string dataPortalId() const { DARABONBA_PTR_GET_DEFAULT(dataPortalId_, "") };
    inline ChangeVisibilityModelRequest& setDataPortalId(string dataPortalId) { DARABONBA_PTR_SET_VALUE(dataPortalId_, dataPortalId) };


    // menuIds Field Functions 
    bool hasMenuIds() const { return this->menuIds_ != nullptr;};
    void deleteMenuIds() { this->menuIds_ = nullptr;};
    inline string menuIds() const { DARABONBA_PTR_GET_DEFAULT(menuIds_, "") };
    inline ChangeVisibilityModelRequest& setMenuIds(string menuIds) { DARABONBA_PTR_SET_VALUE(menuIds_, menuIds) };


    // showOnlyWithAccess Field Functions 
    bool hasShowOnlyWithAccess() const { return this->showOnlyWithAccess_ != nullptr;};
    void deleteShowOnlyWithAccess() { this->showOnlyWithAccess_ = nullptr;};
    inline bool showOnlyWithAccess() const { DARABONBA_PTR_GET_DEFAULT(showOnlyWithAccess_, false) };
    inline ChangeVisibilityModelRequest& setShowOnlyWithAccess(bool showOnlyWithAccess) { DARABONBA_PTR_SET_VALUE(showOnlyWithAccess_, showOnlyWithAccess) };


  protected:
    // The ID of the BI portal.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataPortalId_ = nullptr;
    // The menu ID of the BI portal leaf node.
    // 
    // *   The directory menu cannot be authorized.
    // *   You can upload multiple parameters at a time. Separate multiple IDs with commas (,). The maximum number of parameters that can be modified at a time is 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> menuIds_ = nullptr;
    // Whether only authorization is visible. Valid values:
    // 
    // *   true: Only the authorization is visible.
    // *   false: Both are visible.
    // 
    // This parameter is required.
    std::shared_ptr<bool> showOnlyWithAccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
