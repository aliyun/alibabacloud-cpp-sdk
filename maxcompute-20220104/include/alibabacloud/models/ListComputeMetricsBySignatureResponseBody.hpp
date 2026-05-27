// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYSIGNATURERESPONSEBODY_HPP_
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
  class ListComputeMetricsBySignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeMetricsBySignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeMetricsBySignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListComputeMetricsBySignatureResponseBody() = default ;
    ListComputeMetricsBySignatureResponseBody(const ListComputeMetricsBySignatureResponseBody &) = default ;
    ListComputeMetricsBySignatureResponseBody(ListComputeMetricsBySignatureResponseBody &&) = default ;
    ListComputeMetricsBySignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeMetricsBySignatureResponseBody() = default ;
    ListComputeMetricsBySignatureResponseBody& operator=(const ListComputeMetricsBySignatureResponseBody &) = default ;
    ListComputeMetricsBySignatureResponseBody& operator=(ListComputeMetricsBySignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(signatureComputeMetrics, signatureComputeMetrics_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(signatureComputeMetrics, signatureComputeMetrics_);
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
      class SignatureComputeMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SignatureComputeMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(instances, instances_);
          DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
          DARABONBA_PTR_TO_JSON(signature, signature_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, SignatureComputeMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(instances, instances_);
          DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
          DARABONBA_PTR_FROM_JSON(signature, signature_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        SignatureComputeMetrics() = default ;
        SignatureComputeMetrics(const SignatureComputeMetrics &) = default ;
        SignatureComputeMetrics(SignatureComputeMetrics &&) = default ;
        SignatureComputeMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SignatureComputeMetrics() = default ;
        SignatureComputeMetrics& operator=(const SignatureComputeMetrics &) = default ;
        SignatureComputeMetrics& operator=(SignatureComputeMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Instances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instances& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Instances& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          };
          Instances() = default ;
          Instances(const Instances &) = default ;
          Instances(Instances &&) = default ;
          Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instances() = default ;
          Instances& operator=(const Instances &) = default ;
          Instances& operator=(Instances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Instances& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Instances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<int64_t> startTime_ {};
        };

        virtual bool empty() const override { return this->instances_ == nullptr
        && this->projectNames_ == nullptr && this->signature_ == nullptr && this->unit_ == nullptr && this->usage_ == nullptr; };
        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline const vector<SignatureComputeMetrics::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<SignatureComputeMetrics::Instances>) };
        inline vector<SignatureComputeMetrics::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<SignatureComputeMetrics::Instances>) };
        inline SignatureComputeMetrics& setInstances(const vector<SignatureComputeMetrics::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
        inline SignatureComputeMetrics& setInstances(vector<SignatureComputeMetrics::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


        // projectNames Field Functions 
        bool hasProjectNames() const { return this->projectNames_ != nullptr;};
        void deleteProjectNames() { this->projectNames_ = nullptr;};
        inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
        inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
        inline SignatureComputeMetrics& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
        inline SignatureComputeMetrics& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline SignatureComputeMetrics& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline SignatureComputeMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline double getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
        inline SignatureComputeMetrics& setUsage(double usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<vector<SignatureComputeMetrics::Instances>> instances_ {};
        shared_ptr<vector<string>> projectNames_ {};
        shared_ptr<string> signature_ {};
        shared_ptr<string> unit_ {};
        shared_ptr<double> usage_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->signatureComputeMetrics_ == nullptr && this->totalCount_ == nullptr; };
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


      // signatureComputeMetrics Field Functions 
      bool hasSignatureComputeMetrics() const { return this->signatureComputeMetrics_ != nullptr;};
      void deleteSignatureComputeMetrics() { this->signatureComputeMetrics_ = nullptr;};
      inline const vector<Data::SignatureComputeMetrics> & getSignatureComputeMetrics() const { DARABONBA_PTR_GET_CONST(signatureComputeMetrics_, vector<Data::SignatureComputeMetrics>) };
      inline vector<Data::SignatureComputeMetrics> getSignatureComputeMetrics() { DARABONBA_PTR_GET(signatureComputeMetrics_, vector<Data::SignatureComputeMetrics>) };
      inline Data& setSignatureComputeMetrics(const vector<Data::SignatureComputeMetrics> & signatureComputeMetrics) { DARABONBA_PTR_SET_VALUE(signatureComputeMetrics_, signatureComputeMetrics) };
      inline Data& setSignatureComputeMetrics(vector<Data::SignatureComputeMetrics> && signatureComputeMetrics) { DARABONBA_PTR_SET_RVALUE(signatureComputeMetrics_, signatureComputeMetrics) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::SignatureComputeMetrics>> signatureComputeMetrics_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListComputeMetricsBySignatureResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListComputeMetricsBySignatureResponseBody::Data) };
    inline ListComputeMetricsBySignatureResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListComputeMetricsBySignatureResponseBody::Data) };
    inline ListComputeMetricsBySignatureResponseBody& setData(const ListComputeMetricsBySignatureResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListComputeMetricsBySignatureResponseBody& setData(ListComputeMetricsBySignatureResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListComputeMetricsBySignatureResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeMetricsBySignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListComputeMetricsBySignatureResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
