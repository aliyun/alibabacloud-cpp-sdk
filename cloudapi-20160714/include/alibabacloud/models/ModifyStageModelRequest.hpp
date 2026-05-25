// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTAGEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTAGEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyStageModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStageModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_TO_JSON(StageModelId, stageModelId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStageModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_FROM_JSON(StageModelId, stageModelId_);
    };
    ModifyStageModelRequest() = default ;
    ModifyStageModelRequest(const ModifyStageModelRequest &) = default ;
    ModifyStageModelRequest(ModifyStageModelRequest &&) = default ;
    ModifyStageModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStageModelRequest() = default ;
    ModifyStageModelRequest& operator=(const ModifyStageModelRequest &) = default ;
    ModifyStageModelRequest& operator=(ModifyStageModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->securityToken_ == nullptr && this->stageAlias_ == nullptr && this->stageModelId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyStageModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyStageModelRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageAlias Field Functions 
    bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
    void deleteStageAlias() { this->stageAlias_ = nullptr;};
    inline string getStageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
    inline ModifyStageModelRequest& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


    // stageModelId Field Functions 
    bool hasStageModelId() const { return this->stageModelId_ != nullptr;};
    void deleteStageModelId() { this->stageModelId_ = nullptr;};
    inline string getStageModelId() const { DARABONBA_PTR_GET_DEFAULT(stageModelId_, "") };
    inline ModifyStageModelRequest& setStageModelId(string stageModelId) { DARABONBA_PTR_SET_VALUE(stageModelId_, stageModelId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> stageAlias_ {};
    // This parameter is required.
    shared_ptr<string> stageModelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
