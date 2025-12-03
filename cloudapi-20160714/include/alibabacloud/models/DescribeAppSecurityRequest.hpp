// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppSecurityRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppSecurityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppSecurityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppSecurityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAppSecurityRequest() = default ;
    DescribeAppSecurityRequest(const DescribeAppSecurityRequest &) = default ;
    DescribeAppSecurityRequest(DescribeAppSecurityRequest &&) = default ;
    DescribeAppSecurityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppSecurityRequest() = default ;
    DescribeAppSecurityRequest& operator=(const DescribeAppSecurityRequest &) = default ;
    DescribeAppSecurityRequest& operator=(DescribeAppSecurityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAppSecurityRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeAppSecurityRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAppSecurityRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAppSecurityRequestTag>) };
    inline vector<DescribeAppSecurityRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeAppSecurityRequestTag>) };
    inline DescribeAppSecurityRequest& setTag(const vector<DescribeAppSecurityRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAppSecurityRequest& setTag(vector<DescribeAppSecurityRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the app.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<DescribeAppSecurityRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
