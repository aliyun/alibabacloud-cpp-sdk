// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USEACLBACKUPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_USEACLBACKUPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UseAclBackupDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UseAclBackupDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, UseAclBackupDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    UseAclBackupDataRequest() = default ;
    UseAclBackupDataRequest(const UseAclBackupDataRequest &) = default ;
    UseAclBackupDataRequest(UseAclBackupDataRequest &&) = default ;
    UseAclBackupDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UseAclBackupDataRequest() = default ;
    UseAclBackupDataRequest& operator=(const UseAclBackupDataRequest &) = default ;
    UseAclBackupDataRequest& operator=(UseAclBackupDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backUpTime_ == nullptr
        && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // backUpTime Field Functions 
    bool hasBackUpTime() const { return this->backUpTime_ != nullptr;};
    void deleteBackUpTime() { this->backUpTime_ = nullptr;};
    inline string getBackUpTime() const { DARABONBA_PTR_GET_DEFAULT(backUpTime_, "") };
    inline UseAclBackupDataRequest& setBackUpTime(string backUpTime) { DARABONBA_PTR_SET_VALUE(backUpTime_, backUpTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UseAclBackupDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline UseAclBackupDataRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> backUpTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
