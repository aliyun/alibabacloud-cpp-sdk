// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSITEDELETEDNSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEBSITEDELETEDNSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class WebsiteDeleteDnsRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebsiteDeleteDnsRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(WebsiteNo, websiteNo_);
    };
    friend void from_json(const Darabonba::Json& j, WebsiteDeleteDnsRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(WebsiteNo, websiteNo_);
    };
    WebsiteDeleteDnsRecordRequest() = default ;
    WebsiteDeleteDnsRecordRequest(const WebsiteDeleteDnsRecordRequest &) = default ;
    WebsiteDeleteDnsRecordRequest(WebsiteDeleteDnsRecordRequest &&) = default ;
    WebsiteDeleteDnsRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebsiteDeleteDnsRecordRequest() = default ;
    WebsiteDeleteDnsRecordRequest& operator=(const WebsiteDeleteDnsRecordRequest &) = default ;
    WebsiteDeleteDnsRecordRequest& operator=(WebsiteDeleteDnsRecordRequest &&) = default ;
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
    inline WebsiteDeleteDnsRecordRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string rr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline WebsiteDeleteDnsRecordRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline WebsiteDeleteDnsRecordRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WebsiteDeleteDnsRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline WebsiteDeleteDnsRecordRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline WebsiteDeleteDnsRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // websiteNo Field Functions 
    bool hasWebsiteNo() const { return this->websiteNo_ != nullptr;};
    void deleteWebsiteNo() { this->websiteNo_ = nullptr;};
    inline string websiteNo() const { DARABONBA_PTR_GET_DEFAULT(websiteNo_, "") };
    inline WebsiteDeleteDnsRecordRequest& setWebsiteNo(string websiteNo) { DARABONBA_PTR_SET_VALUE(websiteNo_, websiteNo) };


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
