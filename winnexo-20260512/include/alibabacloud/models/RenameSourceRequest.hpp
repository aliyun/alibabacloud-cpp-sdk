// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RenameSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(newName, newName_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RenameSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(newName, newName_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RenameSourceRequest() = default ;
    RenameSourceRequest(const RenameSourceRequest &) = default ;
    RenameSourceRequest(RenameSourceRequest &&) = default ;
    RenameSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameSourceRequest() = default ;
    RenameSourceRequest& operator=(const RenameSourceRequest &) = default ;
    RenameSourceRequest& operator=(RenameSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newName_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline RenameSourceRequest& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline RenameSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RenameSourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 新的数据源名称
    shared_ptr<string> newName_ {};
    // 数据源 ID（租户内唯一）
    shared_ptr<string> sourceId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
