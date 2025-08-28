// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYCENGRANTRULESCBNGRANTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYCENGRANTRULESCBNGRANTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& obj) { 
      DARABONBA_PTR_TO_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
    };
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule() = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule(const DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule &) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule(DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule &&) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule() = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& operator=(const DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule &) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& operator=(DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenInstanceId_ != nullptr
        && this->cenOwnerId_ != nullptr && this->creationTime_ != nullptr; };
    // cenInstanceId Field Functions 
    bool hasCenInstanceId() const { return this->cenInstanceId_ != nullptr;};
    void deleteCenInstanceId() { this->cenInstanceId_ = nullptr;};
    inline string cenInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cenInstanceId_, "") };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& setCenInstanceId(string cenInstanceId) { DARABONBA_PTR_SET_VALUE(cenInstanceId_, cenInstanceId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


  protected:
    // The ID of the authorized CEN instance.
    std::shared_ptr<string> cenInstanceId_ = nullptr;
    // The UID of the Alibaba Cloud account to which the authorized CEN instance belongs.
    std::shared_ptr<int64_t> cenOwnerId_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
