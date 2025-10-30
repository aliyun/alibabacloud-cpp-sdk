// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePrivateAccessApplicationShrinkRequestPortRanges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdatePrivateAccessApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(L7Config, l7ConfigShrink_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainPrivate, l7ProxyDomainPrivate_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(L7Config, l7ConfigShrink_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainPrivate, l7ProxyDomainPrivate_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    UpdatePrivateAccessApplicationShrinkRequest() = default ;
    UpdatePrivateAccessApplicationShrinkRequest(const UpdatePrivateAccessApplicationShrinkRequest &) = default ;
    UpdatePrivateAccessApplicationShrinkRequest(UpdatePrivateAccessApplicationShrinkRequest &&) = default ;
    UpdatePrivateAccessApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessApplicationShrinkRequest() = default ;
    UpdatePrivateAccessApplicationShrinkRequest& operator=(const UpdatePrivateAccessApplicationShrinkRequest &) = default ;
    UpdatePrivateAccessApplicationShrinkRequest& operator=(UpdatePrivateAccessApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->applicationId_ == nullptr && return this->description_ == nullptr && return this->l7ConfigShrink_ == nullptr && return this->l7ProxyDomainAutomaticPrefix_ == nullptr && return this->l7ProxyDomainCustom_ == nullptr
        && return this->l7ProxyDomainPrivate_ == nullptr && return this->modifyType_ == nullptr && return this->portRanges_ == nullptr && return this->protocol_ == nullptr && return this->status_ == nullptr
        && return this->tagIds_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // l7ConfigShrink Field Functions 
    bool hasL7ConfigShrink() const { return this->l7ConfigShrink_ != nullptr;};
    void deleteL7ConfigShrink() { this->l7ConfigShrink_ = nullptr;};
    inline string l7ConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(l7ConfigShrink_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setL7ConfigShrink(string l7ConfigShrink) { DARABONBA_PTR_SET_VALUE(l7ConfigShrink_, l7ConfigShrink) };


    // l7ProxyDomainAutomaticPrefix Field Functions 
    bool hasL7ProxyDomainAutomaticPrefix() const { return this->l7ProxyDomainAutomaticPrefix_ != nullptr;};
    void deleteL7ProxyDomainAutomaticPrefix() { this->l7ProxyDomainAutomaticPrefix_ = nullptr;};
    inline string l7ProxyDomainAutomaticPrefix() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainAutomaticPrefix_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setL7ProxyDomainAutomaticPrefix(string l7ProxyDomainAutomaticPrefix) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainAutomaticPrefix_, l7ProxyDomainAutomaticPrefix) };


    // l7ProxyDomainCustom Field Functions 
    bool hasL7ProxyDomainCustom() const { return this->l7ProxyDomainCustom_ != nullptr;};
    void deleteL7ProxyDomainCustom() { this->l7ProxyDomainCustom_ = nullptr;};
    inline string l7ProxyDomainCustom() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainCustom_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setL7ProxyDomainCustom(string l7ProxyDomainCustom) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainCustom_, l7ProxyDomainCustom) };


    // l7ProxyDomainPrivate Field Functions 
    bool hasL7ProxyDomainPrivate() const { return this->l7ProxyDomainPrivate_ != nullptr;};
    void deleteL7ProxyDomainPrivate() { this->l7ProxyDomainPrivate_ = nullptr;};
    inline string l7ProxyDomainPrivate() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainPrivate_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setL7ProxyDomainPrivate(string l7ProxyDomainPrivate) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainPrivate_, l7ProxyDomainPrivate) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges> & portRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges>) };
    inline vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges> portRanges() { DARABONBA_PTR_GET(portRanges_, vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges>) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setPortRanges(const vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setPortRanges(vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrivateAccessApplicationShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdatePrivateAccessApplicationShrinkRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // The addresses of the office applications. You can enter up to 1,000 addresses of office applications.
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    // The ID of the office application. You can obtain the value by calling the following operations:
    // 
    // *   [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): queries office applications.
    // *   [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): creates an office application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The description of the office application. The value must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), hyphens (-), and spaces.
    std::shared_ptr<string> description_ = nullptr;
    // The browser access mode parameter. The parameter specifies the configurations of Layer 7 applications.
    std::shared_ptr<string> l7ConfigShrink_ = nullptr;
    // The browser access mode parameter. The parameter specifies the prefix of the domain name that the proxy gateway uses. The prefix must be 3 to 20 characters in length, and can contain lowercase letters, digits, and hyphens (-).
    std::shared_ptr<string> l7ProxyDomainAutomaticPrefix_ = nullptr;
    // The browser access mode parameter. The parameter specifies the custom domain name of the proxy gateway.
    std::shared_ptr<string> l7ProxyDomainCustom_ = nullptr;
    // 浏览器访问模式参数：私有代理域名。
    std::shared_ptr<string> l7ProxyDomainPrivate_ = nullptr;
    // The modification type of the office application. Valid values:
    // 
    // *   **Cover**: uses the values of the **Addresses**, **PortRanges**, and **TagIds** parameters to overwrite the original addresses, port ranges, and tag IDs. This is the default value.
    // *   **Append**: adds the values of the **Addresses**, **PortRanges**, and **TagIds** parameters respectively to the original addresses, port ranges, and tag IDs.
    std::shared_ptr<string> modifyType_ = nullptr;
    // The port ranges of the office applications. You can enter up to 65,535 port ranges. Multiple port ranges cannot be duplicated or overlapped.
    std::shared_ptr<vector<UpdatePrivateAccessApplicationShrinkRequestPortRanges>> portRanges_ = nullptr;
    // The protocol that is used by the office application. Valid values:
    // 
    // *   **All**
    // *   **TCP**
    // *   **UDP**
    std::shared_ptr<string> protocol_ = nullptr;
    // The status of the office application. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> status_ = nullptr;
    // The IDs of the tags for the office applications. You can add up to six custom tags to an office application.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
