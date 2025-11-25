// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDACLBACKUPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDACLBACKUPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddAclBackupDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAclBackupDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, AddAclBackupDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    AddAclBackupDataRequest() = default ;
    AddAclBackupDataRequest(const AddAclBackupDataRequest &) = default ;
    AddAclBackupDataRequest(AddAclBackupDataRequest &&) = default ;
    AddAclBackupDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAclBackupDataRequest() = default ;
    AddAclBackupDataRequest& operator=(const AddAclBackupDataRequest &) = default ;
    AddAclBackupDataRequest& operator=(AddAclBackupDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backUpTime_ == nullptr
        && return this->description_ == nullptr && return this->lang_ == nullptr && return this->sourceIp_ == nullptr; };
    // backUpTime Field Functions 
    bool hasBackUpTime() const { return this->backUpTime_ != nullptr;};
    void deleteBackUpTime() { this->backUpTime_ = nullptr;};
    inline string backUpTime() const { DARABONBA_PTR_GET_DEFAULT(backUpTime_, "") };
    inline AddAclBackupDataRequest& setBackUpTime(string backUpTime) { DARABONBA_PTR_SET_VALUE(backUpTime_, backUpTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddAclBackupDataRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddAclBackupDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddAclBackupDataRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> backUpTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
