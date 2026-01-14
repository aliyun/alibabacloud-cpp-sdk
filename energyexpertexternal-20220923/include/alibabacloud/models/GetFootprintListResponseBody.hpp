// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetFootprintListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFootprintListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFootprintListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetFootprintListResponseBody() = default ;
    GetFootprintListResponseBody(const GetFootprintListResponseBody &) = default ;
    GetFootprintListResponseBody(GetFootprintListResponseBody &&) = default ;
    GetFootprintListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFootprintListResponseBody() = default ;
    GetFootprintListResponseBody& operator=(const GetFootprintListResponseBody &) = default ;
    GetFootprintListResponseBody& operator=(GetFootprintListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(records, records_);
        DARABONBA_PTR_TO_JSON(total, total_);
        DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(records, records_);
        DARABONBA_PTR_FROM_JSON(total, total_);
        DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(authStatus, authStatus_);
          DARABONBA_PTR_TO_JSON(checkEndTime, checkEndTime_);
          DARABONBA_PTR_TO_JSON(checkStartTime, checkStartTime_);
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(isDemoModel, isDemoModel_);
          DARABONBA_PTR_TO_JSON(lifeCycle, lifeCycle_);
          DARABONBA_PTR_TO_JSON(lifeCycleType, lifeCycleType_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(authStatus, authStatus_);
          DARABONBA_PTR_FROM_JSON(checkEndTime, checkEndTime_);
          DARABONBA_PTR_FROM_JSON(checkStartTime, checkStartTime_);
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(isDemoModel, isDemoModel_);
          DARABONBA_PTR_FROM_JSON(lifeCycle, lifeCycle_);
          DARABONBA_PTR_FROM_JSON(lifeCycleType, lifeCycleType_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->authStatus_ == nullptr && this->checkEndTime_ == nullptr && this->checkStartTime_ == nullptr && this->code_ == nullptr && this->createdBy_ == nullptr
        && this->id_ == nullptr && this->isDemoModel_ == nullptr && this->lifeCycle_ == nullptr && this->lifeCycleType_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr && this->unit_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline Records& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // authStatus Field Functions 
        bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
        void deleteAuthStatus() { this->authStatus_ = nullptr;};
        inline int64_t getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0L) };
        inline Records& setAuthStatus(int64_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


        // checkEndTime Field Functions 
        bool hasCheckEndTime() const { return this->checkEndTime_ != nullptr;};
        void deleteCheckEndTime() { this->checkEndTime_ = nullptr;};
        inline string getCheckEndTime() const { DARABONBA_PTR_GET_DEFAULT(checkEndTime_, "") };
        inline Records& setCheckEndTime(string checkEndTime) { DARABONBA_PTR_SET_VALUE(checkEndTime_, checkEndTime) };


        // checkStartTime Field Functions 
        bool hasCheckStartTime() const { return this->checkStartTime_ != nullptr;};
        void deleteCheckStartTime() { this->checkStartTime_ = nullptr;};
        inline string getCheckStartTime() const { DARABONBA_PTR_GET_DEFAULT(checkStartTime_, "") };
        inline Records& setCheckStartTime(string checkStartTime) { DARABONBA_PTR_SET_VALUE(checkStartTime_, checkStartTime) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Records& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline Records& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Records& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isDemoModel Field Functions 
        bool hasIsDemoModel() const { return this->isDemoModel_ != nullptr;};
        void deleteIsDemoModel() { this->isDemoModel_ = nullptr;};
        inline int64_t getIsDemoModel() const { DARABONBA_PTR_GET_DEFAULT(isDemoModel_, 0L) };
        inline Records& setIsDemoModel(int64_t isDemoModel) { DARABONBA_PTR_SET_VALUE(isDemoModel_, isDemoModel) };


        // lifeCycle Field Functions 
        bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
        void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
        inline string getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, "") };
        inline Records& setLifeCycle(string lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


        // lifeCycleType Field Functions 
        bool hasLifeCycleType() const { return this->lifeCycleType_ != nullptr;};
        void deleteLifeCycleType() { this->lifeCycleType_ = nullptr;};
        inline int64_t getLifeCycleType() const { DARABONBA_PTR_GET_DEFAULT(lifeCycleType_, 0L) };
        inline Records& setLifeCycleType(int64_t lifeCycleType) { DARABONBA_PTR_SET_VALUE(lifeCycleType_, lifeCycleType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Records& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Records& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // The amount of the product.
        shared_ptr<double> amount_ {};
        // Authentication status enumeration value, please refer to [link](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
        shared_ptr<int64_t> authStatus_ {};
        // Calculation end time.
        shared_ptr<string> checkEndTime_ {};
        // Calculation start time.
        shared_ptr<string> checkStartTime_ {};
        // The enterprise code.
        shared_ptr<string> code_ {};
        // The user who created it.
        shared_ptr<string> createdBy_ {};
        // The product ID.
        shared_ptr<int64_t> id_ {};
        // Indicates whether the demo model is a built-in model. A value of 1 indicates a true value and a value of 0 indicates a false value.
        shared_ptr<int64_t> isDemoModel_ {};
        // The literal expression corresponding to lifeCycleType, `From Cradle to Gate` and `From Cradle to Grave`.
        shared_ptr<string> lifeCycle_ {};
        // 1 is `From Cradle to Gate`, and 2 is `From Cradle to Grave`.
        shared_ptr<int64_t> lifeCycleType_ {};
        // The product name.
        shared_ptr<string> name_ {};
        // Product category enumeration value, please refer to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
        shared_ptr<string> type_ {};
        // Unit enumeration value. Please refer to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Data& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      // The page number.
      shared_ptr<int64_t> currentPage_ {};
      // The number of entries returned on each page.
      shared_ptr<int64_t> pageSize_ {};
      // Product Detail List.
      shared_ptr<vector<Data::Records>> records_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
      // Total Pages
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFootprintListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFootprintListResponseBody::Data) };
    inline GetFootprintListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFootprintListResponseBody::Data) };
    inline GetFootprintListResponseBody& setData(const GetFootprintListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFootprintListResponseBody& setData(GetFootprintListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFootprintListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetFootprintListResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
