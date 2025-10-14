// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateBackupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
    };
    CreateBackupResponseBodyData() = default ;
    CreateBackupResponseBodyData(const CreateBackupResponseBodyData &) = default ;
    CreateBackupResponseBodyData(CreateBackupResponseBodyData &&) = default ;
    CreateBackupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupResponseBodyData() = default ;
    CreateBackupResponseBodyData& operator=(const CreateBackupResponseBodyData &) = default ;
    CreateBackupResponseBodyData& operator=(CreateBackupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateBackupResponseBodyData& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


  protected:
    std::shared_ptr<string> backupSetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
