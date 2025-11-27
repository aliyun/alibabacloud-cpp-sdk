// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODYDBINSTANCECLASSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODYDBINSTANCECLASSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableClassesResponseBodyDBInstanceClasses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableClassesResponseBodyDBInstanceClasses& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableClassesResponseBodyDBInstanceClasses& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
    };
    DescribeAvailableClassesResponseBodyDBInstanceClasses() = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClasses(const DescribeAvailableClassesResponseBodyDBInstanceClasses &) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClasses(DescribeAvailableClassesResponseBodyDBInstanceClasses &&) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableClassesResponseBodyDBInstanceClasses() = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClasses& operator=(const DescribeAvailableClassesResponseBodyDBInstanceClasses &) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClasses& operator=(DescribeAvailableClassesResponseBodyDBInstanceClasses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceClass_ == nullptr
        && return this->DBInstanceStorageRange_ == nullptr; };
    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeAvailableClassesResponseBodyDBInstanceClasses& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceStorageRange Field Functions 
    bool hasDBInstanceStorageRange() const { return this->DBInstanceStorageRange_ != nullptr;};
    void deleteDBInstanceStorageRange() { this->DBInstanceStorageRange_ = nullptr;};
    inline const Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange & DBInstanceStorageRange() const { DARABONBA_PTR_GET_CONST(DBInstanceStorageRange_, Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange) };
    inline Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange DBInstanceStorageRange() { DARABONBA_PTR_GET(DBInstanceStorageRange_, Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange) };
    inline DescribeAvailableClassesResponseBodyDBInstanceClasses& setDBInstanceStorageRange(const Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange & DBInstanceStorageRange) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageRange_, DBInstanceStorageRange) };
    inline DescribeAvailableClassesResponseBodyDBInstanceClasses& setDBInstanceStorageRange(Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange && DBInstanceStorageRange) { DARABONBA_PTR_SET_RVALUE(DBInstanceStorageRange_, DBInstanceStorageRange) };


  protected:
    // The instance type of the instance.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The storage capacity range that is supported for the instance.
    std::shared_ptr<Models::DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange> DBInstanceStorageRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
