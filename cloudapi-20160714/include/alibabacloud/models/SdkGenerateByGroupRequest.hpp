// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDKGENERATEBYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDKGENERATEBYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SdkGenerateByGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdkGenerateByGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SdkGenerateByGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SdkGenerateByGroupRequest() = default ;
    SdkGenerateByGroupRequest(const SdkGenerateByGroupRequest &) = default ;
    SdkGenerateByGroupRequest(SdkGenerateByGroupRequest &&) = default ;
    SdkGenerateByGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdkGenerateByGroupRequest() = default ;
    SdkGenerateByGroupRequest& operator=(const SdkGenerateByGroupRequest &) = default ;
    SdkGenerateByGroupRequest& operator=(SdkGenerateByGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->language_ == nullptr && return this->securityToken_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SdkGenerateByGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SdkGenerateByGroupRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SdkGenerateByGroupRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
