// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceList.hpp>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourcePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PriceList, priceList_);
      DARABONBA_PTR_TO_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PriceList, priceList_);
      DARABONBA_PTR_FROM_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourcePriceResponseBody() = default ;
    GetResourcePriceResponseBody(const GetResourcePriceResponseBody &) = default ;
    GetResourcePriceResponseBody(GetResourcePriceResponseBody &&) = default ;
    GetResourcePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceResponseBody() = default ;
    GetResourcePriceResponseBody& operator=(const GetResourcePriceResponseBody &) = default ;
    GetResourcePriceResponseBody& operator=(GetResourcePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->priceList_ != nullptr && this->priceModel_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourcePriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourcePriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // priceList Field Functions 
    bool hasPriceList() const { return this->priceList_ != nullptr;};
    void deletePriceList() { this->priceList_ = nullptr;};
    inline const vector<GetResourcePriceResponseBodyPriceList> & priceList() const { DARABONBA_PTR_GET_CONST(priceList_, vector<GetResourcePriceResponseBodyPriceList>) };
    inline vector<GetResourcePriceResponseBodyPriceList> priceList() { DARABONBA_PTR_GET(priceList_, vector<GetResourcePriceResponseBodyPriceList>) };
    inline GetResourcePriceResponseBody& setPriceList(const vector<GetResourcePriceResponseBodyPriceList> & priceList) { DARABONBA_PTR_SET_VALUE(priceList_, priceList) };
    inline GetResourcePriceResponseBody& setPriceList(vector<GetResourcePriceResponseBodyPriceList> && priceList) { DARABONBA_PTR_SET_RVALUE(priceList_, priceList) };


    // priceModel Field Functions 
    bool hasPriceModel() const { return this->priceModel_ != nullptr;};
    void deletePriceModel() { this->priceModel_ = nullptr;};
    inline const GetResourcePriceResponseBodyPriceModel & priceModel() const { DARABONBA_PTR_GET_CONST(priceModel_, GetResourcePriceResponseBodyPriceModel) };
    inline GetResourcePriceResponseBodyPriceModel priceModel() { DARABONBA_PTR_GET(priceModel_, GetResourcePriceResponseBodyPriceModel) };
    inline GetResourcePriceResponseBody& setPriceModel(const GetResourcePriceResponseBodyPriceModel & priceModel) { DARABONBA_PTR_SET_VALUE(priceModel_, priceModel) };
    inline GetResourcePriceResponseBody& setPriceModel(GetResourcePriceResponseBodyPriceModel && priceModel) { DARABONBA_PTR_SET_RVALUE(priceModel_, priceModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourcePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The price objects.
    // 
    // This parameter is returned only if a value is specified for AppInstanceType.
    std::shared_ptr<vector<GetResourcePriceResponseBodyPriceList>> priceList_ = nullptr;
    // The price object.
    // 
    // This parameter is returned only if a value is specified for NodeInstanceType.
    std::shared_ptr<GetResourcePriceResponseBodyPriceModel> priceModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
