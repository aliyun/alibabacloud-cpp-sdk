// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANHITTAGSHITTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANHITTAGSHITTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag(DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag-based matching rule. Valid values:
    // 
    // *   **EQUAL**: Both the tag key and tag value are matched.
    // *   **NOT**: The tag key is matched and the tag value is not matched.
    std::shared_ptr<string> operator_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
