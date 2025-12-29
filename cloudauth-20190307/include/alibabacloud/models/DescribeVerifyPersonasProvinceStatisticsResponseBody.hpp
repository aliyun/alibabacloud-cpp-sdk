// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODY_HPP_
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
  class DescribeVerifyPersonasProvinceStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasProvinceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasProvinceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyPersonasProvinceStatisticsResponseBody() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(const DescribeVerifyPersonasProvinceStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(DescribeVerifyPersonasProvinceStatisticsResponseBody &&) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasProvinceStatisticsResponseBody() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody& operator=(const DescribeVerifyPersonasProvinceStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody& operator=(DescribeVerifyPersonasProvinceStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AllUserCnt, allUserCnt_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AllUserCnt, allUserCnt_);
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
          DARABONBA_PTR_TO_JSON(ProvinceCnt, provinceCnt_);
          DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_TO_JSON(ProvinceRate, provinceRate_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(ProvinceCnt, provinceCnt_);
          DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_FROM_JSON(ProvinceRate, provinceRate_);
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
        virtual bool empty() const override { return this->provinceCnt_ == nullptr
        && this->provinceName_ == nullptr && this->provinceRate_ == nullptr; };
        // provinceCnt Field Functions 
        bool hasProvinceCnt() const { return this->provinceCnt_ != nullptr;};
        void deleteProvinceCnt() { this->provinceCnt_ = nullptr;};
        inline int64_t getProvinceCnt() const { DARABONBA_PTR_GET_DEFAULT(provinceCnt_, 0L) };
        inline Items& setProvinceCnt(int64_t provinceCnt) { DARABONBA_PTR_SET_VALUE(provinceCnt_, provinceCnt) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline Items& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


        // provinceRate Field Functions 
        bool hasProvinceRate() const { return this->provinceRate_ != nullptr;};
        void deleteProvinceRate() { this->provinceRate_ = nullptr;};
        inline string getProvinceRate() const { DARABONBA_PTR_GET_DEFAULT(provinceRate_, "") };
        inline Items& setProvinceRate(string provinceRate) { DARABONBA_PTR_SET_VALUE(provinceRate_, provinceRate) };


      protected:
        // Total number of devices in the province.
        shared_ptr<int64_t> provinceCnt_ {};
        // Province name.
        shared_ptr<string> provinceName_ {};
        // Percentage of the total for this province.
        shared_ptr<string> provinceRate_ {};
      };

      virtual bool empty() const override { return this->allUserCnt_ == nullptr
        && this->items_ == nullptr; };
      // allUserCnt Field Functions 
      bool hasAllUserCnt() const { return this->allUserCnt_ != nullptr;};
      void deleteAllUserCnt() { this->allUserCnt_ = nullptr;};
      inline int64_t getAllUserCnt() const { DARABONBA_PTR_GET_DEFAULT(allUserCnt_, 0L) };
      inline ResultObject& setAllUserCnt(int64_t allUserCnt) { DARABONBA_PTR_SET_VALUE(allUserCnt_, allUserCnt) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ResultObject::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ResultObject::Items>) };
      inline vector<ResultObject::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ResultObject::Items>) };
      inline ResultObject& setItems(const vector<ResultObject::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ResultObject& setItems(vector<ResultObject::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // Total number of devices.
      shared_ptr<int64_t> allUserCnt_ {};
      // Data items.
      shared_ptr<vector<ResultObject::Items>> items_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setResultObject(const DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setResultObject(DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Query result.
    shared_ptr<DescribeVerifyPersonasProvinceStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
