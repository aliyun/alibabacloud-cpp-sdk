// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUMDNSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RUMDNSRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class RumDnsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RumDnsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RumDnsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    RumDnsResponse() = default ;
    RumDnsResponse(const RumDnsResponse &) = default ;
    RumDnsResponse(RumDnsResponse &&) = default ;
    RumDnsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RumDnsResponse() = default ;
    RumDnsResponse& operator=(const RumDnsResponse &) = default ;
    RumDnsResponse& operator=(RumDnsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->message_ != nullptr && this->result_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline RumDnsResponse& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RumDnsResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline RumDnsResponse& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
