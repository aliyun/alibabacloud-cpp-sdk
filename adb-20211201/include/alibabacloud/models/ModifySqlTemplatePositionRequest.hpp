// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLTEMPLATEPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLTEMPLATEPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifySqlTemplatePositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySqlTemplatePositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetTemplateGroupId, targetTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySqlTemplatePositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetTemplateGroupId, targetTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifySqlTemplatePositionRequest() = default ;
    ModifySqlTemplatePositionRequest(const ModifySqlTemplatePositionRequest &) = default ;
    ModifySqlTemplatePositionRequest(ModifySqlTemplatePositionRequest &&) = default ;
    ModifySqlTemplatePositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySqlTemplatePositionRequest() = default ;
    ModifySqlTemplatePositionRequest& operator=(const ModifySqlTemplatePositionRequest &) = default ;
    ModifySqlTemplatePositionRequest& operator=(ModifySqlTemplatePositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->targetTemplateGroupId_ == nullptr && return this->templateId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifySqlTemplatePositionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySqlTemplatePositionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetTemplateGroupId Field Functions 
    bool hasTargetTemplateGroupId() const { return this->targetTemplateGroupId_ != nullptr;};
    void deleteTargetTemplateGroupId() { this->targetTemplateGroupId_ = nullptr;};
    inline int64_t targetTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetTemplateGroupId_, 0L) };
    inline ModifySqlTemplatePositionRequest& setTargetTemplateGroupId(int64_t targetTemplateGroupId) { DARABONBA_PTR_SET_VALUE(targetTemplateGroupId_, targetTemplateGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifySqlTemplatePositionRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> targetTemplateGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
