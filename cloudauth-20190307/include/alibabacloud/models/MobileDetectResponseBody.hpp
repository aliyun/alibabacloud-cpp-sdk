// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileDetectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileDetectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, MobileDetectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    MobileDetectResponseBody() = default ;
    MobileDetectResponseBody(const MobileDetectResponseBody &) = default ;
    MobileDetectResponseBody(MobileDetectResponseBody &&) = default ;
    MobileDetectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileDetectResponseBody() = default ;
    MobileDetectResponseBody& operator=(const MobileDetectResponseBody &) = default ;
    MobileDetectResponseBody& operator=(MobileDetectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->bizCode_ == nullptr && this->ispName_ == nullptr && this->mobile_ == nullptr && this->subCode_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline Items& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // bizCode Field Functions 
        bool hasBizCode() const { return this->bizCode_ != nullptr;};
        void deleteBizCode() { this->bizCode_ = nullptr;};
        inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
        inline Items& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline Items& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline Items& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // subCode Field Functions 
        bool hasSubCode() const { return this->subCode_ != nullptr;};
        void deleteSubCode() { this->subCode_ = nullptr;};
        inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
        inline Items& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      protected:
        // Phone number\\"s area (only for plaintext phone numbers)
        shared_ptr<string> area_ {};
        // Verification result
        // 
        // - 1: Available online 
        // - 2: Not available online
        // - 3: No query result
        shared_ptr<string> bizCode_ {};
        // Operator name
        // 
        // - CMCC: China Mobile 
        // - CUCC: China Unicom 
        // - CTCC: China Telecom
        shared_ptr<string> ispName_ {};
        // Phone number
        shared_ptr<string> mobile_ {};
        // Verification details
        // 
        // - 101: Available number
        // - 102: Empty number
        // - 103: Suspended 
        // - 104: Silent number (inactive small number, new number, non-smartphone user within the last six months) 
        // - 105: Risky number (long-term shutdown or no voice service activated and prone to complaints)
        // - 301: No record found
        shared_ptr<string> subCode_ {};
      };

      virtual bool empty() const override { return this->chargeCount_ == nullptr
        && this->items_ == nullptr; };
      // chargeCount Field Functions 
      bool hasChargeCount() const { return this->chargeCount_ != nullptr;};
      void deleteChargeCount() { this->chargeCount_ = nullptr;};
      inline string getChargeCount() const { DARABONBA_PTR_GET_DEFAULT(chargeCount_, "") };
      inline ResultObject& setChargeCount(string chargeCount) { DARABONBA_PTR_SET_VALUE(chargeCount_, chargeCount) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ResultObject::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ResultObject::Items>) };
      inline vector<ResultObject::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ResultObject::Items>) };
      inline ResultObject& setItems(const vector<ResultObject::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ResultObject& setItems(vector<ResultObject::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // Billing count, the total billing count in one request
      shared_ptr<string> chargeCount_ {};
      // Verification results set
      shared_ptr<vector<ResultObject::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MobileDetectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MobileDetectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MobileDetectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const MobileDetectResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, MobileDetectResponseBody::ResultObject) };
    inline MobileDetectResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, MobileDetectResponseBody::ResultObject) };
    inline MobileDetectResponseBody& setResultObject(const MobileDetectResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline MobileDetectResponseBody& setResultObject(MobileDetectResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<MobileDetectResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
