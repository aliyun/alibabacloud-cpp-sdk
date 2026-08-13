// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGMEETINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGMEETINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalAliDingMeetingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAliDingMeetingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(shanjiUrl, shanjiUrl_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAliDingMeetingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(shanjiUrl, shanjiUrl_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalAliDingMeetingRequest() = default ;
    CreatePersonalAliDingMeetingRequest(const CreatePersonalAliDingMeetingRequest &) = default ;
    CreatePersonalAliDingMeetingRequest(CreatePersonalAliDingMeetingRequest &&) = default ;
    CreatePersonalAliDingMeetingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAliDingMeetingRequest() = default ;
    CreatePersonalAliDingMeetingRequest& operator=(const CreatePersonalAliDingMeetingRequest &) = default ;
    CreatePersonalAliDingMeetingRequest& operator=(CreatePersonalAliDingMeetingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->directoryId_ == nullptr && this->name_ == nullptr && this->notes_ == nullptr && this->operatingObjectName_ == nullptr && this->shanjiUrl_ == nullptr
        && this->tenantId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalAliDingMeetingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAliDingMeetingRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalAliDingMeetingRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreatePersonalAliDingMeetingRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalAliDingMeetingRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // shanjiUrl Field Functions 
    bool hasShanjiUrl() const { return this->shanjiUrl_ != nullptr;};
    void deleteShanjiUrl() { this->shanjiUrl_ = nullptr;};
    inline string getShanjiUrl() const { DARABONBA_PTR_GET_DEFAULT(shanjiUrl_, "") };
    inline CreatePersonalAliDingMeetingRequest& setShanjiUrl(string shanjiUrl) { DARABONBA_PTR_SET_VALUE(shanjiUrl_, shanjiUrl) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalAliDingMeetingRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 资源描述（可选）
    shared_ptr<string> description_ {};
    // 目标个人目录 ID；不传时自动绑定到当前数字员工默认根目录，传入时必须是当前用户在当前数字员工下的已有个人目录
    shared_ptr<string> directoryId_ {};
    // 资源显示名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 会议笔记内容（可选），会参与辅助分析
    shared_ptr<string> notes_ {};
    // 数字员工名称（已废弃：不再作为个人资源隔离条件，仅保留用于来源追溯）
    shared_ptr<string> operatingObjectName_ {};
    // 原始的闪记链接（必填）
    // 
    // This parameter is required.
    shared_ptr<string> shanjiUrl_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
