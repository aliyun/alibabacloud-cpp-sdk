// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETENANTDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETENANTDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DeleteTenantDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTenantDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deleteMode, deleteMode_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTenantDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteMode, deleteMode_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    DeleteTenantDirectoryRequest() = default ;
    DeleteTenantDirectoryRequest(const DeleteTenantDirectoryRequest &) = default ;
    DeleteTenantDirectoryRequest(DeleteTenantDirectoryRequest &&) = default ;
    DeleteTenantDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTenantDirectoryRequest() = default ;
    DeleteTenantDirectoryRequest& operator=(const DeleteTenantDirectoryRequest &) = default ;
    DeleteTenantDirectoryRequest& operator=(DeleteTenantDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteMode_ == nullptr
        && this->directoryId_ == nullptr && this->tenantId_ == nullptr; };
    // deleteMode Field Functions 
    bool hasDeleteMode() const { return this->deleteMode_ != nullptr;};
    void deleteDeleteMode() { this->deleteMode_ = nullptr;};
    inline string getDeleteMode() const { DARABONBA_PTR_GET_DEFAULT(deleteMode_, "") };
    inline DeleteTenantDirectoryRequest& setDeleteMode(string deleteMode) { DARABONBA_PTR_SET_VALUE(deleteMode_, deleteMode) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteTenantDirectoryRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteTenantDirectoryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 删除模式：reject / recursive / move_to_root
    shared_ptr<string> deleteMode_ {};
    // 目录唯一标识
    shared_ptr<string> directoryId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
