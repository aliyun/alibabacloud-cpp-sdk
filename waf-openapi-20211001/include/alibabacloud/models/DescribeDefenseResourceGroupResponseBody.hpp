// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefenseResourceGroupResponseBodyGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseResourceGroupResponseBody() = default ;
    DescribeDefenseResourceGroupResponseBody(const DescribeDefenseResourceGroupResponseBody &) = default ;
    DescribeDefenseResourceGroupResponseBody(DescribeDefenseResourceGroupResponseBody &&) = default ;
    DescribeDefenseResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupResponseBody() = default ;
    DescribeDefenseResourceGroupResponseBody& operator=(const DescribeDefenseResourceGroupResponseBody &) = default ;
    DescribeDefenseResourceGroupResponseBody& operator=(DescribeDefenseResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr
        && return this->requestId_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const DescribeDefenseResourceGroupResponseBodyGroup & group() const { DARABONBA_PTR_GET_CONST(group_, DescribeDefenseResourceGroupResponseBodyGroup) };
    inline DescribeDefenseResourceGroupResponseBodyGroup group() { DARABONBA_PTR_GET(group_, DescribeDefenseResourceGroupResponseBodyGroup) };
    inline DescribeDefenseResourceGroupResponseBody& setGroup(const DescribeDefenseResourceGroupResponseBodyGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline DescribeDefenseResourceGroupResponseBody& setGroup(DescribeDefenseResourceGroupResponseBodyGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the protected object group.
    std::shared_ptr<DescribeDefenseResourceGroupResponseBodyGroup> group_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
