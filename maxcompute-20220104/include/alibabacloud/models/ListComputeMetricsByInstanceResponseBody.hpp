// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeMetricsByInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeMetricsByInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeMetricsByInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListComputeMetricsByInstanceResponseBody() = default ;
    ListComputeMetricsByInstanceResponseBody(const ListComputeMetricsByInstanceResponseBody &) = default ;
    ListComputeMetricsByInstanceResponseBody(ListComputeMetricsByInstanceResponseBody &&) = default ;
    ListComputeMetricsByInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeMetricsByInstanceResponseBody() = default ;
    ListComputeMetricsByInstanceResponseBody& operator=(const ListComputeMetricsByInstanceResponseBody &) = default ;
    ListComputeMetricsByInstanceResponseBody& operator=(ListComputeMetricsByInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(instanceComputeMetrics, instanceComputeMetrics_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceComputeMetrics, instanceComputeMetrics_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class InstanceComputeMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceComputeMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
          DARABONBA_PTR_TO_JSON(signature, signature_);
          DARABONBA_PTR_TO_JSON(specCode, specCode_);
          DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceComputeMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
          DARABONBA_PTR_FROM_JSON(signature, signature_);
          DARABONBA_PTR_FROM_JSON(specCode, specCode_);
          DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        InstanceComputeMetrics() = default ;
        InstanceComputeMetrics(const InstanceComputeMetrics &) = default ;
        InstanceComputeMetrics(InstanceComputeMetrics &&) = default ;
        InstanceComputeMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceComputeMetrics() = default ;
        InstanceComputeMetrics& operator=(const InstanceComputeMetrics &) = default ;
        InstanceComputeMetrics& operator=(InstanceComputeMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->jobOwner_ == nullptr && this->projectName_ == nullptr && this->signature_ == nullptr && this->specCode_ == nullptr
        && this->submitTime_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr && this->usage_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline InstanceComputeMetrics& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceComputeMetrics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobOwner Field Functions 
        bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
        void deleteJobOwner() { this->jobOwner_ = nullptr;};
        inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
        inline InstanceComputeMetrics& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline InstanceComputeMetrics& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline InstanceComputeMetrics& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        // specCode Field Functions 
        bool hasSpecCode() const { return this->specCode_ != nullptr;};
        void deleteSpecCode() { this->specCode_ = nullptr;};
        inline string getSpecCode() const { DARABONBA_PTR_GET_DEFAULT(specCode_, "") };
        inline InstanceComputeMetrics& setSpecCode(string specCode) { DARABONBA_PTR_SET_VALUE(specCode_, specCode) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline int64_t getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
        inline InstanceComputeMetrics& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline InstanceComputeMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline InstanceComputeMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline double getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
        inline InstanceComputeMetrics& setUsage(double usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> jobOwner_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> signature_ {};
        shared_ptr<string> specCode_ {};
        shared_ptr<int64_t> submitTime_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> unit_ {};
        shared_ptr<double> usage_ {};
      };

      virtual bool empty() const override { return this->instanceComputeMetrics_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // instanceComputeMetrics Field Functions 
      bool hasInstanceComputeMetrics() const { return this->instanceComputeMetrics_ != nullptr;};
      void deleteInstanceComputeMetrics() { this->instanceComputeMetrics_ = nullptr;};
      inline const vector<Data::InstanceComputeMetrics> & getInstanceComputeMetrics() const { DARABONBA_PTR_GET_CONST(instanceComputeMetrics_, vector<Data::InstanceComputeMetrics>) };
      inline vector<Data::InstanceComputeMetrics> getInstanceComputeMetrics() { DARABONBA_PTR_GET(instanceComputeMetrics_, vector<Data::InstanceComputeMetrics>) };
      inline Data& setInstanceComputeMetrics(const vector<Data::InstanceComputeMetrics> & instanceComputeMetrics) { DARABONBA_PTR_SET_VALUE(instanceComputeMetrics_, instanceComputeMetrics) };
      inline Data& setInstanceComputeMetrics(vector<Data::InstanceComputeMetrics> && instanceComputeMetrics) { DARABONBA_PTR_SET_RVALUE(instanceComputeMetrics_, instanceComputeMetrics) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::InstanceComputeMetrics>> instanceComputeMetrics_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListComputeMetricsByInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListComputeMetricsByInstanceResponseBody::Data) };
    inline ListComputeMetricsByInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListComputeMetricsByInstanceResponseBody::Data) };
    inline ListComputeMetricsByInstanceResponseBody& setData(const ListComputeMetricsByInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListComputeMetricsByInstanceResponseBody& setData(ListComputeMetricsByInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListComputeMetricsByInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListComputeMetricsByInstanceResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListComputeMetricsByInstanceResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeMetricsByInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListComputeMetricsByInstanceResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
