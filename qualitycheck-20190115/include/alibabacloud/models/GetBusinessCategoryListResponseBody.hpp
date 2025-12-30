// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetBusinessCategoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusinessCategoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusinessCategoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBusinessCategoryListResponseBody() = default ;
    GetBusinessCategoryListResponseBody(const GetBusinessCategoryListResponseBody &) = default ;
    GetBusinessCategoryListResponseBody(GetBusinessCategoryListResponseBody &&) = default ;
    GetBusinessCategoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusinessCategoryListResponseBody() = default ;
    GetBusinessCategoryListResponseBody& operator=(const GetBusinessCategoryListResponseBody &) = default ;
    GetBusinessCategoryListResponseBody& operator=(GetBusinessCategoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BusinessCategoryBasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BusinessCategoryBasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Bid, bid_);
          DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        };
        friend void from_json(const Darabonba::Json& j, BusinessCategoryBasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Bid, bid_);
          DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        };
        BusinessCategoryBasicInfo() = default ;
        BusinessCategoryBasicInfo(const BusinessCategoryBasicInfo &) = default ;
        BusinessCategoryBasicInfo(BusinessCategoryBasicInfo &&) = default ;
        BusinessCategoryBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BusinessCategoryBasicInfo() = default ;
        BusinessCategoryBasicInfo& operator=(const BusinessCategoryBasicInfo &) = default ;
        BusinessCategoryBasicInfo& operator=(BusinessCategoryBasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bid_ == nullptr
        && this->businessName_ == nullptr && this->serviceType_ == nullptr; };
        // bid Field Functions 
        bool hasBid() const { return this->bid_ != nullptr;};
        void deleteBid() { this->bid_ = nullptr;};
        inline int32_t getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0) };
        inline BusinessCategoryBasicInfo& setBid(int32_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


        // businessName Field Functions 
        bool hasBusinessName() const { return this->businessName_ != nullptr;};
        void deleteBusinessName() { this->businessName_ = nullptr;};
        inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
        inline BusinessCategoryBasicInfo& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline int32_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
        inline BusinessCategoryBasicInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      protected:
        shared_ptr<int32_t> bid_ {};
        shared_ptr<string> businessName_ {};
        shared_ptr<int32_t> serviceType_ {};
      };

      virtual bool empty() const override { return this->businessCategoryBasicInfo_ == nullptr; };
      // businessCategoryBasicInfo Field Functions 
      bool hasBusinessCategoryBasicInfo() const { return this->businessCategoryBasicInfo_ != nullptr;};
      void deleteBusinessCategoryBasicInfo() { this->businessCategoryBasicInfo_ = nullptr;};
      inline const vector<Data::BusinessCategoryBasicInfo> & getBusinessCategoryBasicInfo() const { DARABONBA_PTR_GET_CONST(businessCategoryBasicInfo_, vector<Data::BusinessCategoryBasicInfo>) };
      inline vector<Data::BusinessCategoryBasicInfo> getBusinessCategoryBasicInfo() { DARABONBA_PTR_GET(businessCategoryBasicInfo_, vector<Data::BusinessCategoryBasicInfo>) };
      inline Data& setBusinessCategoryBasicInfo(const vector<Data::BusinessCategoryBasicInfo> & businessCategoryBasicInfo) { DARABONBA_PTR_SET_VALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };
      inline Data& setBusinessCategoryBasicInfo(vector<Data::BusinessCategoryBasicInfo> && businessCategoryBasicInfo) { DARABONBA_PTR_SET_RVALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };


    protected:
      shared_ptr<vector<Data::BusinessCategoryBasicInfo>> businessCategoryBasicInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBusinessCategoryListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBusinessCategoryListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBusinessCategoryListResponseBody::Data) };
    inline GetBusinessCategoryListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBusinessCategoryListResponseBody::Data) };
    inline GetBusinessCategoryListResponseBody& setData(const GetBusinessCategoryListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBusinessCategoryListResponseBody& setData(GetBusinessCategoryListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBusinessCategoryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBusinessCategoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBusinessCategoryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBusinessCategoryListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
