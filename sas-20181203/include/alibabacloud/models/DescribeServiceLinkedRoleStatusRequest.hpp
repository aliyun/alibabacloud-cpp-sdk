// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeServiceLinkedRoleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLinkedRoleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLinkedRoleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRole, serviceLinkedRole_);
    };
    DescribeServiceLinkedRoleStatusRequest() = default ;
    DescribeServiceLinkedRoleStatusRequest(const DescribeServiceLinkedRoleStatusRequest &) = default ;
    DescribeServiceLinkedRoleStatusRequest(DescribeServiceLinkedRoleStatusRequest &&) = default ;
    DescribeServiceLinkedRoleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLinkedRoleStatusRequest() = default ;
    DescribeServiceLinkedRoleStatusRequest& operator=(const DescribeServiceLinkedRoleStatusRequest &) = default ;
    DescribeServiceLinkedRoleStatusRequest& operator=(DescribeServiceLinkedRoleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceLinkedRole_ != nullptr; };
    // serviceLinkedRole Field Functions 
    bool hasServiceLinkedRole() const { return this->serviceLinkedRole_ != nullptr;};
    void deleteServiceLinkedRole() { this->serviceLinkedRole_ = nullptr;};
    inline string serviceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRole_, "") };
    inline DescribeServiceLinkedRoleStatusRequest& setServiceLinkedRole(string serviceLinkedRole) { DARABONBA_PTR_SET_VALUE(serviceLinkedRole_, serviceLinkedRole) };


  protected:
    // The service-linked role. Default value: **AliyunServiceRoleForSas**. Valid values:
    // 
    // *   **AliyunServiceRoleForSas**: the service-linked role of Security Center. Security Center assumes this role to access the resources of other cloud services within your account.
    // *   **AliyunServiceRoleForSasCspm**: the service-linked role of Security Center-CSPM. Security Center-CSPM assumes this role to access the resources of other cloud services within your account.
    std::shared_ptr<string> serviceLinkedRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
