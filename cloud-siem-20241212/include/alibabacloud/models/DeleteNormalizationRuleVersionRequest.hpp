// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENORMALIZATIONRULEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENORMALIZATIONRULEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteNormalizationRuleVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNormalizationRuleVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNormalizationRuleVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DeleteNormalizationRuleVersionRequest() = default ;
    DeleteNormalizationRuleVersionRequest(const DeleteNormalizationRuleVersionRequest &) = default ;
    DeleteNormalizationRuleVersionRequest(DeleteNormalizationRuleVersionRequest &&) = default ;
    DeleteNormalizationRuleVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNormalizationRuleVersionRequest() = default ;
    DeleteNormalizationRuleVersionRequest& operator=(const DeleteNormalizationRuleVersionRequest &) = default ;
    DeleteNormalizationRuleVersionRequest& operator=(DeleteNormalizationRuleVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->normalizationRuleId_ == nullptr && this->normalizationRuleVersion_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteNormalizationRuleVersionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline DeleteNormalizationRuleVersionRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline int32_t getNormalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
    inline DeleteNormalizationRuleVersionRequest& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNormalizationRuleVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteNormalizationRuleVersionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> normalizationRuleId_ {};
    shared_ptr<int32_t> normalizationRuleVersion_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
