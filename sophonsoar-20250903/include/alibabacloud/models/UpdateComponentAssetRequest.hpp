// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateComponentAssetRequestComponentAssetValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class UpdateComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_TO_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateComponentAssetRequest() = default ;
    UpdateComponentAssetRequest(const UpdateComponentAssetRequest &) = default ;
    UpdateComponentAssetRequest(UpdateComponentAssetRequest &&) = default ;
    UpdateComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComponentAssetRequest() = default ;
    UpdateComponentAssetRequest& operator=(const UpdateComponentAssetRequest &) = default ;
    UpdateComponentAssetRequest& operator=(UpdateComponentAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && return this->componentAssetUuid_ == nullptr && return this->componentAssetValues_ == nullptr && return this->lang_ == nullptr && return this->roleFor_ == nullptr; };
    // componentAssetName Field Functions 
    bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
    void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
    inline string componentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
    inline UpdateComponentAssetRequest& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


    // componentAssetUuid Field Functions 
    bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
    void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
    inline string componentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
    inline UpdateComponentAssetRequest& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


    // componentAssetValues Field Functions 
    bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
    void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
    inline const vector<UpdateComponentAssetRequestComponentAssetValues> & componentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<UpdateComponentAssetRequestComponentAssetValues>) };
    inline vector<UpdateComponentAssetRequestComponentAssetValues> componentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<UpdateComponentAssetRequestComponentAssetValues>) };
    inline UpdateComponentAssetRequest& setComponentAssetValues(const vector<UpdateComponentAssetRequestComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
    inline UpdateComponentAssetRequest& setComponentAssetValues(vector<UpdateComponentAssetRequestComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateComponentAssetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // Asset name.
    std::shared_ptr<string> componentAssetName_ = nullptr;
    // Asset UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentAssetUuid_ = nullptr;
    // Configuration information of the asset.
    std::shared_ptr<vector<UpdateComponentAssetRequestComponentAssetValues>> componentAssetValues_ = nullptr;
    // The language type for the request and response. Values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // Resource directory member account ID.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
