// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCASHCOUPONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCASHCOUPONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCashCouponsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCashCouponsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeStart, expiryTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCashCouponsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeStart, expiryTimeStart_);
    };
    QueryCashCouponsRequest() = default ;
    QueryCashCouponsRequest(const QueryCashCouponsRequest &) = default ;
    QueryCashCouponsRequest(QueryCashCouponsRequest &&) = default ;
    QueryCashCouponsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCashCouponsRequest() = default ;
    QueryCashCouponsRequest& operator=(const QueryCashCouponsRequest &) = default ;
    QueryCashCouponsRequest& operator=(QueryCashCouponsRequest &&) = default ;
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
    inline QueryCashCouponsRequest& setEffectiveOrNot(bool effectiveOrNot) { DARABONBA_PTR_SET_VALUE(effectiveOrNot_, effectiveOrNot) };


    // expiryTimeEnd Field Functions 
    bool hasExpiryTimeEnd() const { return this->expiryTimeEnd_ != nullptr;};
    void deleteExpiryTimeEnd() { this->expiryTimeEnd_ = nullptr;};
    inline string expiryTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeEnd_, "") };
    inline QueryCashCouponsRequest& setExpiryTimeEnd(string expiryTimeEnd) { DARABONBA_PTR_SET_VALUE(expiryTimeEnd_, expiryTimeEnd) };


    // expiryTimeStart Field Functions 
    bool hasExpiryTimeStart() const { return this->expiryTimeStart_ != nullptr;};
    void deleteExpiryTimeStart() { this->expiryTimeStart_ = nullptr;};
    inline string expiryTimeStart() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeStart_, "") };
    inline QueryCashCouponsRequest& setExpiryTimeStart(string expiryTimeStart) { DARABONBA_PTR_SET_VALUE(expiryTimeStart_, expiryTimeStart) };


  protected:
    // Specifies whether the voucher takes effect. Valid values:
    // 
    // *   true: The voucher takes effect.
    // *   false: The voucher does not take effect.
    std::shared_ptr<bool> effectiveOrNot_ = nullptr;
    // The end time of the validity period of the voucher. Specify the parameter in the yyyy-MM-ddTHH:mm:ssZ format. Example: 2018-08-01T00:00:00Z.
    std::shared_ptr<string> expiryTimeEnd_ = nullptr;
    // The start time of the validity period of the voucher. Specify the parameter in the yyyy-MM-ddTHH:mm:ssZ format. Example: 2018-08-01T00:00:00Z.
    std::shared_ptr<string> expiryTimeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
