// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODYELASTICQPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODYELASTICQPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsResponseBodyElasticQps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsResponseBodyElasticQps& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsResponseBodyElasticQps& obj) { 
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
    DescribeElasticQpsResponseBodyElasticQps() = default ;
    DescribeElasticQpsResponseBodyElasticQps(const DescribeElasticQpsResponseBodyElasticQps &) = default ;
    DescribeElasticQpsResponseBodyElasticQps(DescribeElasticQpsResponseBodyElasticQps &&) = default ;
    DescribeElasticQpsResponseBodyElasticQps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsResponseBodyElasticQps() = default ;
    DescribeElasticQpsResponseBodyElasticQps& operator=(const DescribeElasticQpsResponseBodyElasticQps &) = default ;
    DescribeElasticQpsResponseBodyElasticQps& operator=(DescribeElasticQpsResponseBodyElasticQps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->maxNormalQps_ == nullptr && return this->maxQps_ == nullptr && return this->pv_ == nullptr && return this->status2_ == nullptr && return this->status3_ == nullptr
        && return this->status4_ == nullptr && return this->status5_ == nullptr && return this->ups_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // maxNormalQps Field Functions 
    bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
    void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
    inline int64_t maxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    // status2 Field Functions 
    bool hasStatus2() const { return this->status2_ != nullptr;};
    void deleteStatus2() { this->status2_ = nullptr;};
    inline int64_t status2() const { DARABONBA_PTR_GET_DEFAULT(status2_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setStatus2(int64_t status2) { DARABONBA_PTR_SET_VALUE(status2_, status2) };


    // status3 Field Functions 
    bool hasStatus3() const { return this->status3_ != nullptr;};
    void deleteStatus3() { this->status3_ = nullptr;};
    inline int64_t status3() const { DARABONBA_PTR_GET_DEFAULT(status3_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setStatus3(int64_t status3) { DARABONBA_PTR_SET_VALUE(status3_, status3) };


    // status4 Field Functions 
    bool hasStatus4() const { return this->status4_ != nullptr;};
    void deleteStatus4() { this->status4_ = nullptr;};
    inline int64_t status4() const { DARABONBA_PTR_GET_DEFAULT(status4_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setStatus4(int64_t status4) { DARABONBA_PTR_SET_VALUE(status4_, status4) };


    // status5 Field Functions 
    bool hasStatus5() const { return this->status5_ != nullptr;};
    void deleteStatus5() { this->status5_ = nullptr;};
    inline int64_t status5() const { DARABONBA_PTR_GET_DEFAULT(status5_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setStatus5(int64_t status5) { DARABONBA_PTR_SET_VALUE(status5_, status5) };


    // ups Field Functions 
    bool hasUps() const { return this->ups_ != nullptr;};
    void deleteUps() { this->ups_ = nullptr;};
    inline int64_t ups() const { DARABONBA_PTR_GET_DEFAULT(ups_, 0L) };
    inline DescribeElasticQpsResponseBodyElasticQps& setUps(int64_t ups) { DARABONBA_PTR_SET_VALUE(ups_, ups) };


  protected:
    // The index number of the returned data.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The peak QPS of the normal service.
    std::shared_ptr<int64_t> maxNormalQps_ = nullptr;
    // The peak inbound QPS.
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    // The total number of requests during the step size period.
    std::shared_ptr<int64_t> pv_ = nullptr;
    // The total number of HTTP 2xx status codes during the step size period.
    std::shared_ptr<int64_t> status2_ = nullptr;
    // The total number of HTTP 3xx status codes during the step size period.
    std::shared_ptr<int64_t> status3_ = nullptr;
    // The total number of HTTP 4xx status codes during the step size period.
    std::shared_ptr<int64_t> status4_ = nullptr;
    // The total number of HTTP 5xx status codes during the step size period.
    std::shared_ptr<int64_t> status5_ = nullptr;
    // The total number of origin requests during the step size period.
    std::shared_ptr<int64_t> ups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
