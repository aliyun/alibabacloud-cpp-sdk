// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages.hpp>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommandSource.hpp>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommandTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddRegisterLineageRequestAddRegisterLineageCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRegisterLineageRequestAddRegisterLineageCommand& obj) { 
      DARABONBA_PTR_TO_JSON(CheckAssetExist, checkAssetExist_);
      DARABONBA_PTR_TO_JSON(DetailedLineages, detailedLineages_);
      DARABONBA_ANY_TO_JSON(RelationProperties, relationProperties_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRegisterLineageRequestAddRegisterLineageCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckAssetExist, checkAssetExist_);
      DARABONBA_PTR_FROM_JSON(DetailedLineages, detailedLineages_);
      DARABONBA_ANY_FROM_JSON(RelationProperties, relationProperties_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddRegisterLineageRequestAddRegisterLineageCommand() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommand(const AddRegisterLineageRequestAddRegisterLineageCommand &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommand(AddRegisterLineageRequestAddRegisterLineageCommand &&) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRegisterLineageRequestAddRegisterLineageCommand() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommand& operator=(const AddRegisterLineageRequestAddRegisterLineageCommand &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommand& operator=(AddRegisterLineageRequestAddRegisterLineageCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkAssetExist_ == nullptr
        && return this->detailedLineages_ == nullptr && return this->relationProperties_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr && return this->tenantId_ == nullptr
        && return this->userId_ == nullptr; };
    // checkAssetExist Field Functions 
    bool hasCheckAssetExist() const { return this->checkAssetExist_ != nullptr;};
    void deleteCheckAssetExist() { this->checkAssetExist_ = nullptr;};
    inline bool checkAssetExist() const { DARABONBA_PTR_GET_DEFAULT(checkAssetExist_, false) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setCheckAssetExist(bool checkAssetExist) { DARABONBA_PTR_SET_VALUE(checkAssetExist_, checkAssetExist) };


    // detailedLineages Field Functions 
    bool hasDetailedLineages() const { return this->detailedLineages_ != nullptr;};
    void deleteDetailedLineages() { this->detailedLineages_ = nullptr;};
    inline const vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages> & detailedLineages() const { DARABONBA_PTR_GET_CONST(detailedLineages_, vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages>) };
    inline vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages> detailedLineages() { DARABONBA_PTR_GET(detailedLineages_, vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages>) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setDetailedLineages(const vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages> & detailedLineages) { DARABONBA_PTR_SET_VALUE(detailedLineages_, detailedLineages) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setDetailedLineages(vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages> && detailedLineages) { DARABONBA_PTR_SET_RVALUE(detailedLineages_, detailedLineages) };


    // relationProperties Field Functions 
    bool hasRelationProperties() const { return this->relationProperties_ != nullptr;};
    void deleteRelationProperties() { this->relationProperties_ = nullptr;};
    inline     const Darabonba::Json & relationProperties() const { DARABONBA_GET(relationProperties_) };
    Darabonba::Json & relationProperties() { DARABONBA_GET(relationProperties_) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setRelationProperties(const Darabonba::Json & relationProperties) { DARABONBA_SET_VALUE(relationProperties_, relationProperties) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setRelationProperties(Darabonba::Json & relationProperties) { DARABONBA_SET_RVALUE(relationProperties_, relationProperties) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::AddRegisterLineageRequestAddRegisterLineageCommandSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::AddRegisterLineageRequestAddRegisterLineageCommandSource) };
    inline Models::AddRegisterLineageRequestAddRegisterLineageCommandSource source() { DARABONBA_PTR_GET(source_, Models::AddRegisterLineageRequestAddRegisterLineageCommandSource) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setSource(const Models::AddRegisterLineageRequestAddRegisterLineageCommandSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setSource(Models::AddRegisterLineageRequestAddRegisterLineageCommandSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget) };
    inline Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget target() { DARABONBA_PTR_GET(target_, Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setTarget(const Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setTarget(Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> checkAssetExist_ = nullptr;
    std::shared_ptr<vector<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages>> detailedLineages_ = nullptr;
    Darabonba::Json relationProperties_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::AddRegisterLineageRequestAddRegisterLineageCommandSource> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::AddRegisterLineageRequestAddRegisterLineageCommandTarget> target_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
