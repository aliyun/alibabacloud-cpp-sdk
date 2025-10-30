// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUESTDELETEREGISTERLINEAGECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUESTDELETEREGISTERLINEAGECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages.hpp>
#include <alibabacloud/models/DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource.hpp>
#include <alibabacloud/models/DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRegisterLineageRequestDeleteRegisterLineageCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRegisterLineageRequestDeleteRegisterLineageCommand& obj) { 
      DARABONBA_PTR_TO_JSON(CascadeDeleteLineage, cascadeDeleteLineage_);
      DARABONBA_PTR_TO_JSON(DetailedLineages, detailedLineages_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRegisterLineageRequestDeleteRegisterLineageCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(CascadeDeleteLineage, cascadeDeleteLineage_);
      DARABONBA_PTR_FROM_JSON(DetailedLineages, detailedLineages_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand() = default ;
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand(const DeleteRegisterLineageRequestDeleteRegisterLineageCommand &) = default ;
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand(DeleteRegisterLineageRequestDeleteRegisterLineageCommand &&) = default ;
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRegisterLineageRequestDeleteRegisterLineageCommand() = default ;
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand& operator=(const DeleteRegisterLineageRequestDeleteRegisterLineageCommand &) = default ;
    DeleteRegisterLineageRequestDeleteRegisterLineageCommand& operator=(DeleteRegisterLineageRequestDeleteRegisterLineageCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cascadeDeleteLineage_ == nullptr
        && return this->detailedLineages_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr && return this->tenantId_ == nullptr && return this->userId_ == nullptr; };
    // cascadeDeleteLineage Field Functions 
    bool hasCascadeDeleteLineage() const { return this->cascadeDeleteLineage_ != nullptr;};
    void deleteCascadeDeleteLineage() { this->cascadeDeleteLineage_ = nullptr;};
    inline bool cascadeDeleteLineage() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeleteLineage_, false) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setCascadeDeleteLineage(bool cascadeDeleteLineage) { DARABONBA_PTR_SET_VALUE(cascadeDeleteLineage_, cascadeDeleteLineage) };


    // detailedLineages Field Functions 
    bool hasDetailedLineages() const { return this->detailedLineages_ != nullptr;};
    void deleteDetailedLineages() { this->detailedLineages_ = nullptr;};
    inline const vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages> & detailedLineages() const { DARABONBA_PTR_GET_CONST(detailedLineages_, vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages>) };
    inline vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages> detailedLineages() { DARABONBA_PTR_GET(detailedLineages_, vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages>) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setDetailedLineages(const vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages> & detailedLineages) { DARABONBA_PTR_SET_VALUE(detailedLineages_, detailedLineages) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setDetailedLineages(vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages> && detailedLineages) { DARABONBA_PTR_SET_RVALUE(detailedLineages_, detailedLineages) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource) };
    inline Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource source() { DARABONBA_PTR_GET(source_, Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setSource(const Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setSource(Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget) };
    inline Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget target() { DARABONBA_PTR_GET(target_, Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setTarget(const Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setTarget(Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteRegisterLineageRequestDeleteRegisterLineageCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> cascadeDeleteLineage_ = nullptr;
    std::shared_ptr<vector<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandDetailedLineages>> detailedLineages_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandSource> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::DeleteRegisterLineageRequestDeleteRegisterLineageCommandTarget> target_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
