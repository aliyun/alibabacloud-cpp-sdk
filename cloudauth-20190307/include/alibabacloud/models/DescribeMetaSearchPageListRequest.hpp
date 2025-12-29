// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
    };
    DescribeMetaSearchPageListRequest() = default ;
    DescribeMetaSearchPageListRequest(const DescribeMetaSearchPageListRequest &) = default ;
    DescribeMetaSearchPageListRequest(DescribeMetaSearchPageListRequest &&) = default ;
    DescribeMetaSearchPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListRequest() = default ;
    DescribeMetaSearchPageListRequest& operator=(const DescribeMetaSearchPageListRequest &) = default ;
    DescribeMetaSearchPageListRequest& operator=(DescribeMetaSearchPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && this->bankCard_ == nullptr && this->bizCode_ == nullptr && this->currentPage_ == nullptr && this->endDate_ == nullptr && this->identifyNum_ == nullptr
        && this->ispName_ == nullptr && this->mobile_ == nullptr && this->pageSize_ == nullptr && this->reqId_ == nullptr && this->startDate_ == nullptr
        && this->subCode_ == nullptr && this->userName_ == nullptr && this->vehicleNum_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline DescribeMetaSearchPageListRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // bankCard Field Functions 
    bool hasBankCard() const { return this->bankCard_ != nullptr;};
    void deleteBankCard() { this->bankCard_ = nullptr;};
    inline string getBankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
    inline DescribeMetaSearchPageListRequest& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeMetaSearchPageListRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeMetaSearchPageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeMetaSearchPageListRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline DescribeMetaSearchPageListRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeMetaSearchPageListRequest& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeMetaSearchPageListRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetaSearchPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeMetaSearchPageListRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeMetaSearchPageListRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeMetaSearchPageListRequest& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeMetaSearchPageListRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string getVehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline DescribeMetaSearchPageListRequest& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


  protected:
    // This parameter is required.
    shared_ptr<string> api_ {};
    shared_ptr<string> bankCard_ {};
    shared_ptr<string> bizCode_ {};
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // This parameter is required.
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<string> identifyNum_ {};
    shared_ptr<string> ispName_ {};
    shared_ptr<string> mobile_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> reqId_ {};
    // This parameter is required.
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> subCode_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> vehicleNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
