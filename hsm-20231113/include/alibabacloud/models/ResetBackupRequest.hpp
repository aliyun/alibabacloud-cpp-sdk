// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ResetBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
    };
    ResetBackupRequest() = default ;
    ResetBackupRequest(const ResetBackupRequest &) = default ;
    ResetBackupRequest(ResetBackupRequest &&) = default ;
    ResetBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetBackupRequest() = default ;
    ResetBackupRequest& operator=(const ResetBackupRequest &) = default ;
    ResetBackupRequest& operator=(ResetBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ResetBackupRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


  protected:
    // The ID of the backup.
    std::shared_ptr<string> backupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
