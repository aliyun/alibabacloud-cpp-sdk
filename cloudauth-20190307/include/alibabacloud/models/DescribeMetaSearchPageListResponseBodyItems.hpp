// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetaSearchPageListResponseBodyItemsRequest.hpp>
#include <alibabacloud/models/DescribeMetaSearchPageListResponseBodyItemsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BankCard, bankCard_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestJson, requestJson_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(ResponseJson, responseJson_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BankCard, bankCard_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestJson, requestJson_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(ResponseJson, responseJson_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
    };
    DescribeMetaSearchPageListResponseBodyItems() = default ;
    DescribeMetaSearchPageListResponseBodyItems(const DescribeMetaSearchPageListResponseBodyItems &) = default ;
    DescribeMetaSearchPageListResponseBodyItems(DescribeMetaSearchPageListResponseBodyItems &&) = default ;
    DescribeMetaSearchPageListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListResponseBodyItems() = default ;
    DescribeMetaSearchPageListResponseBodyItems& operator=(const DescribeMetaSearchPageListResponseBodyItems &) = default ;
    DescribeMetaSearchPageListResponseBodyItems& operator=(DescribeMetaSearchPageListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->apiName_ == nullptr && return this->bankCard_ == nullptr && return this->bizCode_ == nullptr && return this->date_ == nullptr && return this->identifyNum_ == nullptr
        && return this->ispName_ == nullptr && return this->mobile_ == nullptr && return this->request_ == nullptr && return this->requestId_ == nullptr && return this->requestJson_ == nullptr
        && return this->response_ == nullptr && return this->responseJson_ == nullptr && return this->subCode_ == nullptr && return this->userName_ == nullptr && return this->vehicleNum_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // bankCard Field Functions 
    bool hasBankCard() const { return this->bankCard_ != nullptr;};
    void deleteBankCard() { this->bankCard_ = nullptr;};
    inline string bankCard() const { DARABONBA_PTR_GET_DEFAULT(bankCard_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setBankCard(string bankCard) { DARABONBA_PTR_SET_VALUE(bankCard_, bankCard) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const Models::DescribeMetaSearchPageListResponseBodyItemsRequest & request() const { DARABONBA_PTR_GET_CONST(request_, Models::DescribeMetaSearchPageListResponseBodyItemsRequest) };
    inline Models::DescribeMetaSearchPageListResponseBodyItemsRequest request() { DARABONBA_PTR_GET(request_, Models::DescribeMetaSearchPageListResponseBodyItemsRequest) };
    inline DescribeMetaSearchPageListResponseBodyItems& setRequest(const Models::DescribeMetaSearchPageListResponseBodyItemsRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline DescribeMetaSearchPageListResponseBodyItems& setRequest(Models::DescribeMetaSearchPageListResponseBodyItemsRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestJson Field Functions 
    bool hasRequestJson() const { return this->requestJson_ != nullptr;};
    void deleteRequestJson() { this->requestJson_ = nullptr;};
    inline string requestJson() const { DARABONBA_PTR_GET_DEFAULT(requestJson_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setRequestJson(string requestJson) { DARABONBA_PTR_SET_VALUE(requestJson_, requestJson) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::DescribeMetaSearchPageListResponseBodyItemsResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::DescribeMetaSearchPageListResponseBodyItemsResponse) };
    inline Models::DescribeMetaSearchPageListResponseBodyItemsResponse response() { DARABONBA_PTR_GET(response_, Models::DescribeMetaSearchPageListResponseBodyItemsResponse) };
    inline DescribeMetaSearchPageListResponseBodyItems& setResponse(const Models::DescribeMetaSearchPageListResponseBodyItemsResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline DescribeMetaSearchPageListResponseBodyItems& setResponse(Models::DescribeMetaSearchPageListResponseBodyItemsResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // responseJson Field Functions 
    bool hasResponseJson() const { return this->responseJson_ != nullptr;};
    void deleteResponseJson() { this->responseJson_ = nullptr;};
    inline string responseJson() const { DARABONBA_PTR_GET_DEFAULT(responseJson_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setResponseJson(string responseJson) { DARABONBA_PTR_SET_VALUE(responseJson_, responseJson) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string vehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline DescribeMetaSearchPageListResponseBodyItems& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


  protected:
    std::shared_ptr<string> api_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> bankCard_ = nullptr;
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> identifyNum_ = nullptr;
    std::shared_ptr<string> ispName_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<Models::DescribeMetaSearchPageListResponseBodyItemsRequest> request_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> requestJson_ = nullptr;
    std::shared_ptr<Models::DescribeMetaSearchPageListResponseBodyItemsResponse> response_ = nullptr;
    std::shared_ptr<string> responseJson_ = nullptr;
    std::shared_ptr<string> subCode_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> vehicleNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
