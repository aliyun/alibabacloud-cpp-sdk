// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODYITEMSIPARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODYITEMSIPARRAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterAccessWhiteListResponseBodyItemsIPArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAccessWhiteListResponseBodyItemsIPArray& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAccessWhiteListResponseBodyItemsIPArray& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray() = default ;
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray(const DescribeClusterAccessWhiteListResponseBodyItemsIPArray &) = default ;
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray(DescribeClusterAccessWhiteListResponseBodyItemsIPArray &&) = default ;
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAccessWhiteListResponseBodyItemsIPArray() = default ;
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray& operator=(const DescribeClusterAccessWhiteListResponseBodyItemsIPArray &) = default ;
    DescribeClusterAccessWhiteListResponseBodyItemsIPArray& operator=(DescribeClusterAccessWhiteListResponseBodyItemsIPArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterIPArrayAttribute_ != nullptr
        && this->DBClusterIPArrayName_ != nullptr && this->securityIPList_ != nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string DBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline DescribeClusterAccessWhiteListResponseBodyItemsIPArray& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string DBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline DescribeClusterAccessWhiteListResponseBodyItemsIPArray& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeClusterAccessWhiteListResponseBodyItemsIPArray& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // The attribute of the IP address whitelist.
    // 
    // >  The IP address whitelists that have the **hidden** attribute are not displayed in the console. These IP address whitelists are used to access services such as Data Transmission Service (DTS) and PolarDB.
    std::shared_ptr<string> DBClusterIPArrayAttribute_ = nullptr;
    // The name of the IP address whitelist.
    // 
    // Each cluster supports up to 50 IP address whitelists.
    std::shared_ptr<string> DBClusterIPArrayName_ = nullptr;
    // The IP addresses in the IP address whitelist. Up to 500 IP addresses can be returned. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> securityIPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
