// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTLOGDEVICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTLOGDEVICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetTlogDeviceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTlogDeviceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CreateBeginDate, createBeginDate_);
      DARABONBA_PTR_TO_JSON(CreateEndDate, createEndDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UpdateBeginDate, updateBeginDate_);
      DARABONBA_PTR_TO_JSON(UpdateEndDate, updateEndDate_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
      DARABONBA_PTR_TO_JSON(Utdid, utdid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTlogDeviceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CreateBeginDate, createBeginDate_);
      DARABONBA_PTR_FROM_JSON(CreateEndDate, createEndDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UpdateBeginDate, updateBeginDate_);
      DARABONBA_PTR_FROM_JSON(UpdateEndDate, updateEndDate_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
      DARABONBA_PTR_FROM_JSON(Utdid, utdid_);
    };
    GetTlogDeviceListRequest() = default ;
    GetTlogDeviceListRequest(const GetTlogDeviceListRequest &) = default ;
    GetTlogDeviceListRequest(GetTlogDeviceListRequest &&) = default ;
    GetTlogDeviceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTlogDeviceListRequest() = default ;
    GetTlogDeviceListRequest& operator=(const GetTlogDeviceListRequest &) = default ;
    GetTlogDeviceListRequest& operator=(GetTlogDeviceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appVersion_ == nullptr && this->beginDate_ == nullptr && this->brand_ == nullptr && this->city_ == nullptr && this->createBeginDate_ == nullptr
        && this->createEndDate_ == nullptr && this->endDate_ == nullptr && this->keyword_ == nullptr && this->model_ == nullptr && this->os_ == nullptr
        && this->osVersion_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->updateBeginDate_ == nullptr && this->updateEndDate_ == nullptr
        && this->userNick_ == nullptr && this->utdid_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetTlogDeviceListRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetTlogDeviceListRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline int64_t getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, 0L) };
    inline GetTlogDeviceListRequest& setBeginDate(int64_t beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline GetTlogDeviceListRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetTlogDeviceListRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // createBeginDate Field Functions 
    bool hasCreateBeginDate() const { return this->createBeginDate_ != nullptr;};
    void deleteCreateBeginDate() { this->createBeginDate_ = nullptr;};
    inline int64_t getCreateBeginDate() const { DARABONBA_PTR_GET_DEFAULT(createBeginDate_, 0L) };
    inline GetTlogDeviceListRequest& setCreateBeginDate(int64_t createBeginDate) { DARABONBA_PTR_SET_VALUE(createBeginDate_, createBeginDate) };


    // createEndDate Field Functions 
    bool hasCreateEndDate() const { return this->createEndDate_ != nullptr;};
    void deleteCreateEndDate() { this->createEndDate_ = nullptr;};
    inline int64_t getCreateEndDate() const { DARABONBA_PTR_GET_DEFAULT(createEndDate_, 0L) };
    inline GetTlogDeviceListRequest& setCreateEndDate(int64_t createEndDate) { DARABONBA_PTR_SET_VALUE(createEndDate_, createEndDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetTlogDeviceListRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetTlogDeviceListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GetTlogDeviceListRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetTlogDeviceListRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline GetTlogDeviceListRequest& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetTlogDeviceListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTlogDeviceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // updateBeginDate Field Functions 
    bool hasUpdateBeginDate() const { return this->updateBeginDate_ != nullptr;};
    void deleteUpdateBeginDate() { this->updateBeginDate_ = nullptr;};
    inline int64_t getUpdateBeginDate() const { DARABONBA_PTR_GET_DEFAULT(updateBeginDate_, 0L) };
    inline GetTlogDeviceListRequest& setUpdateBeginDate(int64_t updateBeginDate) { DARABONBA_PTR_SET_VALUE(updateBeginDate_, updateBeginDate) };


    // updateEndDate Field Functions 
    bool hasUpdateEndDate() const { return this->updateEndDate_ != nullptr;};
    void deleteUpdateEndDate() { this->updateEndDate_ = nullptr;};
    inline int64_t getUpdateEndDate() const { DARABONBA_PTR_GET_DEFAULT(updateEndDate_, 0L) };
    inline GetTlogDeviceListRequest& setUpdateEndDate(int64_t updateEndDate) { DARABONBA_PTR_SET_VALUE(updateEndDate_, updateEndDate) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetTlogDeviceListRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


    // utdid Field Functions 
    bool hasUtdid() const { return this->utdid_ != nullptr;};
    void deleteUtdid() { this->utdid_ = nullptr;};
    inline string getUtdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
    inline GetTlogDeviceListRequest& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    shared_ptr<string> appVersion_ {};
    shared_ptr<int64_t> beginDate_ {};
    shared_ptr<string> brand_ {};
    shared_ptr<string> city_ {};
    shared_ptr<int64_t> createBeginDate_ {};
    shared_ptr<int64_t> createEndDate_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> model_ {};
    // This parameter is required.
    shared_ptr<string> os_ {};
    shared_ptr<string> osVersion_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageIndex_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> updateBeginDate_ {};
    shared_ptr<int64_t> updateEndDate_ {};
    shared_ptr<string> userNick_ {};
    shared_ptr<string> utdid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
