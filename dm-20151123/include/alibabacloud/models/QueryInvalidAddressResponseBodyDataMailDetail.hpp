// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODYDATAMAILDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODYDATAMAILDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryInvalidAddressResponseBodyDataMailDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvalidAddressResponseBodyDataMailDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(ToAddress, toAddress_);
      DARABONBA_PTR_TO_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvalidAddressResponseBodyDataMailDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(ToAddress, toAddress_);
      DARABONBA_PTR_FROM_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
    };
    QueryInvalidAddressResponseBodyDataMailDetail() = default ;
    QueryInvalidAddressResponseBodyDataMailDetail(const QueryInvalidAddressResponseBodyDataMailDetail &) = default ;
    QueryInvalidAddressResponseBodyDataMailDetail(QueryInvalidAddressResponseBodyDataMailDetail &&) = default ;
    QueryInvalidAddressResponseBodyDataMailDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvalidAddressResponseBodyDataMailDetail() = default ;
    QueryInvalidAddressResponseBodyDataMailDetail& operator=(const QueryInvalidAddressResponseBodyDataMailDetail &) = default ;
    QueryInvalidAddressResponseBodyDataMailDetail& operator=(QueryInvalidAddressResponseBodyDataMailDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastUpdateTime_ != nullptr
        && this->toAddress_ != nullptr && this->utcLastUpdateTime_ != nullptr; };
    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline QueryInvalidAddressResponseBodyDataMailDetail& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string toAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline QueryInvalidAddressResponseBodyDataMailDetail& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


    // utcLastUpdateTime Field Functions 
    bool hasUtcLastUpdateTime() const { return this->utcLastUpdateTime_ != nullptr;};
    void deleteUtcLastUpdateTime() { this->utcLastUpdateTime_ = nullptr;};
    inline int64_t utcLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(utcLastUpdateTime_, 0L) };
    inline QueryInvalidAddressResponseBodyDataMailDetail& setUtcLastUpdateTime(int64_t utcLastUpdateTime) { DARABONBA_PTR_SET_VALUE(utcLastUpdateTime_, utcLastUpdateTime) };


  protected:
    // Update time.
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    // Recipient address.
    std::shared_ptr<string> toAddress_ = nullptr;
    // Update time (in timestamp format).
    std::shared_ptr<int64_t> utcLastUpdateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
