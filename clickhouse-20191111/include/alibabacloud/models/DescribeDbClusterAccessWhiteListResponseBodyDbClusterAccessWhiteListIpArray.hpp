// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERACCESSWHITELISTIPARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERACCESSWHITELISTIPARRAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_TO_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayAttribute, DBClusterIPArrayAttribute_);
      DARABONBA_PTR_FROM_JSON(DBClusterIPArrayName, DBClusterIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray(const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray(DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& operator=(const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& operator=(DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterIPArrayAttribute_ == nullptr
        && return this->DBClusterIPArrayName_ == nullptr && return this->securityIPList_ == nullptr; };
    // DBClusterIPArrayAttribute Field Functions 
    bool hasDBClusterIPArrayAttribute() const { return this->DBClusterIPArrayAttribute_ != nullptr;};
    void deleteDBClusterIPArrayAttribute() { this->DBClusterIPArrayAttribute_ = nullptr;};
    inline string DBClusterIPArrayAttribute() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayAttribute_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& setDBClusterIPArrayAttribute(string DBClusterIPArrayAttribute) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayAttribute_, DBClusterIPArrayAttribute) };


    // DBClusterIPArrayName Field Functions 
    bool hasDBClusterIPArrayName() const { return this->DBClusterIPArrayName_ != nullptr;};
    void deleteDBClusterIPArrayName() { this->DBClusterIPArrayName_ = nullptr;};
    inline string DBClusterIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIPArrayName_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& setDBClusterIPArrayName(string DBClusterIPArrayName) { DARABONBA_PTR_SET_VALUE(DBClusterIPArrayName_, DBClusterIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // The attribute of the IP address whitelist.
    std::shared_ptr<string> DBClusterIPArrayAttribute_ = nullptr;
    // The name of the IP address whitelist.
    std::shared_ptr<string> DBClusterIPArrayName_ = nullptr;
    // The IP addresses in the IP address whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
