// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEndpointsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
    };
    DescribeDBInstanceEndpointsResponseBodyData() = default ;
    DescribeDBInstanceEndpointsResponseBodyData(const DescribeDBInstanceEndpointsResponseBodyData &) = default ;
    DescribeDBInstanceEndpointsResponseBodyData(DescribeDBInstanceEndpointsResponseBodyData &&) = default ;
    DescribeDBInstanceEndpointsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointsResponseBodyData() = default ;
    DescribeDBInstanceEndpointsResponseBodyData& operator=(const DescribeDBInstanceEndpointsResponseBodyData &) = default ;
    DescribeDBInstanceEndpointsResponseBodyData& operator=(DescribeDBInstanceEndpointsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceEndpoints_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->ipVersion_ == nullptr; };
    // DBInstanceEndpoints Field Functions 
    bool hasDBInstanceEndpoints() const { return this->DBInstanceEndpoints_ != nullptr;};
    void deleteDBInstanceEndpoints() { this->DBInstanceEndpoints_ = nullptr;};
    inline const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints & DBInstanceEndpoints() const { DARABONBA_PTR_GET_CONST(DBInstanceEndpoints_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints) };
    inline Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints DBInstanceEndpoints() { DARABONBA_PTR_GET(DBInstanceEndpoints_, Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints) };
    inline DescribeDBInstanceEndpointsResponseBodyData& setDBInstanceEndpoints(const Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints & DBInstanceEndpoints) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpoints_, DBInstanceEndpoints) };
    inline DescribeDBInstanceEndpointsResponseBodyData& setDBInstanceEndpoints(Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints && DBInstanceEndpoints) { DARABONBA_PTR_SET_RVALUE(DBInstanceEndpoints_, DBInstanceEndpoints) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceEndpointsResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeDBInstanceEndpointsResponseBodyData& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


  protected:
    // The information of the endpoints of the instance.
    std::shared_ptr<Models::DescribeDBInstanceEndpointsResponseBodyDataDBInstanceEndpoints> DBInstanceEndpoints_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The version of the IP protocol. Valid values:
    // 
    // *   **ipv4**
    // *   **ipv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
