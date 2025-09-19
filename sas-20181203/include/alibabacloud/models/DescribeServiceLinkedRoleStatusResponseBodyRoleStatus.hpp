// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODYROLESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODYROLESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeServiceLinkedRoleStatusResponseBodyRoleStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLinkedRoleStatusResponseBodyRoleStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLinkedRoleStatusResponseBodyRoleStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus() = default ;
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus(const DescribeServiceLinkedRoleStatusResponseBodyRoleStatus &) = default ;
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus(DescribeServiceLinkedRoleStatusResponseBodyRoleStatus &&) = default ;
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLinkedRoleStatusResponseBodyRoleStatus() = default ;
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus& operator=(const DescribeServiceLinkedRoleStatusResponseBodyRoleStatus &) = default ;
    DescribeServiceLinkedRoleStatusResponseBodyRoleStatus& operator=(DescribeServiceLinkedRoleStatusResponseBodyRoleStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeServiceLinkedRoleStatusResponseBodyRoleStatus& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the service-linked role is created. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
