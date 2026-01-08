// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODY_HPP_
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
  class DescribeRiskEventTopAttackAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskEventTopAttackAppResponseBody() = default ;
    DescribeRiskEventTopAttackAppResponseBody(const DescribeRiskEventTopAttackAppResponseBody &) = default ;
    DescribeRiskEventTopAttackAppResponseBody(DescribeRiskEventTopAttackAppResponseBody &&) = default ;
    DescribeRiskEventTopAttackAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAppResponseBody() = default ;
    DescribeRiskEventTopAttackAppResponseBody& operator=(const DescribeRiskEventTopAttackAppResponseBody &) = default ;
    DescribeRiskEventTopAttackAppResponseBody& operator=(DescribeRiskEventTopAttackAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackApps& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_TO_JSON(DropCnt, dropCnt_);
      };
      friend void from_json(const Darabonba::Json& j, AttackApps& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_FROM_JSON(DropCnt, dropCnt_);
      };
      AttackApps() = default ;
      AttackApps(const AttackApps &) = default ;
      AttackApps(AttackApps &&) = default ;
      AttackApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackApps() = default ;
      AttackApps& operator=(const AttackApps &) = default ;
      AttackApps& operator=(AttackApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->app_ == nullptr
        && this->attackCnt_ == nullptr && this->dropCnt_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline AttackApps& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // attackCnt Field Functions 
      bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
      void deleteAttackCnt() { this->attackCnt_ = nullptr;};
      inline int32_t getAttackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0) };
      inline AttackApps& setAttackCnt(int32_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


      // dropCnt Field Functions 
      bool hasDropCnt() const { return this->dropCnt_ != nullptr;};
      void deleteDropCnt() { this->dropCnt_ = nullptr;};
      inline int32_t getDropCnt() const { DARABONBA_PTR_GET_DEFAULT(dropCnt_, 0) };
      inline AttackApps& setDropCnt(int32_t dropCnt) { DARABONBA_PTR_SET_VALUE(dropCnt_, dropCnt) };


    protected:
      shared_ptr<string> app_ {};
      shared_ptr<int32_t> attackCnt_ {};
      shared_ptr<int32_t> dropCnt_ {};
    };

    virtual bool empty() const override { return this->attackApps_ == nullptr
        && this->requestId_ == nullptr; };
    // attackApps Field Functions 
    bool hasAttackApps() const { return this->attackApps_ != nullptr;};
    void deleteAttackApps() { this->attackApps_ = nullptr;};
    inline const vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps> & getAttackApps() const { DARABONBA_PTR_GET_CONST(attackApps_, vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps>) };
    inline vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps> getAttackApps() { DARABONBA_PTR_GET(attackApps_, vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps>) };
    inline DescribeRiskEventTopAttackAppResponseBody& setAttackApps(const vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps> & attackApps) { DARABONBA_PTR_SET_VALUE(attackApps_, attackApps) };
    inline DescribeRiskEventTopAttackAppResponseBody& setAttackApps(vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps> && attackApps) { DARABONBA_PTR_SET_RVALUE(attackApps_, attackApps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventTopAttackAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRiskEventTopAttackAppResponseBody::AttackApps>> attackApps_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
