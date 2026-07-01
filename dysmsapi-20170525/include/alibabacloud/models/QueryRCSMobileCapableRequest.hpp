// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRCSMOBILECAPABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRCSMOBILECAPABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryRCSMobileCapableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRCSMobileCapableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRCSMobileCapableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    QueryRCSMobileCapableRequest() = default ;
    QueryRCSMobileCapableRequest(const QueryRCSMobileCapableRequest &) = default ;
    QueryRCSMobileCapableRequest(QueryRCSMobileCapableRequest &&) = default ;
    QueryRCSMobileCapableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRCSMobileCapableRequest() = default ;
    QueryRCSMobileCapableRequest& operator=(const QueryRCSMobileCapableRequest &) = default ;
    QueryRCSMobileCapableRequest& operator=(QueryRCSMobileCapableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phoneNumbers_ == nullptr
        && this->signName_ == nullptr && this->templateCode_ == nullptr; };
    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline string getPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbers_, "") };
    inline QueryRCSMobileCapableRequest& setPhoneNumbers(string phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QueryRCSMobileCapableRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QueryRCSMobileCapableRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> phoneNumbers_ {};
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
