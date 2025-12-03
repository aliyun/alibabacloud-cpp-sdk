// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTagAuthorization, enableTagAuthorization_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTagAuthorization, enableTagAuthorization_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTagAuthorization_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->language_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // enableTagAuthorization Field Functions 
    bool hasEnableTagAuthorization() const { return this->enableTagAuthorization_ != nullptr;};
    void deleteEnableTagAuthorization() { this->enableTagAuthorization_ = nullptr;};
    inline bool enableTagAuthorization() const { DARABONBA_PTR_GET_DEFAULT(enableTagAuthorization_, false) };
    inline DescribeInstancesRequest& setEnableTagAuthorization(bool enableTagAuthorization) { DARABONBA_PTR_SET_VALUE(enableTagAuthorization_, enableTagAuthorization) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeInstancesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInstancesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInstancesRequestTag>) };
    inline vector<DescribeInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeInstancesRequestTag>) };
    inline DescribeInstancesRequest& setTag(const vector<DescribeInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInstancesRequest& setTag(vector<DescribeInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether tag authorization is enabled.
    std::shared_ptr<bool> enableTagAuthorization_ = nullptr;
    // The instance ID. If you do not specify this parameter, all instances are returned.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    // The language in which you want the description of the system policy to be returned. Valid values:
    // 
    // *   en: English
    // *   zh: Chinese
    // *   ja: Japanese
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag that is bound to the instance.
    std::shared_ptr<vector<DescribeInstancesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
