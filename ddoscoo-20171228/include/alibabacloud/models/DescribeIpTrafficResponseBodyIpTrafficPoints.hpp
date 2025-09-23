// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODYIPTRAFFICPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODYIPTRAFFICPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeIpTrafficResponseBodyIpTrafficPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpTrafficResponseBodyIpTrafficPoints& obj) { 
      DARABONBA_PTR_TO_JSON(ActConns, actConns_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(InactConns, inactConns_);
      DARABONBA_PTR_TO_JSON(MaxInbps, maxInbps_);
      DARABONBA_PTR_TO_JSON(MaxOutbps, maxOutbps_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpTrafficResponseBodyIpTrafficPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(InactConns, inactConns_);
      DARABONBA_PTR_FROM_JSON(MaxInbps, maxInbps_);
      DARABONBA_PTR_FROM_JSON(MaxOutbps, maxOutbps_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeIpTrafficResponseBodyIpTrafficPoints() = default ;
    DescribeIpTrafficResponseBodyIpTrafficPoints(const DescribeIpTrafficResponseBodyIpTrafficPoints &) = default ;
    DescribeIpTrafficResponseBodyIpTrafficPoints(DescribeIpTrafficResponseBodyIpTrafficPoints &&) = default ;
    DescribeIpTrafficResponseBodyIpTrafficPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpTrafficResponseBodyIpTrafficPoints() = default ;
    DescribeIpTrafficResponseBodyIpTrafficPoints& operator=(const DescribeIpTrafficResponseBodyIpTrafficPoints &) = default ;
    DescribeIpTrafficResponseBodyIpTrafficPoints& operator=(DescribeIpTrafficResponseBodyIpTrafficPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actConns_ != nullptr
        && this->cps_ != nullptr && this->inactConns_ != nullptr && this->maxInbps_ != nullptr && this->maxOutbps_ != nullptr && this->time_ != nullptr; };
    // actConns Field Functions 
    bool hasActConns() const { return this->actConns_ != nullptr;};
    void deleteActConns() { this->actConns_ = nullptr;};
    inline int32_t actConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, 0) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setActConns(int32_t actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // inactConns Field Functions 
    bool hasInactConns() const { return this->inactConns_ != nullptr;};
    void deleteInactConns() { this->inactConns_ = nullptr;};
    inline int32_t inactConns() const { DARABONBA_PTR_GET_DEFAULT(inactConns_, 0) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setInactConns(int32_t inactConns) { DARABONBA_PTR_SET_VALUE(inactConns_, inactConns) };


    // maxInbps Field Functions 
    bool hasMaxInbps() const { return this->maxInbps_ != nullptr;};
    void deleteMaxInbps() { this->maxInbps_ = nullptr;};
    inline int64_t maxInbps() const { DARABONBA_PTR_GET_DEFAULT(maxInbps_, 0L) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setMaxInbps(int64_t maxInbps) { DARABONBA_PTR_SET_VALUE(maxInbps_, maxInbps) };


    // maxOutbps Field Functions 
    bool hasMaxOutbps() const { return this->maxOutbps_ != nullptr;};
    void deleteMaxOutbps() { this->maxOutbps_ = nullptr;};
    inline int64_t maxOutbps() const { DARABONBA_PTR_GET_DEFAULT(maxOutbps_, 0L) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setMaxOutbps(int64_t maxOutbps) { DARABONBA_PTR_SET_VALUE(maxOutbps_, maxOutbps) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeIpTrafficResponseBodyIpTrafficPoints& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> actConns_ = nullptr;
    std::shared_ptr<int32_t> cps_ = nullptr;
    std::shared_ptr<int32_t> inactConns_ = nullptr;
    std::shared_ptr<int64_t> maxInbps_ = nullptr;
    std::shared_ptr<int64_t> maxOutbps_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
