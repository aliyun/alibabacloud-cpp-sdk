// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORMREMARKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFORMREMARKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListFormRemarksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFormRemarksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFormRemarksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdListShrink_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    ListFormRemarksShrinkRequest() = default ;
    ListFormRemarksShrinkRequest(const ListFormRemarksShrinkRequest &) = default ;
    ListFormRemarksShrinkRequest(ListFormRemarksShrinkRequest &&) = default ;
    ListFormRemarksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFormRemarksShrinkRequest() = default ;
    ListFormRemarksShrinkRequest& operator=(const ListFormRemarksShrinkRequest &) = default ;
    ListFormRemarksShrinkRequest& operator=(ListFormRemarksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->formInstanceIdListShrink_ == nullptr && return this->formUuid_ == nullptr && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListFormRemarksShrinkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceIdListShrink Field Functions 
    bool hasFormInstanceIdListShrink() const { return this->formInstanceIdListShrink_ != nullptr;};
    void deleteFormInstanceIdListShrink() { this->formInstanceIdListShrink_ = nullptr;};
    inline string formInstanceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(formInstanceIdListShrink_, "") };
    inline ListFormRemarksShrinkRequest& setFormInstanceIdListShrink(string formInstanceIdListShrink) { DARABONBA_PTR_SET_VALUE(formInstanceIdListShrink_, formInstanceIdListShrink) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline ListFormRemarksShrinkRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ListFormRemarksShrinkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formInstanceIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
