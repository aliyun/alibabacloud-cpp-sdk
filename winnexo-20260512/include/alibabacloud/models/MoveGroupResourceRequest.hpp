// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEGROUPRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEGROUPRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class MoveGroupResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveGroupResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveGroupResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(targetDirectoryId, targetDirectoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    MoveGroupResourceRequest() = default ;
    MoveGroupResourceRequest(const MoveGroupResourceRequest &) = default ;
    MoveGroupResourceRequest(MoveGroupResourceRequest &&) = default ;
    MoveGroupResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveGroupResourceRequest() = default ;
    MoveGroupResourceRequest& operator=(const MoveGroupResourceRequest &) = default ;
    MoveGroupResourceRequest& operator=(MoveGroupResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->sourceDirectoryId_ == nullptr && this->sourceId_ == nullptr && this->targetDirectoryId_ == nullptr && this->tenantId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline MoveGroupResourceRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // sourceDirectoryId Field Functions 
    bool hasSourceDirectoryId() const { return this->sourceDirectoryId_ != nullptr;};
    void deleteSourceDirectoryId() { this->sourceDirectoryId_ = nullptr;};
    inline string getSourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(sourceDirectoryId_, "") };
    inline MoveGroupResourceRequest& setSourceDirectoryId(string sourceDirectoryId) { DARABONBA_PTR_SET_VALUE(sourceDirectoryId_, sourceDirectoryId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MoveGroupResourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // targetDirectoryId Field Functions 
    bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
    void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
    inline string getTargetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
    inline MoveGroupResourceRequest& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline MoveGroupResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The collaboration space ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The real ID of the physical directory in the space where the resource currently resides. The root sentinel is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourceDirectoryId_ {};
    // The physical GROUP resource ID to be moved. Referenced resources are read-only.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The real ID of the target physical directory in the same space. This value must be different from the source directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> targetDirectoryId_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
