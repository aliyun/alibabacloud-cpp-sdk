// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPERESPONSEBODYTOPATTACKTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPERESPONSEBODYTOPATTACKTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(ProtectCnt, protectCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(ProtectCnt, protectCnt_);
    };
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList() = default ;
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList(const DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList &) = default ;
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList(DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList &&) = default ;
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList() = default ;
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& operator=(const DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList &) = default ;
    DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& operator=(DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackCnt_ == nullptr
        && return this->attackType_ == nullptr && return this->protectCnt_ == nullptr; };
    // attackCnt Field Functions 
    bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
    void deleteAttackCnt() { this->attackCnt_ = nullptr;};
    inline int64_t attackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0L) };
    inline DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& setAttackCnt(int64_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int64_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0L) };
    inline DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& setAttackType(int64_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // protectCnt Field Functions 
    bool hasProtectCnt() const { return this->protectCnt_ != nullptr;};
    void deleteProtectCnt() { this->protectCnt_ = nullptr;};
    inline int64_t protectCnt() const { DARABONBA_PTR_GET_DEFAULT(protectCnt_, 0L) };
    inline DescribeRiskEventTopAttackTypeResponseBodyTopAttackTypeList& setProtectCnt(int64_t protectCnt) { DARABONBA_PTR_SET_VALUE(protectCnt_, protectCnt) };


  protected:
    std::shared_ptr<int64_t> attackCnt_ = nullptr;
    std::shared_ptr<int64_t> attackType_ = nullptr;
    std::shared_ptr<int64_t> protectCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
