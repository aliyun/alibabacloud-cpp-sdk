// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKUPSSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKUPSSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class RemoveBackupsSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackupsSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackupsSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    RemoveBackupsSetRequest() = default ;
    RemoveBackupsSetRequest(const RemoveBackupsSetRequest &) = default ;
    RemoveBackupsSetRequest(RemoveBackupsSetRequest &&) = default ;
    RemoveBackupsSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackupsSetRequest() = default ;
    RemoveBackupsSetRequest& operator=(const RemoveBackupsSetRequest &) = default ;
    RemoveBackupsSetRequest& operator=(RemoveBackupsSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->drdsInstanceId_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RemoveBackupsSetRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline RemoveBackupsSetRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The ID of the backup set. You can call the [DescribeBackupSets](https://help.aliyun.com/document_detail/139331.html) interface to query the ID of a backup set.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
