// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListBackupDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backupType, backupType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backupType, backupType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    ListBackupDataRequest() = default ;
    ListBackupDataRequest(const ListBackupDataRequest &) = default ;
    ListBackupDataRequest(ListBackupDataRequest &&) = default ;
    ListBackupDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupDataRequest() = default ;
    ListBackupDataRequest& operator=(const ListBackupDataRequest &) = default ;
    ListBackupDataRequest& operator=(ListBackupDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupType_ == nullptr
        && return this->instanceId_ == nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline ListBackupDataRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBackupDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The backup type. Specific backup data is filtered based on the type. If you leave this parameter empty, all backup data is returned.
    // 
    // Valid values:
    // 
    // *   redundant_remote
    // *   remote
    // *   redundant
    // *   full_remote
    // *   local
    // *   full
    std::shared_ptr<string> backupType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
