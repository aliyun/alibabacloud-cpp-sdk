// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMSDBCLUSTERIPARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMSDBCLUSTERIPARRAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIps, securityIps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIps, securityIps_);
    };
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray(const DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray(DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray &&) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& operator=(const DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& operator=(DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterIPArrayAttribute_ != nullptr
        && this->DBClusterIPArrayName_ != nullptr && this->securityIps_ != nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string DBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string DBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // securityIps Field Functions 
    bool hasSecurityIps() const { return this->securityIps_ != nullptr;};
    void deleteSecurityIps() { this->securityIps_ = nullptr;};
    inline string securityIps() const { DARABONBA_PTR_GET_DEFAULT(securityIps_, "") };
    inline DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray& setSecurityIps(string securityIps) { DARABONBA_PTR_SET_VALUE(securityIps_, securityIps) };


  protected:
    // The attributes of the IP whitelist group. Set this parameter to **hidden** to hide the IP whitelist group in the console.
    // 
    // > *   The IP whitelist group that has appeared in the console cannot be hidden.
    // > *   This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> DBClusterIPArrayAttribute_ = nullptr;
    // The name of the IP whitelist group. The group name must be 2 to 120 characters in length and consists of lowercase letters and digits. It must start with a letter, and end with a letter or a digit.
    // 
    // *   If the specified whitelist group name does not exist, the whitelist group is created.
    // *   If the specified whitelist group name exists, the whitelist group is modified.
    // *   If you do not specify this parameter, the default group is modified.
    // 
    // > *   You can create a maximum of 50 IP whitelist groups for a cluster.
    // >*   This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> DBClusterIPArrayName_ = nullptr;
    // The IP addresses or Classless Inter-Domain Routing (CIDR) blocks in the IP whitelist group. You can add 1,000 IP addresses or CIDR blocks to all the IP whitelist groups. Separate multiple IP addresses with commas (,). The following two formats are supported:
    // 
    // *   IP addresses. Example: 10.23.12.24.
    // *   CIDR blocks. Example: 10.23.12.24/24. 24 indicates the length of the prefix of the CIDR block. The length is the range of 1 to 32.
    // 
    // >  This parameter can be specified only when the **WhiteListType** parameter is set to **IP**.
    std::shared_ptr<string> securityIps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
