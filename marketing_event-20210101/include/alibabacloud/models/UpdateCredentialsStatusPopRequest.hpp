// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALSSTATUSPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALSSTATUSPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class UpdateCredentialsStatusPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialsStatusPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ProxyRecipientName, proxyRecipientName_);
      DARABONBA_PTR_TO_JSON(ProxyRecipientPhoneNumber, proxyRecipientPhoneNumber_);
      DARABONBA_PTR_TO_JSON(ReceiptLocation, receiptLocation_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialsStatusPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ProxyRecipientName, proxyRecipientName_);
      DARABONBA_PTR_FROM_JSON(ProxyRecipientPhoneNumber, proxyRecipientPhoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReceiptLocation, receiptLocation_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    UpdateCredentialsStatusPopRequest() = default ;
    UpdateCredentialsStatusPopRequest(const UpdateCredentialsStatusPopRequest &) = default ;
    UpdateCredentialsStatusPopRequest(UpdateCredentialsStatusPopRequest &&) = default ;
    UpdateCredentialsStatusPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialsStatusPopRequest() = default ;
    UpdateCredentialsStatusPopRequest& operator=(const UpdateCredentialsStatusPopRequest &) = default ;
    UpdateCredentialsStatusPopRequest& operator=(UpdateCredentialsStatusPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->proxyRecipientName_ != nullptr && this->proxyRecipientPhoneNumber_ != nullptr && this->receiptLocation_ != nullptr && this->time_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateCredentialsStatusPopRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // proxyRecipientName Field Functions 
    bool hasProxyRecipientName() const { return this->proxyRecipientName_ != nullptr;};
    void deleteProxyRecipientName() { this->proxyRecipientName_ = nullptr;};
    inline string proxyRecipientName() const { DARABONBA_PTR_GET_DEFAULT(proxyRecipientName_, "") };
    inline UpdateCredentialsStatusPopRequest& setProxyRecipientName(string proxyRecipientName) { DARABONBA_PTR_SET_VALUE(proxyRecipientName_, proxyRecipientName) };


    // proxyRecipientPhoneNumber Field Functions 
    bool hasProxyRecipientPhoneNumber() const { return this->proxyRecipientPhoneNumber_ != nullptr;};
    void deleteProxyRecipientPhoneNumber() { this->proxyRecipientPhoneNumber_ = nullptr;};
    inline string proxyRecipientPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(proxyRecipientPhoneNumber_, "") };
    inline UpdateCredentialsStatusPopRequest& setProxyRecipientPhoneNumber(string proxyRecipientPhoneNumber) { DARABONBA_PTR_SET_VALUE(proxyRecipientPhoneNumber_, proxyRecipientPhoneNumber) };


    // receiptLocation Field Functions 
    bool hasReceiptLocation() const { return this->receiptLocation_ != nullptr;};
    void deleteReceiptLocation() { this->receiptLocation_ = nullptr;};
    inline string receiptLocation() const { DARABONBA_PTR_GET_DEFAULT(receiptLocation_, "") };
    inline UpdateCredentialsStatusPopRequest& setReceiptLocation(string receiptLocation) { DARABONBA_PTR_SET_VALUE(receiptLocation_, receiptLocation) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline UpdateCredentialsStatusPopRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> proxyRecipientName_ = nullptr;
    std::shared_ptr<string> proxyRecipientPhoneNumber_ = nullptr;
    std::shared_ptr<string> receiptLocation_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
