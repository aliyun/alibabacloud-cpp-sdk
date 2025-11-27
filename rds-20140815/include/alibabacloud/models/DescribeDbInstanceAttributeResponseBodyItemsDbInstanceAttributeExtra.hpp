// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEEXTRA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEEXTRA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSecurityPolicy, accountSecurityPolicy_);
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(RecoveryModel, recoveryModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSecurityPolicy, accountSecurityPolicy_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RecoveryModel, recoveryModel_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountSecurityPolicy_ == nullptr
        && return this->DBInstanceIds_ == nullptr && return this->recoveryModel_ == nullptr; };
    // accountSecurityPolicy Field Functions 
    bool hasAccountSecurityPolicy() const { return this->accountSecurityPolicy_ != nullptr;};
    void deleteAccountSecurityPolicy() { this->accountSecurityPolicy_ = nullptr;};
    inline string accountSecurityPolicy() const { DARABONBA_PTR_GET_DEFAULT(accountSecurityPolicy_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& setAccountSecurityPolicy(string accountSecurityPolicy) { DARABONBA_PTR_SET_VALUE(accountSecurityPolicy_, accountSecurityPolicy) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds & DBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds DBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& setDBInstanceIds(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& setDBInstanceIds(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


    // recoveryModel Field Functions 
    bool hasRecoveryModel() const { return this->recoveryModel_ != nullptr;};
    void deleteRecoveryModel() { this->recoveryModel_ = nullptr;};
    inline string recoveryModel() const { DARABONBA_PTR_GET_DEFAULT(recoveryModel_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra& setRecoveryModel(string recoveryModel) { DARABONBA_PTR_SET_VALUE(recoveryModel_, recoveryModel) };


  protected:
    // The group policy of the instance account.
    // 
    // *   MaximumPasswordAge: maximum use time
    // *   MinimumPasswordAge: minimum use time
    std::shared_ptr<string> accountSecurityPolicy_ = nullptr;
    // The instance IDs.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtraDBInstanceIds> DBInstanceIds_ = nullptr;
    // The recovery model. Valid values: Simple and Full.
    std::shared_ptr<string> recoveryModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
