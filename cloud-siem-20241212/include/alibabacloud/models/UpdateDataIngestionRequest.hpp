// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAINGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_TO_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_FROM_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataIngestionRequest() = default ;
    UpdateDataIngestionRequest(const UpdateDataIngestionRequest &) = default ;
    UpdateDataIngestionRequest(UpdateDataIngestionRequest &&) = default ;
    UpdateDataIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataIngestionRequest() = default ;
    UpdateDataIngestionRequest& operator=(const UpdateDataIngestionRequest &) = default ;
    UpdateDataIngestionRequest& operator=(UpdateDataIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionId_ == nullptr
        && return this->dataIngestionMode_ == nullptr && return this->dataSourceId_ == nullptr && return this->lang_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr; };
    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string dataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline UpdateDataIngestionRequest& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


    // dataIngestionMode Field Functions 
    bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
    void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
    inline string dataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
    inline UpdateDataIngestionRequest& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateDataIngestionRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline UpdateDataIngestionRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataIngestionId_ = nullptr;
    std::shared_ptr<string> dataIngestionMode_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
