// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODYTOPIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODYTOPIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortCcAttackTopIPResponseBodyTopIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortCcAttackTopIPResponseBodyTopIp& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortCcAttackTopIPResponseBodyTopIp& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    DescribePortCcAttackTopIPResponseBodyTopIp() = default ;
    DescribePortCcAttackTopIPResponseBodyTopIp(const DescribePortCcAttackTopIPResponseBodyTopIp &) = default ;
    DescribePortCcAttackTopIPResponseBodyTopIp(DescribePortCcAttackTopIPResponseBodyTopIp &&) = default ;
    DescribePortCcAttackTopIPResponseBodyTopIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortCcAttackTopIPResponseBodyTopIp() = default ;
    DescribePortCcAttackTopIPResponseBodyTopIp& operator=(const DescribePortCcAttackTopIPResponseBodyTopIp &) = default ;
    DescribePortCcAttackTopIPResponseBodyTopIp& operator=(DescribePortCcAttackTopIPResponseBodyTopIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->pv_ == nullptr && return this->srcIp_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline DescribePortCcAttackTopIPResponseBodyTopIp& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribePortCcAttackTopIPResponseBodyTopIp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribePortCcAttackTopIPResponseBodyTopIp& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The code of the location from which the attack is initiated. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
    std::shared_ptr<string> areaId_ = nullptr;
    // The number of attacks from the IP address.
    std::shared_ptr<int64_t> pv_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
