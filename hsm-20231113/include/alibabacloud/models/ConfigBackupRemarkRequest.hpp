// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGBACKUPREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGBACKUPREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigBackupRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigBackupRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigBackupRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    ConfigBackupRemarkRequest() = default ;
    ConfigBackupRemarkRequest(const ConfigBackupRemarkRequest &) = default ;
    ConfigBackupRemarkRequest(ConfigBackupRemarkRequest &&) = default ;
    ConfigBackupRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigBackupRemarkRequest() = default ;
    ConfigBackupRemarkRequest& operator=(const ConfigBackupRemarkRequest &) = default ;
    ConfigBackupRemarkRequest& operator=(ConfigBackupRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->name_ != nullptr && this->remark_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ConfigBackupRemarkRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigBackupRemarkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ConfigBackupRemarkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The ID of the backup.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
    // The name of the backup.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the backup.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
