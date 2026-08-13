// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class MoveResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    MoveResourceRequest() = default ;
    MoveResourceRequest(const MoveResourceRequest &) = default ;
    MoveResourceRequest(MoveResourceRequest &&) = default ;
    MoveResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourceRequest() = default ;
    MoveResourceRequest& operator=(const MoveResourceRequest &) = default ;
    MoveResourceRequest& operator=(MoveResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceDirectoryId_ == nullptr
        && this->sourceId_ == nullptr && this->targetDirectoryId_ == nullptr && this->tenantId_ == nullptr; };
    // sourceDirectoryId Field Functions 
    bool hasSourceDirectoryId() const { return this->sourceDirectoryId_ != nullptr;};
    void deleteSourceDirectoryId() { this->sourceDirectoryId_ = nullptr;};
    inline string getSourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(sourceDirectoryId_, "") };
    inline MoveResourceRequest& setSourceDirectoryId(string sourceDirectoryId) { DARABONBA_PTR_SET_VALUE(sourceDirectoryId_, sourceDirectoryId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MoveResourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // targetDirectoryId Field Functions 
    bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
    void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
    inline string getTargetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
    inline MoveResourceRequest& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline MoveResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 源目录 ID（资源当前所在的个人目录）
    // 
    // This parameter is required.
    shared_ptr<string> sourceDirectoryId_ {};
    // 待移动的资源 ID
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // 目标目录 ID（资源即将移动到的个人目录）
    // 
    // This parameter is required.
    shared_ptr<string> targetDirectoryId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
