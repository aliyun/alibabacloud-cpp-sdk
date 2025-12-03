// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAccessesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccurateQuery, accurateQuery_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccurateQuery, accurateQuery_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVpcAccessesRequest() = default ;
    DescribeVpcAccessesRequest(const DescribeVpcAccessesRequest &) = default ;
    DescribeVpcAccessesRequest(DescribeVpcAccessesRequest &&) = default ;
    DescribeVpcAccessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesRequest() = default ;
    DescribeVpcAccessesRequest& operator=(const DescribeVpcAccessesRequest &) = default ;
    DescribeVpcAccessesRequest& operator=(DescribeVpcAccessesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accurateQuery_ == nullptr
        && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->port_ == nullptr
        && return this->securityToken_ == nullptr && return this->tag_ == nullptr && return this->vpcAccessId_ == nullptr && return this->vpcId_ == nullptr; };
    // accurateQuery Field Functions 
    bool hasAccurateQuery() const { return this->accurateQuery_ != nullptr;};
    void deleteAccurateQuery() { this->accurateQuery_ = nullptr;};
    inline bool accurateQuery() const { DARABONBA_PTR_GET_DEFAULT(accurateQuery_, false) };
    inline DescribeVpcAccessesRequest& setAccurateQuery(bool accurateQuery) { DARABONBA_PTR_SET_VALUE(accurateQuery_, accurateQuery) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpcAccessesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpcAccessesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpcAccessesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpcAccessesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeVpcAccessesRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeVpcAccessesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeVpcAccessesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeVpcAccessesRequestTag>) };
    inline vector<DescribeVpcAccessesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeVpcAccessesRequestTag>) };
    inline DescribeVpcAccessesRequest& setTag(const vector<DescribeVpcAccessesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVpcAccessesRequest& setTag(vector<DescribeVpcAccessesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcAccessId Field Functions 
    bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
    void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
    inline string vpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
    inline DescribeVpcAccessesRequest& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcAccessesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Whether to conduct precise queries
    std::shared_ptr<bool> accurateQuery_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the authorization. The name must be unique.
    std::shared_ptr<string> name_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The service port.
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The port number.
    std::shared_ptr<vector<DescribeVpcAccessesRequestTag>> tag_ = nullptr;
    // The ID of the VPC authorization.
    std::shared_ptr<string> vpcAccessId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
