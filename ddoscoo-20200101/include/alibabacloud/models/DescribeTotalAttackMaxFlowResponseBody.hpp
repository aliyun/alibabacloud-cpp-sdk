// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOTALATTACKMAXFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOTALATTACKMAXFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTotalAttackMaxFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTotalAttackMaxFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTotalAttackMaxFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTotalAttackMaxFlowResponseBody() = default ;
    DescribeTotalAttackMaxFlowResponseBody(const DescribeTotalAttackMaxFlowResponseBody &) = default ;
    DescribeTotalAttackMaxFlowResponseBody(DescribeTotalAttackMaxFlowResponseBody &&) = default ;
    DescribeTotalAttackMaxFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTotalAttackMaxFlowResponseBody() = default ;
    DescribeTotalAttackMaxFlowResponseBody& operator=(const DescribeTotalAttackMaxFlowResponseBody &) = default ;
    DescribeTotalAttackMaxFlowResponseBody& operator=(DescribeTotalAttackMaxFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->pps_ != nullptr && this->requestId_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeTotalAttackMaxFlowResponseBody& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeTotalAttackMaxFlowResponseBody& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTotalAttackMaxFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak bandwidth of attack traffic. Unit: bit/s.
    std::shared_ptr<int64_t> bps_ = nullptr;
    // The peak packet rate of attack traffic. Unit: packets per second (pps).
    std::shared_ptr<int64_t> pps_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
