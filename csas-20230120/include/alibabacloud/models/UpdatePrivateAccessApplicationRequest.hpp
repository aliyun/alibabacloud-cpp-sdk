// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddressGroup.hpp>
#include <alibabacloud/models/PAL7Config.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdatePrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressGroups, addressGroups_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(L7Config, l7Config_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainPrivate, l7ProxyDomainPrivate_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressGroups, addressGroups_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(L7Config, l7Config_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainPrivate, l7ProxyDomainPrivate_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    UpdatePrivateAccessApplicationRequest() = default ;
    UpdatePrivateAccessApplicationRequest(const UpdatePrivateAccessApplicationRequest &) = default ;
    UpdatePrivateAccessApplicationRequest(UpdatePrivateAccessApplicationRequest &&) = default ;
    UpdatePrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessApplicationRequest() = default ;
    UpdatePrivateAccessApplicationRequest& operator=(const UpdatePrivateAccessApplicationRequest &) = default ;
    UpdatePrivateAccessApplicationRequest& operator=(UpdatePrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortRanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(End, end_);
      };
      friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(End, end_);
      };
      PortRanges() = default ;
      PortRanges(const PortRanges &) = default ;
      PortRanges(PortRanges &&) = default ;
      PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRanges() = default ;
      PortRanges& operator=(const PortRanges &) = default ;
      PortRanges& operator=(PortRanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline PortRanges& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline PortRanges& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    protected:
      // The start port. The start port must be less than or equal to the end port.
      shared_ptr<int32_t> begin_ {};
      // The end port. The end port must be greater than or equal to the start port.
      shared_ptr<int32_t> end_ {};
    };

    virtual bool empty() const override { return this->addressGroups_ == nullptr
        && this->addresses_ == nullptr && this->applicationId_ == nullptr && this->configMode_ == nullptr && this->description_ == nullptr && this->l7Config_ == nullptr
        && this->l7ProxyDomainAutomaticPrefix_ == nullptr && this->l7ProxyDomainCustom_ == nullptr && this->l7ProxyDomainPrivate_ == nullptr && this->modifyType_ == nullptr && this->name_ == nullptr
        && this->portRanges_ == nullptr && this->protocol_ == nullptr && this->status_ == nullptr && this->tagIds_ == nullptr; };
    // addressGroups Field Functions 
    bool hasAddressGroups() const { return this->addressGroups_ != nullptr;};
    void deleteAddressGroups() { this->addressGroups_ = nullptr;};
    inline const vector<AddressGroup> & getAddressGroups() const { DARABONBA_PTR_GET_CONST(addressGroups_, vector<AddressGroup>) };
    inline vector<AddressGroup> getAddressGroups() { DARABONBA_PTR_GET(addressGroups_, vector<AddressGroup>) };
    inline UpdatePrivateAccessApplicationRequest& setAddressGroups(const vector<AddressGroup> & addressGroups) { DARABONBA_PTR_SET_VALUE(addressGroups_, addressGroups) };
    inline UpdatePrivateAccessApplicationRequest& setAddressGroups(vector<AddressGroup> && addressGroups) { DARABONBA_PTR_SET_RVALUE(addressGroups_, addressGroups) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline UpdatePrivateAccessApplicationRequest& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline UpdatePrivateAccessApplicationRequest& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePrivateAccessApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // configMode Field Functions 
    bool hasConfigMode() const { return this->configMode_ != nullptr;};
    void deleteConfigMode() { this->configMode_ = nullptr;};
    inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
    inline UpdatePrivateAccessApplicationRequest& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePrivateAccessApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // l7Config Field Functions 
    bool hasL7Config() const { return this->l7Config_ != nullptr;};
    void deleteL7Config() { this->l7Config_ = nullptr;};
    inline const PAL7Config & getL7Config() const { DARABONBA_PTR_GET_CONST(l7Config_, PAL7Config) };
    inline PAL7Config getL7Config() { DARABONBA_PTR_GET(l7Config_, PAL7Config) };
    inline UpdatePrivateAccessApplicationRequest& setL7Config(const PAL7Config & l7Config) { DARABONBA_PTR_SET_VALUE(l7Config_, l7Config) };
    inline UpdatePrivateAccessApplicationRequest& setL7Config(PAL7Config && l7Config) { DARABONBA_PTR_SET_RVALUE(l7Config_, l7Config) };


    // l7ProxyDomainAutomaticPrefix Field Functions 
    bool hasL7ProxyDomainAutomaticPrefix() const { return this->l7ProxyDomainAutomaticPrefix_ != nullptr;};
    void deleteL7ProxyDomainAutomaticPrefix() { this->l7ProxyDomainAutomaticPrefix_ = nullptr;};
    inline string getL7ProxyDomainAutomaticPrefix() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainAutomaticPrefix_, "") };
    inline UpdatePrivateAccessApplicationRequest& setL7ProxyDomainAutomaticPrefix(string l7ProxyDomainAutomaticPrefix) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainAutomaticPrefix_, l7ProxyDomainAutomaticPrefix) };


    // l7ProxyDomainCustom Field Functions 
    bool hasL7ProxyDomainCustom() const { return this->l7ProxyDomainCustom_ != nullptr;};
    void deleteL7ProxyDomainCustom() { this->l7ProxyDomainCustom_ = nullptr;};
    inline string getL7ProxyDomainCustom() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainCustom_, "") };
    inline UpdatePrivateAccessApplicationRequest& setL7ProxyDomainCustom(string l7ProxyDomainCustom) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainCustom_, l7ProxyDomainCustom) };


    // l7ProxyDomainPrivate Field Functions 
    bool hasL7ProxyDomainPrivate() const { return this->l7ProxyDomainPrivate_ != nullptr;};
    void deleteL7ProxyDomainPrivate() { this->l7ProxyDomainPrivate_ = nullptr;};
    inline string getL7ProxyDomainPrivate() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainPrivate_, "") };
    inline UpdatePrivateAccessApplicationRequest& setL7ProxyDomainPrivate(string l7ProxyDomainPrivate) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainPrivate_, l7ProxyDomainPrivate) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdatePrivateAccessApplicationRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePrivateAccessApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<UpdatePrivateAccessApplicationRequest::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<UpdatePrivateAccessApplicationRequest::PortRanges>) };
    inline vector<UpdatePrivateAccessApplicationRequest::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<UpdatePrivateAccessApplicationRequest::PortRanges>) };
    inline UpdatePrivateAccessApplicationRequest& setPortRanges(const vector<UpdatePrivateAccessApplicationRequest::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline UpdatePrivateAccessApplicationRequest& setPortRanges(vector<UpdatePrivateAccessApplicationRequest::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdatePrivateAccessApplicationRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrivateAccessApplicationRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline UpdatePrivateAccessApplicationRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdatePrivateAccessApplicationRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    shared_ptr<vector<AddressGroup>> addressGroups_ {};
    // The addresses of the office applications. You can enter up to 1,000 addresses of office applications.
    shared_ptr<vector<string>> addresses_ {};
    // The ID of the office application. You can obtain the value by calling the following operations:
    // 
    // *   [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): queries office applications.
    // *   [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): creates an office application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> configMode_ {};
    // The description of the office application. The value must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), hyphens (-), and spaces.
    shared_ptr<string> description_ {};
    // The browser access mode parameter. The parameter specifies the configurations of Layer 7 applications.
    shared_ptr<PAL7Config> l7Config_ {};
    // The browser access mode parameter. The parameter specifies the prefix of the domain name that the proxy gateway uses. The prefix must be 3 to 20 characters in length, and can contain lowercase letters, digits, and hyphens (-).
    shared_ptr<string> l7ProxyDomainAutomaticPrefix_ {};
    // The browser access mode parameter. The parameter specifies the custom domain name of the proxy gateway.
    shared_ptr<string> l7ProxyDomainCustom_ {};
    // 浏览器访问模式参数：私有代理域名。
    shared_ptr<string> l7ProxyDomainPrivate_ {};
    // The modification type of the office application. Valid values:
    // 
    // *   **Cover**: uses the values of the **Addresses**, **PortRanges**, and **TagIds** parameters to overwrite the original addresses, port ranges, and tag IDs. This is the default value.
    // *   **Append**: adds the values of the **Addresses**, **PortRanges**, and **TagIds** parameters respectively to the original addresses, port ranges, and tag IDs.
    shared_ptr<string> modifyType_ {};
    shared_ptr<string> name_ {};
    // The port ranges of the office applications. You can enter up to 65,535 port ranges. Multiple port ranges cannot be duplicated or overlapped.
    shared_ptr<vector<UpdatePrivateAccessApplicationRequest::PortRanges>> portRanges_ {};
    // The protocol that is used by the office application. Valid values:
    // 
    // *   **All**
    // *   **TCP**
    // *   **UDP**
    shared_ptr<string> protocol_ {};
    // The status of the office application. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    shared_ptr<string> status_ {};
    // The IDs of the tags for the office applications. You can add up to six custom tags to an office application.
    shared_ptr<vector<string>> tagIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
