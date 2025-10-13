// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBACLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebAclEntryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(WebAclEntries, webAclEntries_);
    };
    friend void from_json(const Darabonba::Json& j, WebAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(WebAclEntries, webAclEntries_);
    };
    WebAclConfig() = default ;
    WebAclConfig(const WebAclConfig &) = default ;
    WebAclConfig(WebAclConfig &&) = default ;
    WebAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebAclConfig() = default ;
    WebAclConfig& operator=(const WebAclConfig &) = default ;
    WebAclConfig& operator=(WebAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webAclEntries_ == nullptr; };
    // webAclEntries Field Functions 
    bool hasWebAclEntries() const { return this->webAclEntries_ != nullptr;};
    void deleteWebAclEntries() { this->webAclEntries_ = nullptr;};
    inline const vector<WebAclEntryConfig> & webAclEntries() const { DARABONBA_PTR_GET_CONST(webAclEntries_, vector<WebAclEntryConfig>) };
    inline vector<WebAclEntryConfig> webAclEntries() { DARABONBA_PTR_GET(webAclEntries_, vector<WebAclEntryConfig>) };
    inline WebAclConfig& setWebAclEntries(const vector<WebAclEntryConfig> & webAclEntries) { DARABONBA_PTR_SET_VALUE(webAclEntries_, webAclEntries) };
    inline WebAclConfig& setWebAclEntries(vector<WebAclEntryConfig> && webAclEntries) { DARABONBA_PTR_SET_RVALUE(webAclEntries_, webAclEntries) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<WebAclEntryConfig>> webAclEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
