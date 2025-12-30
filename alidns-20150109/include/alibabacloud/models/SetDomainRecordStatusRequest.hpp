// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINRECORDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINRECORDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDomainRecordStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainRecordStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainRecordStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SetDomainRecordStatusRequest() = default ;
    SetDomainRecordStatusRequest(const SetDomainRecordStatusRequest &) = default ;
    SetDomainRecordStatusRequest(SetDomainRecordStatusRequest &&) = default ;
    SetDomainRecordStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainRecordStatusRequest() = default ;
    SetDomainRecordStatusRequest& operator=(const SetDomainRecordStatusRequest &) = default ;
    SetDomainRecordStatusRequest& operator=(SetDomainRecordStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->recordId_ == nullptr && this->status_ == nullptr && this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetDomainRecordStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline SetDomainRecordStatusRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetDomainRecordStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SetDomainRecordStatusRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the DNS record. You can call the [DescribeDomainRecords](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomainrecords?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> recordId_ {};
    // The state of the DNS record. Valid values:
    // 
    // *   **Enable**: enables the DNS record.
    // *   **Disable**: disables the DNS record.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
