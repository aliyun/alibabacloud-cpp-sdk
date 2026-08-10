// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHCITYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHCITYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelSearchCityPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelSearchCityPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelSearchCityPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelSearchCityPageRequest() = default ;
    GlobalHotelSearchCityPageRequest(const GlobalHotelSearchCityPageRequest &) = default ;
    GlobalHotelSearchCityPageRequest(GlobalHotelSearchCityPageRequest &&) = default ;
    GlobalHotelSearchCityPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelSearchCityPageRequest() = default ;
    GlobalHotelSearchCityPageRequest& operator=(const GlobalHotelSearchCityPageRequest &) = default ;
    GlobalHotelSearchCityPageRequest& operator=(GlobalHotelSearchCityPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->count_ == nullptr && this->countryCode_ == nullptr && this->start_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelSearchCityPageRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GlobalHotelSearchCityPageRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline GlobalHotelSearchCityPageRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline GlobalHotelSearchCityPageRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelSearchCityPageRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> count_ {};
    // The country code in ISO 3166-1 alpha-2 format.
    shared_ptr<string> countryCode_ {};
    // The pagination offset, starting from 0.
    shared_ptr<int32_t> start_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
