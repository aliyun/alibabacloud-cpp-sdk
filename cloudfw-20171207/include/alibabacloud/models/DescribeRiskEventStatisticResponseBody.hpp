// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackAppCnt, attackAppCnt_);
      DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_TO_JSON(AttackIpCnt, attackIpCnt_);
      DARABONBA_PTR_TO_JSON(DropCnt, dropCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackAppCnt, attackAppCnt_);
      DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_FROM_JSON(AttackIpCnt, attackIpCnt_);
      DARABONBA_PTR_FROM_JSON(DropCnt, dropCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskEventStatisticResponseBody() = default ;
    DescribeRiskEventStatisticResponseBody(const DescribeRiskEventStatisticResponseBody &) = default ;
    DescribeRiskEventStatisticResponseBody(DescribeRiskEventStatisticResponseBody &&) = default ;
    DescribeRiskEventStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventStatisticResponseBody() = default ;
    DescribeRiskEventStatisticResponseBody& operator=(const DescribeRiskEventStatisticResponseBody &) = default ;
    DescribeRiskEventStatisticResponseBody& operator=(DescribeRiskEventStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackAppCnt_ == nullptr
        && this->attackCnt_ == nullptr && this->attackIpCnt_ == nullptr && this->dropCnt_ == nullptr && this->requestId_ == nullptr; };
    // attackAppCnt Field Functions 
    bool hasAttackAppCnt() const { return this->attackAppCnt_ != nullptr;};
    void deleteAttackAppCnt() { this->attackAppCnt_ = nullptr;};
    inline int32_t getAttackAppCnt() const { DARABONBA_PTR_GET_DEFAULT(attackAppCnt_, 0) };
    inline DescribeRiskEventStatisticResponseBody& setAttackAppCnt(int32_t attackAppCnt) { DARABONBA_PTR_SET_VALUE(attackAppCnt_, attackAppCnt) };


    // attackCnt Field Functions 
    bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
    void deleteAttackCnt() { this->attackCnt_ = nullptr;};
    inline int32_t getAttackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0) };
    inline DescribeRiskEventStatisticResponseBody& setAttackCnt(int32_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


    // attackIpCnt Field Functions 
    bool hasAttackIpCnt() const { return this->attackIpCnt_ != nullptr;};
    void deleteAttackIpCnt() { this->attackIpCnt_ = nullptr;};
    inline int32_t getAttackIpCnt() const { DARABONBA_PTR_GET_DEFAULT(attackIpCnt_, 0) };
    inline DescribeRiskEventStatisticResponseBody& setAttackIpCnt(int32_t attackIpCnt) { DARABONBA_PTR_SET_VALUE(attackIpCnt_, attackIpCnt) };


    // dropCnt Field Functions 
    bool hasDropCnt() const { return this->dropCnt_ != nullptr;};
    void deleteDropCnt() { this->dropCnt_ = nullptr;};
    inline int32_t getDropCnt() const { DARABONBA_PTR_GET_DEFAULT(dropCnt_, 0) };
    inline DescribeRiskEventStatisticResponseBody& setDropCnt(int32_t dropCnt) { DARABONBA_PTR_SET_VALUE(dropCnt_, dropCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> attackAppCnt_ {};
    shared_ptr<int32_t> attackCnt_ {};
    shared_ptr<int32_t> attackIpCnt_ {};
    shared_ptr<int32_t> dropCnt_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
