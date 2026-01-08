// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopAttackTypeList, topAttackTypeList_);
      DARABONBA_PTR_TO_JSON(TotalAttackCnt, totalAttackCnt_);
      DARABONBA_PTR_TO_JSON(TotalProtectCnt, totalProtectCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopAttackTypeList, topAttackTypeList_);
      DARABONBA_PTR_FROM_JSON(TotalAttackCnt, totalAttackCnt_);
      DARABONBA_PTR_FROM_JSON(TotalProtectCnt, totalProtectCnt_);
    };
    DescribeRiskEventTopAttackTypeResponseBody() = default ;
    DescribeRiskEventTopAttackTypeResponseBody(const DescribeRiskEventTopAttackTypeResponseBody &) = default ;
    DescribeRiskEventTopAttackTypeResponseBody(DescribeRiskEventTopAttackTypeResponseBody &&) = default ;
    DescribeRiskEventTopAttackTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackTypeResponseBody() = default ;
    DescribeRiskEventTopAttackTypeResponseBody& operator=(const DescribeRiskEventTopAttackTypeResponseBody &) = default ;
    DescribeRiskEventTopAttackTypeResponseBody& operator=(DescribeRiskEventTopAttackTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopAttackTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopAttackTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(ProtectCnt, protectCnt_);
      };
      friend void from_json(const Darabonba::Json& j, TopAttackTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(ProtectCnt, protectCnt_);
      };
      TopAttackTypeList() = default ;
      TopAttackTypeList(const TopAttackTypeList &) = default ;
      TopAttackTypeList(TopAttackTypeList &&) = default ;
      TopAttackTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopAttackTypeList() = default ;
      TopAttackTypeList& operator=(const TopAttackTypeList &) = default ;
      TopAttackTypeList& operator=(TopAttackTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackCnt_ == nullptr
        && this->attackType_ == nullptr && this->protectCnt_ == nullptr; };
      // attackCnt Field Functions 
      bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
      void deleteAttackCnt() { this->attackCnt_ = nullptr;};
      inline int64_t getAttackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0L) };
      inline TopAttackTypeList& setAttackCnt(int64_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int64_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0L) };
      inline TopAttackTypeList& setAttackType(int64_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // protectCnt Field Functions 
      bool hasProtectCnt() const { return this->protectCnt_ != nullptr;};
      void deleteProtectCnt() { this->protectCnt_ = nullptr;};
      inline int64_t getProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(protectCnt_, 0L) };
      inline TopAttackTypeList& setProtectCnt(int64_t protectCnt) { DARABONBA_PTR_SET_VALUE(protectCnt_, protectCnt) };


    protected:
      shared_ptr<int64_t> attackCnt_ {};
      shared_ptr<int64_t> attackType_ {};
      shared_ptr<int64_t> protectCnt_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topAttackTypeList_ == nullptr && this->totalAttackCnt_ == nullptr && this->totalProtectCnt_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventTopAttackTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topAttackTypeList Field Functions 
    bool hasTopAttackTypeList() const { return this->topAttackTypeList_ != nullptr;};
    void deleteTopAttackTypeList() { this->topAttackTypeList_ = nullptr;};
    inline const vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList> & getTopAttackTypeList() const { DARABONBA_PTR_GET_CONST(topAttackTypeList_, vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList>) };
    inline vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList> getTopAttackTypeList() { DARABONBA_PTR_GET(topAttackTypeList_, vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList>) };
    inline DescribeRiskEventTopAttackTypeResponseBody& setTopAttackTypeList(const vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList> & topAttackTypeList) { DARABONBA_PTR_SET_VALUE(topAttackTypeList_, topAttackTypeList) };
    inline DescribeRiskEventTopAttackTypeResponseBody& setTopAttackTypeList(vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList> && topAttackTypeList) { DARABONBA_PTR_SET_RVALUE(topAttackTypeList_, topAttackTypeList) };


    // totalAttackCnt Field Functions 
    bool hasTotalAttackCnt() const { return this->totalAttackCnt_ != nullptr;};
    void deleteTotalAttackCnt() { this->totalAttackCnt_ = nullptr;};
    inline int64_t getTotalAttackCnt() const { DARABONBA_PTR_GET_DEFAULT(totalAttackCnt_, 0L) };
    inline DescribeRiskEventTopAttackTypeResponseBody& setTotalAttackCnt(int64_t totalAttackCnt) { DARABONBA_PTR_SET_VALUE(totalAttackCnt_, totalAttackCnt) };


    // totalProtectCnt Field Functions 
    bool hasTotalProtectCnt() const { return this->totalProtectCnt_ != nullptr;};
    void deleteTotalProtectCnt() { this->totalProtectCnt_ = nullptr;};
    inline int64_t getTotalProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(totalProtectCnt_, 0L) };
    inline DescribeRiskEventTopAttackTypeResponseBody& setTotalProtectCnt(int64_t totalProtectCnt) { DARABONBA_PTR_SET_VALUE(totalProtectCnt_, totalProtectCnt) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRiskEventTopAttackTypeResponseBody::TopAttackTypeList>> topAttackTypeList_ {};
    shared_ptr<int64_t> totalAttackCnt_ {};
    shared_ptr<int64_t> totalProtectCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
