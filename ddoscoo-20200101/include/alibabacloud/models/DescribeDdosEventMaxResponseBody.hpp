// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTMAXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTMAXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventMaxResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventMaxResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(Mbps, mbps_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventMaxResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(Mbps, mbps_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventMaxResponseBody() = default ;
    DescribeDDosEventMaxResponseBody(const DescribeDDosEventMaxResponseBody &) = default ;
    DescribeDDosEventMaxResponseBody(DescribeDDosEventMaxResponseBody &&) = default ;
    DescribeDDosEventMaxResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventMaxResponseBody() = default ;
    DescribeDDosEventMaxResponseBody& operator=(const DescribeDDosEventMaxResponseBody &) = default ;
    DescribeDDosEventMaxResponseBody& operator=(DescribeDDosEventMaxResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cps_ != nullptr
        && this->mbps_ != nullptr && this->qps_ != nullptr && this->requestId_ != nullptr; };
    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribeDDosEventMaxResponseBody& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // mbps Field Functions 
    bool hasMbps() const { return this->mbps_ != nullptr;};
    void deleteMbps() { this->mbps_ = nullptr;};
    inline int64_t mbps() const { DARABONBA_PTR_GET_DEFAULT(mbps_, 0L) };
    inline DescribeDDosEventMaxResponseBody& setMbps(int64_t mbps) { DARABONBA_PTR_SET_VALUE(mbps_, mbps) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeDDosEventMaxResponseBody& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventMaxResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak of connection flood attacks. Unit: connections per seconds (CPS).
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The peak of volumetric attacks. Unit: Mbit/s.
    std::shared_ptr<int64_t> mbps_ = nullptr;
    // The peak of resource exhaustion attacks. Unit: queries per second (QPS).
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
