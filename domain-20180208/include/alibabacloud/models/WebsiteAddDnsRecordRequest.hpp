// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSITEADDDNSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEBSITEADDDNSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class WebsiteAddDnsRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebsiteAddDnsRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(WebsiteNo, websiteNo_);
    };
    friend void from_json(const Darabonba::Json& j, WebsiteAddDnsRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(WebsiteNo, websiteNo_);
    };
    WebsiteAddDnsRecordRequest() = default ;
    WebsiteAddDnsRecordRequest(const WebsiteAddDnsRecordRequest &) = default ;
    WebsiteAddDnsRecordRequest(WebsiteAddDnsRecordRequest &&) = default ;
    WebsiteAddDnsRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebsiteAddDnsRecordRequest() = default ;
    WebsiteAddDnsRecordRequest& operator=(const WebsiteAddDnsRecordRequest &) = default ;
    WebsiteAddDnsRecordRequest& operator=(WebsiteAddDnsRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->rr_ == nullptr && return this->source_ == nullptr && return this->type_ == nullptr && return this->userId_ == nullptr && return this->value_ == nullptr
        && return this->websiteNo_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline WebsiteAddDnsRecordRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string rr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline WebsiteAddDnsRecordRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline WebsiteAddDnsRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WebsiteAddDnsRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline WebsiteAddDnsRecordRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline WebsiteAddDnsRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // websiteNo Field Functions 
    bool hasWebsiteNo() const { return this->websiteNo_ != nullptr;};
    void deleteWebsiteNo() { this->websiteNo_ = nullptr;};
    inline string websiteNo() const { DARABONBA_PTR_GET_DEFAULT(websiteNo_, "") };
    inline WebsiteAddDnsRecordRequest& setWebsiteNo(string websiteNo) { DARABONBA_PTR_SET_VALUE(websiteNo_, websiteNo) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> rr_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> websiteNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
