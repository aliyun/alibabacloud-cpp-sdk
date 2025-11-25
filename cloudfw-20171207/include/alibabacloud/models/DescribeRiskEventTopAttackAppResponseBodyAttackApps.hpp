// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODYATTACKAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKAPPRESPONSEBODYATTACKAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackAppResponseBodyAttackApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAppResponseBodyAttackApps& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_TO_JSON(DropCnt, dropCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAppResponseBodyAttackApps& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_FROM_JSON(DropCnt, dropCnt_);
    };
    DescribeRiskEventTopAttackAppResponseBodyAttackApps() = default ;
    DescribeRiskEventTopAttackAppResponseBodyAttackApps(const DescribeRiskEventTopAttackAppResponseBodyAttackApps &) = default ;
    DescribeRiskEventTopAttackAppResponseBodyAttackApps(DescribeRiskEventTopAttackAppResponseBodyAttackApps &&) = default ;
    DescribeRiskEventTopAttackAppResponseBodyAttackApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAppResponseBodyAttackApps() = default ;
    DescribeRiskEventTopAttackAppResponseBodyAttackApps& operator=(const DescribeRiskEventTopAttackAppResponseBodyAttackApps &) = default ;
    DescribeRiskEventTopAttackAppResponseBodyAttackApps& operator=(DescribeRiskEventTopAttackAppResponseBodyAttackApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->attackCnt_ == nullptr && return this->dropCnt_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeRiskEventTopAttackAppResponseBodyAttackApps& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // attackCnt Field Functions 
    bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
    void deleteAttackCnt() { this->attackCnt_ = nullptr;};
    inline int32_t attackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0) };
    inline DescribeRiskEventTopAttackAppResponseBodyAttackApps& setAttackCnt(int32_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


    // dropCnt Field Functions 
    bool hasDropCnt() const { return this->dropCnt_ != nullptr;};
    void deleteDropCnt() { this->dropCnt_ = nullptr;};
    inline int32_t dropCnt() const { DARABONBA_PTR_GET_DEFAULT(dropCnt_, 0) };
    inline DescribeRiskEventTopAttackAppResponseBodyAttackApps& setDropCnt(int32_t dropCnt) { DARABONBA_PTR_SET_VALUE(dropCnt_, dropCnt) };


  protected:
    std::shared_ptr<string> app_ = nullptr;
    std::shared_ptr<int32_t> attackCnt_ = nullptr;
    std::shared_ptr<int32_t> dropCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
