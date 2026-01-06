// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEBYURLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEBYURLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeByUrlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeByUrlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, optionShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeByUrlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetNodeByUrlShrinkRequest() = default ;
    GetNodeByUrlShrinkRequest(const GetNodeByUrlShrinkRequest &) = default ;
    GetNodeByUrlShrinkRequest(GetNodeByUrlShrinkRequest &&) = default ;
    GetNodeByUrlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeByUrlShrinkRequest() = default ;
    GetNodeByUrlShrinkRequest& operator=(const GetNodeByUrlShrinkRequest &) = default ;
    GetNodeByUrlShrinkRequest& operator=(GetNodeByUrlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optionShrink_ == nullptr
        && this->tenantContextShrink_ == nullptr && this->url_ == nullptr; };
    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string getOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline GetNodeByUrlShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetNodeByUrlShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetNodeByUrlShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> optionShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
