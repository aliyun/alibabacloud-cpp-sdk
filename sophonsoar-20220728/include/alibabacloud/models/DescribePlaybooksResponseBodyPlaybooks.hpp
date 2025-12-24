// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODYPLAYBOOKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKSRESPONSEBODYPLAYBOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybooksResponseBodyPlaybooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybooksResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybooksResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribePlaybooksResponseBodyPlaybooks() = default ;
    DescribePlaybooksResponseBodyPlaybooks(const DescribePlaybooksResponseBodyPlaybooks &) = default ;
    DescribePlaybooksResponseBodyPlaybooks(DescribePlaybooksResponseBodyPlaybooks &&) = default ;
    DescribePlaybooksResponseBodyPlaybooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybooksResponseBodyPlaybooks() = default ;
    DescribePlaybooksResponseBodyPlaybooks& operator=(const DescribePlaybooksResponseBodyPlaybooks &) = default ;
    DescribePlaybooksResponseBodyPlaybooks& operator=(DescribePlaybooksResponseBodyPlaybooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->lastRuntime_ == nullptr
        && return this->ownType_ == nullptr && return this->paramType_ == nullptr && return this->playbookUuid_ == nullptr && return this->tenantId_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline DescribePlaybooksResponseBodyPlaybooks& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribePlaybooksResponseBodyPlaybooks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lastRuntime Field Functions 
    bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
    void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
    inline int64_t lastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
    inline DescribePlaybooksResponseBodyPlaybooks& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribePlaybooksResponseBodyPlaybooks& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The status indicator of the playbook. Values:
    // 
    // - **1**: Indicates the playbook is activated.
    // - **0**: Indicates the playbook is deactivated.
    std::shared_ptr<int32_t> active_ = nullptr;
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The creation time of the playbook, in 13-digit timestamp format.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The modification time of the playbook.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The last execution time of the playbook, in 13-digit timestamp format.
    std::shared_ptr<int64_t> lastRuntime_ = nullptr;
    // The type of the playbook. Values:
    // 
    // - **preset**: Predefined playbook.
    // - **user**: Custom playbook.
    std::shared_ptr<string> ownType_ = nullptr;
    // The trigger method for the playbook, with a default value of **query all**. Possible values are:
    // - **template-incident**: Security incident.
    // - **template-ip**: IP entity.
    // - **template-file**: File entity.
    // - **template-process**: Process entity.
    // - **template-alert**: Security alert.
    // - **template-domain**: Domain entity.
    // - **template-container**: Container entity.
    // - **template-host**: Host entity.
    std::shared_ptr<string> paramType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
