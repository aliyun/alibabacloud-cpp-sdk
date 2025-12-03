// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VServerGroups, VServerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VServerGroups, VServerGroups_);
    };
    DescribeVServerGroupsResponseBody() = default ;
    DescribeVServerGroupsResponseBody(const DescribeVServerGroupsResponseBody &) = default ;
    DescribeVServerGroupsResponseBody(DescribeVServerGroupsResponseBody &&) = default ;
    DescribeVServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBody() = default ;
    DescribeVServerGroupsResponseBody& operator=(const DescribeVServerGroupsResponseBody &) = default ;
    DescribeVServerGroupsResponseBody& operator=(DescribeVServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->VServerGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const DescribeVServerGroupsResponseBodyVServerGroups & VServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, DescribeVServerGroupsResponseBodyVServerGroups) };
    inline DescribeVServerGroupsResponseBodyVServerGroups VServerGroups() { DARABONBA_PTR_GET(VServerGroups_, DescribeVServerGroupsResponseBodyVServerGroups) };
    inline DescribeVServerGroupsResponseBody& setVServerGroups(const DescribeVServerGroupsResponseBodyVServerGroups & VServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, VServerGroups) };
    inline DescribeVServerGroupsResponseBody& setVServerGroups(DescribeVServerGroupsResponseBodyVServerGroups && VServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, VServerGroups) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The backend servers.
    std::shared_ptr<DescribeVServerGroupsResponseBodyVServerGroups> VServerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
