// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAINGESTIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAINGESTIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataIngestionTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataIngestionTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateName, dataIngestionTemplateName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataIngestionTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateName, dataIngestionTemplateName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataIngestionTemplateRequest() = default ;
    UpdateDataIngestionTemplateRequest(const UpdateDataIngestionTemplateRequest &) = default ;
    UpdateDataIngestionTemplateRequest(UpdateDataIngestionTemplateRequest &&) = default ;
    UpdateDataIngestionTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataIngestionTemplateRequest() = default ;
    UpdateDataIngestionTemplateRequest& operator=(const UpdateDataIngestionTemplateRequest &) = default ;
    UpdateDataIngestionTemplateRequest& operator=(UpdateDataIngestionTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionStatus_ == nullptr
        && return this->dataIngestionTemplateId_ == nullptr && return this->dataIngestionTemplateName_ == nullptr && return this->lang_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr; };
    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline UpdateDataIngestionTemplateRequest& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataIngestionTemplateId Field Functions 
    bool hasDataIngestionTemplateId() const { return this->dataIngestionTemplateId_ != nullptr;};
    void deleteDataIngestionTemplateId() { this->dataIngestionTemplateId_ = nullptr;};
    inline string dataIngestionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateId_, "") };
    inline UpdateDataIngestionTemplateRequest& setDataIngestionTemplateId(string dataIngestionTemplateId) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateId_, dataIngestionTemplateId) };


    // dataIngestionTemplateName Field Functions 
    bool hasDataIngestionTemplateName() const { return this->dataIngestionTemplateName_ != nullptr;};
    void deleteDataIngestionTemplateName() { this->dataIngestionTemplateName_ = nullptr;};
    inline string dataIngestionTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateName_, "") };
    inline UpdateDataIngestionTemplateRequest& setDataIngestionTemplateName(string dataIngestionTemplateName) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateName_, dataIngestionTemplateName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataIngestionTemplateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline UpdateDataIngestionTemplateRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataIngestionTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataIngestionTemplateRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataIngestionStatus_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateId_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
