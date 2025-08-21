// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGSLIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIGSLIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(CpsEnable, cpsEnable_);
      DARABONBA_PTR_TO_JSON(CpsMode, cpsMode_);
      DARABONBA_PTR_TO_JSON(Maxconn, maxconn_);
      DARABONBA_PTR_TO_JSON(MaxconnEnable, maxconnEnable_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(CpsEnable, cpsEnable_);
      DARABONBA_PTR_FROM_JSON(CpsMode, cpsMode_);
      DARABONBA_PTR_FROM_JSON(Maxconn, maxconn_);
      DARABONBA_PTR_FROM_JSON(MaxconnEnable, maxconnEnable_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->cps_ != nullptr && this->cpsEnable_ != nullptr && this->cpsMode_ != nullptr && this->maxconn_ != nullptr && this->maxconnEnable_ != nullptr
        && this->pps_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // cpsEnable Field Functions 
    bool hasCpsEnable() const { return this->cpsEnable_ != nullptr;};
    void deleteCpsEnable() { this->cpsEnable_ = nullptr;};
    inline int32_t cpsEnable() const { DARABONBA_PTR_GET_DEFAULT(cpsEnable_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setCpsEnable(int32_t cpsEnable) { DARABONBA_PTR_SET_VALUE(cpsEnable_, cpsEnable) };


    // cpsMode Field Functions 
    bool hasCpsMode() const { return this->cpsMode_ != nullptr;};
    void deleteCpsMode() { this->cpsMode_ = nullptr;};
    inline int32_t cpsMode() const { DARABONBA_PTR_GET_DEFAULT(cpsMode_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setCpsMode(int32_t cpsMode) { DARABONBA_PTR_SET_VALUE(cpsMode_, cpsMode) };


    // maxconn Field Functions 
    bool hasMaxconn() const { return this->maxconn_ != nullptr;};
    void deleteMaxconn() { this->maxconn_ = nullptr;};
    inline int32_t maxconn() const { DARABONBA_PTR_GET_DEFAULT(maxconn_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setMaxconn(int32_t maxconn) { DARABONBA_PTR_SET_VALUE(maxconn_, maxconn) };


    // maxconnEnable Field Functions 
    bool hasMaxconnEnable() const { return this->maxconnEnable_ != nullptr;};
    void deleteMaxconnEnable() { this->maxconnEnable_ = nullptr;};
    inline int32_t maxconnEnable() const { DARABONBA_PTR_GET_DEFAULT(maxconnEnable_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setMaxconnEnable(int32_t maxconnEnable) { DARABONBA_PTR_SET_VALUE(maxconnEnable_, maxconnEnable) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


  protected:
    // The bandwidth limit for a source IP address. Valid values: **1024** to **268435456**. Unit: bytes/s. Default value: **0**, which indicates that the bandwidth for a source IP address is unlimited.
    std::shared_ptr<int64_t> bps_ = nullptr;
    // The maximum number of new connections per second that can be initiated from a source IP address. Valid values: **1** to **500000**.
    std::shared_ptr<int32_t> cps_ = nullptr;
    // The status of the Source New Connection Rate Limit switch. Valid values:
    // 
    // *   **0**: The switch is turned off.
    // *   **1**: The switch is turned on.
    std::shared_ptr<int32_t> cpsEnable_ = nullptr;
    // The mode of the Source New Connection Rate Limit switch. Valid values:
    // 
    // *   **1**: the manual mode
    // *   **2**: the automatic mode
    std::shared_ptr<int32_t> cpsMode_ = nullptr;
    // The maximum number of concurrent connections initiated from a source IP address. Valid values: **1** to **500000**.
    std::shared_ptr<int32_t> maxconn_ = nullptr;
    // The status of the Source Concurrent Connection Rate Limit switch. Valid values:
    // 
    // *   **0**: The switch is turned off.
    // *   **1**: The switch is turned on.
    std::shared_ptr<int32_t> maxconnEnable_ = nullptr;
    // The packets per second (pps) limit for a source IP address. Valid values: **1** to **100000**. Unit: packets/s. Default value: **0**, which indicates that the pps for a source IP address is unlimited.
    std::shared_ptr<int64_t> pps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
