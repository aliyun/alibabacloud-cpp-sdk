// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribePluginTemplatesRequest() = default ;
    DescribePluginTemplatesRequest(const DescribePluginTemplatesRequest &) = default ;
    DescribePluginTemplatesRequest(DescribePluginTemplatesRequest &&) = default ;
    DescribePluginTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginTemplatesRequest() = default ;
    DescribePluginTemplatesRequest& operator=(const DescribePluginTemplatesRequest &) = default ;
    DescribePluginTemplatesRequest& operator=(DescribePluginTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && return this->pluginName_ == nullptr && return this->securityToken_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribePluginTemplatesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline DescribePluginTemplatesRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribePluginTemplatesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The language that is used to return the description of the system policy. Valid values:
    // 
    // *   en: English
    // *   zh-CN: Chinese.
    // *   ja: Japanese
    std::shared_ptr<string> language_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> pluginName_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
