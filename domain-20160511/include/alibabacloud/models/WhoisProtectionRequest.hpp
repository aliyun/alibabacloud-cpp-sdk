// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHOISPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WHOISPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class WhoisProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhoisProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataContent, dataContent_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(WhoisProtect, whoisProtect_);
    };
    friend void from_json(const Darabonba::Json& j, WhoisProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataContent, dataContent_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(WhoisProtect, whoisProtect_);
    };
    WhoisProtectionRequest() = default ;
    WhoisProtectionRequest(const WhoisProtectionRequest &) = default ;
    WhoisProtectionRequest(WhoisProtectionRequest &&) = default ;
    WhoisProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhoisProtectionRequest() = default ;
    WhoisProtectionRequest& operator=(const WhoisProtectionRequest &) = default ;
    WhoisProtectionRequest& operator=(WhoisProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataContent_ == nullptr
        && this->dataSource_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr && this->whoisProtect_ == nullptr; };
    // dataContent Field Functions 
    bool hasDataContent() const { return this->dataContent_ != nullptr;};
    void deleteDataContent() { this->dataContent_ = nullptr;};
    inline string getDataContent() const { DARABONBA_PTR_GET_DEFAULT(dataContent_, "") };
    inline WhoisProtectionRequest& setDataContent(string dataContent) { DARABONBA_PTR_SET_VALUE(dataContent_, dataContent) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline int32_t getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, 0) };
    inline WhoisProtectionRequest& setDataSource(int32_t dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline WhoisProtectionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline WhoisProtectionRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // whoisProtect Field Functions 
    bool hasWhoisProtect() const { return this->whoisProtect_ != nullptr;};
    void deleteWhoisProtect() { this->whoisProtect_ = nullptr;};
    inline bool getWhoisProtect() const { DARABONBA_PTR_GET_DEFAULT(whoisProtect_, false) };
    inline WhoisProtectionRequest& setWhoisProtect(bool whoisProtect) { DARABONBA_PTR_SET_VALUE(whoisProtect_, whoisProtect) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataContent_ {};
    // This parameter is required.
    shared_ptr<int32_t> dataSource_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
    // This parameter is required.
    shared_ptr<bool> whoisProtect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
