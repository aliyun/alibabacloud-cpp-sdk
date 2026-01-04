// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticQpsResponseBody() = default ;
    DescribeElasticQpsResponseBody(const DescribeElasticQpsResponseBody &) = default ;
    DescribeElasticQpsResponseBody(DescribeElasticQpsResponseBody &&) = default ;
    DescribeElasticQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsResponseBody() = default ;
    DescribeElasticQpsResponseBody& operator=(const DescribeElasticQpsResponseBody &) = default ;
    DescribeElasticQpsResponseBody& operator=(DescribeElasticQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticQps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticQps& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(MaxNormalQps, maxNormalQps_);
        DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
        DARABONBA_PTR_TO_JSON(Status2, status2_);
        DARABONBA_PTR_TO_JSON(Status3, status3_);
        DARABONBA_PTR_TO_JSON(Status4, status4_);
        DARABONBA_PTR_TO_JSON(Status5, status5_);
        DARABONBA_PTR_TO_JSON(Ups, ups_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticQps& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(MaxNormalQps, maxNormalQps_);
        DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
        DARABONBA_PTR_FROM_JSON(Status2, status2_);
        DARABONBA_PTR_FROM_JSON(Status3, status3_);
        DARABONBA_PTR_FROM_JSON(Status4, status4_);
        DARABONBA_PTR_FROM_JSON(Status5, status5_);
        DARABONBA_PTR_FROM_JSON(Ups, ups_);
      };
      ElasticQps() = default ;
      ElasticQps(const ElasticQps &) = default ;
      ElasticQps(ElasticQps &&) = default ;
      ElasticQps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticQps() = default ;
      ElasticQps& operator=(const ElasticQps &) = default ;
      ElasticQps& operator=(ElasticQps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->maxNormalQps_ == nullptr && this->maxQps_ == nullptr && this->pv_ == nullptr && this->status2_ == nullptr && this->status3_ == nullptr
        && this->status4_ == nullptr && this->status5_ == nullptr && this->ups_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline ElasticQps& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // maxNormalQps Field Functions 
      bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
      void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
      inline int64_t getMaxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
      inline ElasticQps& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline ElasticQps& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline ElasticQps& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


      // status2 Field Functions 
      bool hasStatus2() const { return this->status2_ != nullptr;};
      void deleteStatus2() { this->status2_ = nullptr;};
      inline int64_t getStatus2() const { DARABONBA_PTR_GET_DEFAULT(status2_, 0L) };
      inline ElasticQps& setStatus2(int64_t status2) { DARABONBA_PTR_SET_VALUE(status2_, status2) };


      // status3 Field Functions 
      bool hasStatus3() const { return this->status3_ != nullptr;};
      void deleteStatus3() { this->status3_ = nullptr;};
      inline int64_t getStatus3() const { DARABONBA_PTR_GET_DEFAULT(status3_, 0L) };
      inline ElasticQps& setStatus3(int64_t status3) { DARABONBA_PTR_SET_VALUE(status3_, status3) };


      // status4 Field Functions 
      bool hasStatus4() const { return this->status4_ != nullptr;};
      void deleteStatus4() { this->status4_ = nullptr;};
      inline int64_t getStatus4() const { DARABONBA_PTR_GET_DEFAULT(status4_, 0L) };
      inline ElasticQps& setStatus4(int64_t status4) { DARABONBA_PTR_SET_VALUE(status4_, status4) };


      // status5 Field Functions 
      bool hasStatus5() const { return this->status5_ != nullptr;};
      void deleteStatus5() { this->status5_ = nullptr;};
      inline int64_t getStatus5() const { DARABONBA_PTR_GET_DEFAULT(status5_, 0L) };
      inline ElasticQps& setStatus5(int64_t status5) { DARABONBA_PTR_SET_VALUE(status5_, status5) };


      // ups Field Functions 
      bool hasUps() const { return this->ups_ != nullptr;};
      void deleteUps() { this->ups_ = nullptr;};
      inline int64_t getUps() const { DARABONBA_PTR_GET_DEFAULT(ups_, 0L) };
      inline ElasticQps& setUps(int64_t ups) { DARABONBA_PTR_SET_VALUE(ups_, ups) };


    protected:
      // The index number of the returned data.
      shared_ptr<int64_t> index_ {};
      // The peak QPS of the normal service.
      shared_ptr<int64_t> maxNormalQps_ {};
      // The peak inbound QPS.
      shared_ptr<int64_t> maxQps_ {};
      // The total number of requests during the step size period.
      shared_ptr<int64_t> pv_ {};
      // The total number of HTTP 2xx status codes during the step size period.
      shared_ptr<int64_t> status2_ {};
      // The total number of HTTP 3xx status codes during the step size period.
      shared_ptr<int64_t> status3_ {};
      // The total number of HTTP 4xx status codes during the step size period.
      shared_ptr<int64_t> status4_ {};
      // The total number of HTTP 5xx status codes during the step size period.
      shared_ptr<int64_t> status5_ {};
      // The total number of origin requests during the step size period.
      shared_ptr<int64_t> ups_ {};
    };

    virtual bool empty() const override { return this->elasticQps_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticQps Field Functions 
    bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
    void deleteElasticQps() { this->elasticQps_ = nullptr;};
    inline const vector<DescribeElasticQpsResponseBody::ElasticQps> & getElasticQps() const { DARABONBA_PTR_GET_CONST(elasticQps_, vector<DescribeElasticQpsResponseBody::ElasticQps>) };
    inline vector<DescribeElasticQpsResponseBody::ElasticQps> getElasticQps() { DARABONBA_PTR_GET(elasticQps_, vector<DescribeElasticQpsResponseBody::ElasticQps>) };
    inline DescribeElasticQpsResponseBody& setElasticQps(const vector<DescribeElasticQpsResponseBody::ElasticQps> & elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };
    inline DescribeElasticQpsResponseBody& setElasticQps(vector<DescribeElasticQpsResponseBody::ElasticQps> && elasticQps) { DARABONBA_PTR_SET_RVALUE(elasticQps_, elasticQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the burstable QPS.
    shared_ptr<vector<DescribeElasticQpsResponseBody::ElasticQps>> elasticQps_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
