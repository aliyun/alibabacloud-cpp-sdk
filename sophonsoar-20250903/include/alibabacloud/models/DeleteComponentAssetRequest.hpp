// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class DeleteComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DeleteComponentAssetRequest() = default ;
    DeleteComponentAssetRequest(const DeleteComponentAssetRequest &) = default ;
    DeleteComponentAssetRequest(DeleteComponentAssetRequest &&) = default ;
    DeleteComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteComponentAssetRequest() = default ;
    DeleteComponentAssetRequest& operator=(const DeleteComponentAssetRequest &) = default ;
    DeleteComponentAssetRequest& operator=(DeleteComponentAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssetUuid_ == nullptr
        && this->lang_ == nullptr && this->roleFor_ == nullptr; };
    // componentAssetUuid Field Functions 
    bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
    void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
    inline string getComponentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
    inline DeleteComponentAssetRequest& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteComponentAssetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // Asset UUID.
    // 
    // This parameter is required.
    shared_ptr<string> componentAssetUuid_ {};
    // Set the language type for requests and received messages, default is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Resource directory member account ID.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
