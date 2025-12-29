// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetHotelOrderDetailResponseBody() = default ;
    GetHotelOrderDetailResponseBody(const GetHotelOrderDetailResponseBody &) = default ;
    GetHotelOrderDetailResponseBody(GetHotelOrderDetailResponseBody &&) = default ;
    GetHotelOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelOrderDetailResponseBody() = default ;
    GetHotelOrderDetailResponseBody& operator=(const GetHotelOrderDetailResponseBody &) = default ;
    GetHotelOrderDetailResponseBody& operator=(GetHotelOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyAmt, applyAmt_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(ItemUrl, itemUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyAmt, applyAmt_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(ItemUrl, itemUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyAmt_ == nullptr
        && this->gmtCreate_ == nullptr && this->itemUrl_ == nullptr && this->name_ == nullptr && this->quantity_ == nullptr; };
      // applyAmt Field Functions 
      bool hasApplyAmt() const { return this->applyAmt_ != nullptr;};
      void deleteApplyAmt() { this->applyAmt_ = nullptr;};
      inline int64_t getApplyAmt() const { DARABONBA_PTR_GET_DEFAULT(applyAmt_, 0L) };
      inline Result& setApplyAmt(int64_t applyAmt) { DARABONBA_PTR_SET_VALUE(applyAmt_, applyAmt) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Result& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // itemUrl Field Functions 
      bool hasItemUrl() const { return this->itemUrl_ != nullptr;};
      void deleteItemUrl() { this->itemUrl_ = nullptr;};
      inline string getItemUrl() const { DARABONBA_PTR_GET_DEFAULT(itemUrl_, "") };
      inline Result& setItemUrl(string itemUrl) { DARABONBA_PTR_SET_VALUE(itemUrl_, itemUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Result& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    protected:
      shared_ptr<int64_t> applyAmt_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> itemUrl_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> quantity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetHotelOrderDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelOrderDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetHotelOrderDetailResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetHotelOrderDetailResponseBody::Result>) };
    inline vector<GetHotelOrderDetailResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetHotelOrderDetailResponseBody::Result>) };
    inline GetHotelOrderDetailResponseBody& setResult(const vector<GetHotelOrderDetailResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelOrderDetailResponseBody& setResult(vector<GetHotelOrderDetailResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetHotelOrderDetailResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
