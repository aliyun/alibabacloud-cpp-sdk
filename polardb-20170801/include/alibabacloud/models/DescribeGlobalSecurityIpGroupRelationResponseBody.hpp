// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALSECURITYIPGROUPRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalSecurityIPGroupRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalSecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalSecurityIPGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGlobalSecurityIPGroupRelationResponseBody() = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBody(const DescribeGlobalSecurityIPGroupRelationResponseBody &) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBody(DescribeGlobalSecurityIPGroupRelationResponseBody &&) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalSecurityIPGroupRelationResponseBody() = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBody& operator=(const DescribeGlobalSecurityIPGroupRelationResponseBody &) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBody& operator=(DescribeGlobalSecurityIPGroupRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->globalSecurityIPGroupRel_ == nullptr && return this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // globalSecurityIPGroupRel Field Functions 
    bool hasGlobalSecurityIPGroupRel() const { return this->globalSecurityIPGroupRel_ != nullptr;};
    void deleteGlobalSecurityIPGroupRel() { this->globalSecurityIPGroupRel_ = nullptr;};
    inline const vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel> & globalSecurityIPGroupRel() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroupRel_, vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel>) };
    inline vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel> globalSecurityIPGroupRel() { DARABONBA_PTR_GET(globalSecurityIPGroupRel_, vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel>) };
    inline DescribeGlobalSecurityIPGroupRelationResponseBody& setGlobalSecurityIPGroupRel(const vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel> & globalSecurityIPGroupRel) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };
    inline DescribeGlobalSecurityIPGroupRelationResponseBody& setGlobalSecurityIPGroupRel(vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel> && globalSecurityIPGroupRel) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The details of the global IP whitelist template.
    std::shared_ptr<vector<DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel>> globalSecurityIPGroupRel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
