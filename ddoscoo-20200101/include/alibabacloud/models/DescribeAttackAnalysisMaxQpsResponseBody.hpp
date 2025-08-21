// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISMAXQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISMAXQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAttackAnalysisMaxQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAnalysisMaxQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAnalysisMaxQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAttackAnalysisMaxQpsResponseBody() = default ;
    DescribeAttackAnalysisMaxQpsResponseBody(const DescribeAttackAnalysisMaxQpsResponseBody &) = default ;
    DescribeAttackAnalysisMaxQpsResponseBody(DescribeAttackAnalysisMaxQpsResponseBody &&) = default ;
    DescribeAttackAnalysisMaxQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAnalysisMaxQpsResponseBody() = default ;
    DescribeAttackAnalysisMaxQpsResponseBody& operator=(const DescribeAttackAnalysisMaxQpsResponseBody &) = default ;
    DescribeAttackAnalysisMaxQpsResponseBody& operator=(DescribeAttackAnalysisMaxQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qps_ != nullptr
        && this->requestId_ != nullptr; };
    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeAttackAnalysisMaxQpsResponseBody& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttackAnalysisMaxQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak queries per second (QPS) of DDoS attacks. Units: QPS.
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
