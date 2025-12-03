// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsByApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsByApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsByApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeTrafficControlsByApiRequest() = default ;
    DescribeTrafficControlsByApiRequest(const DescribeTrafficControlsByApiRequest &) = default ;
    DescribeTrafficControlsByApiRequest(DescribeTrafficControlsByApiRequest &&) = default ;
    DescribeTrafficControlsByApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsByApiRequest() = default ;
    DescribeTrafficControlsByApiRequest& operator=(const DescribeTrafficControlsByApiRequest &) = default ;
    DescribeTrafficControlsByApiRequest& operator=(DescribeTrafficControlsByApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->groupId_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeTrafficControlsByApiRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeTrafficControlsByApiRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeTrafficControlsByApiRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeTrafficControlsByApiRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The ID of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The ID of the group to which the API to be queried belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The runtime environment of the API. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
