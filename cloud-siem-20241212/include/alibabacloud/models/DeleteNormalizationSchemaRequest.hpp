// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENORMALIZATIONSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENORMALIZATIONSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteNormalizationSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNormalizationSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNormalizationSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DeleteNormalizationSchemaRequest() = default ;
    DeleteNormalizationSchemaRequest(const DeleteNormalizationSchemaRequest &) = default ;
    DeleteNormalizationSchemaRequest(DeleteNormalizationSchemaRequest &&) = default ;
    DeleteNormalizationSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNormalizationSchemaRequest() = default ;
    DeleteNormalizationSchemaRequest& operator=(const DeleteNormalizationSchemaRequest &) = default ;
    DeleteNormalizationSchemaRequest& operator=(DeleteNormalizationSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->normalizationSchemaId_ == nullptr && this->normalizationSchemaType_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteNormalizationSchemaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline DeleteNormalizationSchemaRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // normalizationSchemaType Field Functions 
    bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
    void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
    inline string getNormalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
    inline DeleteNormalizationSchemaRequest& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNormalizationSchemaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteNormalizationSchemaRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The normalization schema ID.
    // 
    // This parameter is required.
    shared_ptr<string> normalizationSchemaId_ {};
    // The normalization schema type. Valid values:
    // - log: log.
    // - entity: entity.
    // 
    // This parameter is required.
    shared_ptr<string> normalizationSchemaType_ {};
    // The region where the threat analysis data management center resides. Specify the management center based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland.
    // - ap-southeast-1: Your assets reside outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
