// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODYITEMSDBINSTANCEIPARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODYITEMSDBINSTANCEIPARRAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayAttribute, DBInstanceIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
    };
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() = default ;
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray(const DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray &) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray(DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray &&) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() = default ;
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& operator=(const DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray &) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& operator=(DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceIPArrayAttribute_ == nullptr
        && return this->DBInstanceIPArrayName_ == nullptr && return this->securityIPList_ == nullptr && return this->securityIPType_ == nullptr; };
    // DBInstanceIPArrayAttribute Field Functions 
    bool hasDBInstanceIPArrayAttribute() const { return this->DBInstanceIPArrayAttribute_ != nullptr;};
    void deleteDBInstanceIPArrayAttribute() { this->DBInstanceIPArrayAttribute_ = nullptr;};
    inline string DBInstanceIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayAttribute_, "") };
    inline DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& setDBInstanceIPArrayAttribute(string DBInstanceIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayAttribute_, DBInstanceIPArrayAttribute) };


    // DBInstanceIPArrayName Field Functions 
    bool hasDBInstanceIPArrayName() const { return this->DBInstanceIPArrayName_ != nullptr;};
    void deleteDBInstanceIPArrayName() { this->DBInstanceIPArrayName_ = nullptr;};
    inline string DBInstanceIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayName_, "") };
    inline DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& setDBInstanceIPArrayName(string DBInstanceIPArrayName) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayName_, DBInstanceIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string securityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


  protected:
    // The attribute of the IP address whitelist. By default, this parameter is empty.
    // 
    // >  A whitelist with the hidden attribute does not appear in the console. Such IP address whitelists are used to access Alibaba Cloud services, such as Data Transmission Service (DTS).
    std::shared_ptr<string> DBInstanceIPArrayAttribute_ = nullptr;
    // The name of the IP address whitelist.
    std::shared_ptr<string> DBInstanceIPArrayName_ = nullptr;
    // The IP addresses in the IP address whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The type of the IP address.
    std::shared_ptr<string> securityIPType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
