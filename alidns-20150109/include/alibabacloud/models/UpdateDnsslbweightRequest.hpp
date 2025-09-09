// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSSLBWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSSLBWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDNSSLBWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDNSSLBWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDNSSLBWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateDNSSLBWeightRequest() = default ;
    UpdateDNSSLBWeightRequest(const UpdateDNSSLBWeightRequest &) = default ;
    UpdateDNSSLBWeightRequest(UpdateDNSSLBWeightRequest &&) = default ;
    UpdateDNSSLBWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDNSSLBWeightRequest() = default ;
    UpdateDNSSLBWeightRequest& operator=(const UpdateDNSSLBWeightRequest &) = default ;
    UpdateDNSSLBWeightRequest& operator=(UpdateDNSSLBWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->recordId_ != nullptr && this->userClientIp_ != nullptr && this->weight_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDNSSLBWeightRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateDNSSLBWeightRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline UpdateDNSSLBWeightRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateDNSSLBWeightRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the DNS record. You can call the [DescribeDomainRecords](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describedomainrecords?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordId_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
    // The weight of the DNS record that you want to specify. Valid values: `1 to 100`.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
