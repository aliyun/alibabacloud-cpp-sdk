// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecProtectionResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecProtectionResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecProtectionResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecProtectionResourcesResponseBody() = default ;
    DescribeApisecProtectionResourcesResponseBody(const DescribeApisecProtectionResourcesResponseBody &) = default ;
    DescribeApisecProtectionResourcesResponseBody(DescribeApisecProtectionResourcesResponseBody &&) = default ;
    DescribeApisecProtectionResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecProtectionResourcesResponseBody() = default ;
    DescribeApisecProtectionResourcesResponseBody& operator=(const DescribeApisecProtectionResourcesResponseBody &) = default ;
    DescribeApisecProtectionResourcesResponseBody& operator=(DescribeApisecProtectionResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApisecStatus, apisecStatus_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApisecStatus, apisecStatus_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
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
      virtual bool empty() const override { return this->apisecStatus_ == nullptr
        && this->reportStatus_ == nullptr && this->resource_ == nullptr && this->traceStatus_ == nullptr; };
      // apisecStatus Field Functions 
      bool hasApisecStatus() const { return this->apisecStatus_ != nullptr;};
      void deleteApisecStatus() { this->apisecStatus_ = nullptr;};
      inline int64_t getApisecStatus() const { DARABONBA_PTR_GET_DEFAULT(apisecStatus_, 0L) };
      inline Data& setApisecStatus(int64_t apisecStatus) { DARABONBA_PTR_SET_VALUE(apisecStatus_, apisecStatus) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline int64_t getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0L) };
      inline Data& setReportStatus(int64_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Data& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // traceStatus Field Functions 
      bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
      void deleteTraceStatus() { this->traceStatus_ = nullptr;};
      inline int64_t getTraceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, 0L) };
      inline Data& setTraceStatus(int64_t traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


    protected:
      // The switch of the API security module.
      shared_ptr<int64_t> apisecStatus_ {};
      // The switch of the compliance check feature.
      shared_ptr<int64_t> reportStatus_ {};
      // The protected object.
      shared_ptr<string> resource_ {};
      // The switch of the tracing and auditing feature.
      shared_ptr<int64_t> traceStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecProtectionResourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecProtectionResourcesResponseBody::Data>) };
    inline vector<DescribeApisecProtectionResourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecProtectionResourcesResponseBody::Data>) };
    inline DescribeApisecProtectionResourcesResponseBody& setData(const vector<DescribeApisecProtectionResourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecProtectionResourcesResponseBody& setData(vector<DescribeApisecProtectionResourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecProtectionResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecProtectionResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The protected objects.
    shared_ptr<vector<DescribeApisecProtectionResourcesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
