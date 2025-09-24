// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPrepaidCardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrepaidCardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeStart, expiryTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrepaidCardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeStart, expiryTimeStart_);
    };
    QueryPrepaidCardsRequest() = default ;
    QueryPrepaidCardsRequest(const QueryPrepaidCardsRequest &) = default ;
    QueryPrepaidCardsRequest(QueryPrepaidCardsRequest &&) = default ;
    QueryPrepaidCardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrepaidCardsRequest() = default ;
    QueryPrepaidCardsRequest& operator=(const QueryPrepaidCardsRequest &) = default ;
    QueryPrepaidCardsRequest& operator=(QueryPrepaidCardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveOrNot_ != nullptr
        && this->expiryTimeEnd_ != nullptr && this->expiryTimeStart_ != nullptr; };
    // effectiveOrNot Field Functions 
    bool hasEffectiveOrNot() const { return this->effectiveOrNot_ != nullptr;};
    void deleteEffectiveOrNot() { this->effectiveOrNot_ = nullptr;};
    inline bool effectiveOrNot() const { DARABONBA_PTR_GET_DEFAULT(effectiveOrNot_, false) };
    inline QueryPrepaidCardsRequest& setEffectiveOrNot(bool effectiveOrNot) { DARABONBA_PTR_SET_VALUE(effectiveOrNot_, effectiveOrNot) };


    // expiryTimeEnd Field Functions 
    bool hasExpiryTimeEnd() const { return this->expiryTimeEnd_ != nullptr;};
    void deleteExpiryTimeEnd() { this->expiryTimeEnd_ = nullptr;};
    inline string expiryTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeEnd_, "") };
    inline QueryPrepaidCardsRequest& setExpiryTimeEnd(string expiryTimeEnd) { DARABONBA_PTR_SET_VALUE(expiryTimeEnd_, expiryTimeEnd) };


    // expiryTimeStart Field Functions 
    bool hasExpiryTimeStart() const { return this->expiryTimeStart_ != nullptr;};
    void deleteExpiryTimeStart() { this->expiryTimeStart_ = nullptr;};
    inline string expiryTimeStart() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeStart_, "") };
    inline QueryPrepaidCardsRequest& setExpiryTimeStart(string expiryTimeStart) { DARABONBA_PTR_SET_VALUE(expiryTimeStart_, expiryTimeStart) };


  protected:
    // Specifies whether the prepaid card takes effect. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> effectiveOrNot_ = nullptr;
    // The end of the expiration time of prepaid cards to query. The value must be in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> expiryTimeEnd_ = nullptr;
    // The start of the expiration time of prepaid cards to query. The value must be in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> expiryTimeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
