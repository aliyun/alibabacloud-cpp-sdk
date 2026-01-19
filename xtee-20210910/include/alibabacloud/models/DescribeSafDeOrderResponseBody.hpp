// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafDeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafDeOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafDeOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSafDeOrderResponseBody() = default ;
    DescribeSafDeOrderResponseBody(const DescribeSafDeOrderResponseBody &) = default ;
    DescribeSafDeOrderResponseBody(DescribeSafDeOrderResponseBody &&) = default ;
    DescribeSafDeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafDeOrderResponseBody() = default ;
    DescribeSafDeOrderResponseBody& operator=(const DescribeSafDeOrderResponseBody &) = default ;
    DescribeSafDeOrderResponseBody& operator=(DescribeSafDeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
        DARABONBA_PTR_TO_JSON(openUserType, openUserType_);
        DARABONBA_PTR_TO_JSON(regions, regions_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
        DARABONBA_PTR_FROM_JSON(openUserType, openUserType_);
        DARABONBA_PTR_FROM_JSON(regions, regions_);
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
      class Regions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Regions& obj) { 
          DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(specification, specification_);
        };
        friend void from_json(const Darabonba::Json& j, Regions& obj) { 
          DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(specification, specification_);
        };
        Regions() = default ;
        Regions(const Regions &) = default ;
        Regions(Regions &&) = default ;
        Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Regions() = default ;
        Regions& operator=(const Regions &) = default ;
        Regions& operator=(Regions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expirationDate_ == nullptr
        && this->region_ == nullptr && this->specification_ == nullptr; };
        // expirationDate Field Functions 
        bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
        void deleteExpirationDate() { this->expirationDate_ = nullptr;};
        inline int64_t getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
        inline Regions& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Regions& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline int32_t getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, 0) };
        inline Regions& setSpecification(int32_t specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      protected:
        // Expiration date (timestamp).
        shared_ptr<int64_t> expirationDate_ {};
        // Region ID.
        shared_ptr<string> region_ {};
        // Specification model:
        // 
        // 1: Basic Edition 
        // 2: Advanced Edition 
        // 3: Premium Edition 
        // 4: Flagship Edition
        shared_ptr<int32_t> specification_ {};
      };

      virtual bool empty() const override { return this->expirationDate_ == nullptr
        && this->openUserType_ == nullptr && this->regions_ == nullptr; };
      // expirationDate Field Functions 
      bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
      void deleteExpirationDate() { this->expirationDate_ = nullptr;};
      inline int64_t getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
      inline ResultObject& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


      // openUserType Field Functions 
      bool hasOpenUserType() const { return this->openUserType_ != nullptr;};
      void deleteOpenUserType() { this->openUserType_ = nullptr;};
      inline int32_t getOpenUserType() const { DARABONBA_PTR_GET_DEFAULT(openUserType_, 0) };
      inline ResultObject& setOpenUserType(int32_t openUserType) { DARABONBA_PTR_SET_VALUE(openUserType_, openUserType) };


      // regions Field Functions 
      bool hasRegions() const { return this->regions_ != nullptr;};
      void deleteRegions() { this->regions_ = nullptr;};
      inline const vector<ResultObject::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<ResultObject::Regions>) };
      inline vector<ResultObject::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<ResultObject::Regions>) };
      inline ResultObject& setRegions(const vector<ResultObject::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
      inline ResultObject& setRegions(vector<ResultObject::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    protected:
      // Expiration time
      shared_ptr<int64_t> expirationDate_ {};
      // Based on the product type subscribed by the customer, the console permissions are divided into three categories:
      // 
      //      1. New Customer: Has not purchased/subscribed to any service.
      //      2. Old Customer (Subscription): Customers who have purchased the SAF product.
      //      3. Pay-As-You-Go: Customers who have purchased the SAF_BAG product or activated SAF_POS.
      shared_ptr<int32_t> openUserType_ {};
      // Activated region permission addresses.
      shared_ptr<vector<ResultObject::Regions>> regions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSafDeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeSafDeOrderResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeSafDeOrderResponseBody::ResultObject) };
    inline DescribeSafDeOrderResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeSafDeOrderResponseBody::ResultObject) };
    inline DescribeSafDeOrderResponseBody& setResultObject(const DescribeSafDeOrderResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSafDeOrderResponseBody& setResultObject(DescribeSafDeOrderResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeSafDeOrderResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
