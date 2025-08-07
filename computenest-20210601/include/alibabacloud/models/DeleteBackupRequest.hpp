// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class DeleteBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
    };
    DeleteBackupRequest() = default ;
    DeleteBackupRequest(const DeleteBackupRequest &) = default ;
    DeleteBackupRequest(DeleteBackupRequest &&) = default ;
    DeleteBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupRequest() = default ;
    DeleteBackupRequest& operator=(const DeleteBackupRequest &) = default ;
    DeleteBackupRequest& operator=(DeleteBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DeleteBackupRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


  protected:
    // The backup ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
