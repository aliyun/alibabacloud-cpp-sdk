// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHHOTELLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHHOTELLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelSearchHotelListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelSearchHotelListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelSearchHotelListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelSearchHotelListRequest() = default ;
    GlobalHotelSearchHotelListRequest(const GlobalHotelSearchHotelListRequest &) = default ;
    GlobalHotelSearchHotelListRequest(GlobalHotelSearchHotelListRequest &&) = default ;
    GlobalHotelSearchHotelListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelSearchHotelListRequest() = default ;
    GlobalHotelSearchHotelListRequest& operator=(const GlobalHotelSearchHotelListRequest &) = default ;
    GlobalHotelSearchHotelListRequest& operator=(GlobalHotelSearchHotelListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->cityCode_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelSearchHotelListRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline GlobalHotelSearchHotelListRequest& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GlobalHotelSearchHotelListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GlobalHotelSearchHotelListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelSearchHotelListRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The city code.
    // 
    // This parameter is required.
    shared_ptr<string> cityCode_ {};
    // The page number. Pages start from 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // traceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
