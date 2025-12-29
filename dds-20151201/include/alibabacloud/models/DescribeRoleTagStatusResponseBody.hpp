// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLETAGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLETAGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeRoleTagStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoleTagStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleTagStatus, roleTagStatus_);
      DARABONBA_ANY_TO_JSON(ShardRoleTagStatus, shardRoleTagStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoleTagStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleTagStatus, roleTagStatus_);
      DARABONBA_ANY_FROM_JSON(ShardRoleTagStatus, shardRoleTagStatus_);
    };
    DescribeRoleTagStatusResponseBody() = default ;
    DescribeRoleTagStatusResponseBody(const DescribeRoleTagStatusResponseBody &) = default ;
    DescribeRoleTagStatusResponseBody(DescribeRoleTagStatusResponseBody &&) = default ;
    DescribeRoleTagStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoleTagStatusResponseBody() = default ;
    DescribeRoleTagStatusResponseBody& operator=(const DescribeRoleTagStatusResponseBody &) = default ;
    DescribeRoleTagStatusResponseBody& operator=(DescribeRoleTagStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->roleTagStatus_ == nullptr && this->shardRoleTagStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRoleTagStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleTagStatus Field Functions 
    bool hasRoleTagStatus() const { return this->roleTagStatus_ != nullptr;};
    void deleteRoleTagStatus() { this->roleTagStatus_ = nullptr;};
    inline string getRoleTagStatus() const { DARABONBA_PTR_GET_DEFAULT(roleTagStatus_, "") };
    inline DescribeRoleTagStatusResponseBody& setRoleTagStatus(string roleTagStatus) { DARABONBA_PTR_SET_VALUE(roleTagStatus_, roleTagStatus) };


    // shardRoleTagStatus Field Functions 
    bool hasShardRoleTagStatus() const { return this->shardRoleTagStatus_ != nullptr;};
    void deleteShardRoleTagStatus() { this->shardRoleTagStatus_ = nullptr;};
    inline     const Darabonba::Json & getShardRoleTagStatus() const { DARABONBA_GET(shardRoleTagStatus_) };
    Darabonba::Json & getShardRoleTagStatus() { DARABONBA_GET(shardRoleTagStatus_) };
    inline DescribeRoleTagStatusResponseBody& setShardRoleTagStatus(const Darabonba::Json & shardRoleTagStatus) { DARABONBA_SET_VALUE(shardRoleTagStatus_, shardRoleTagStatus) };
    inline DescribeRoleTagStatusResponseBody& setShardRoleTagStatus(Darabonba::Json && shardRoleTagStatus) { DARABONBA_SET_RVALUE(shardRoleTagStatus_, shardRoleTagStatus) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> roleTagStatus_ {};
    Darabonba::Json shardRoleTagStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
