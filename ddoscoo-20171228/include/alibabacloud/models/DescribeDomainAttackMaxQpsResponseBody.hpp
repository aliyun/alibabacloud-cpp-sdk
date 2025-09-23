// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKMAXQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKMAXQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainAttackMaxQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAttackMaxQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAttackMaxQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainAttackMaxQpsResponseBody() = default ;
    DescribeDomainAttackMaxQpsResponseBody(const DescribeDomainAttackMaxQpsResponseBody &) = default ;
    DescribeDomainAttackMaxQpsResponseBody(DescribeDomainAttackMaxQpsResponseBody &&) = default ;
    DescribeDomainAttackMaxQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAttackMaxQpsResponseBody() = default ;
    DescribeDomainAttackMaxQpsResponseBody& operator=(const DescribeDomainAttackMaxQpsResponseBody &) = default ;
    DescribeDomainAttackMaxQpsResponseBody& operator=(DescribeDomainAttackMaxQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qps_ != nullptr
        && this->requestId_ != nullptr; };
    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline string qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
    inline DescribeDomainAttackMaxQpsResponseBody& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAttackMaxQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> qps_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
