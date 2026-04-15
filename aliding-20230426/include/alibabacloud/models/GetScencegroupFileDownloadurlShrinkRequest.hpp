// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScencegroupFileDownloadurlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScencegroupFileDownloadurlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadCode, downloadCode_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetScencegroupFileDownloadurlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadCode, downloadCode_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetScencegroupFileDownloadurlShrinkRequest() = default ;
    GetScencegroupFileDownloadurlShrinkRequest(const GetScencegroupFileDownloadurlShrinkRequest &) = default ;
    GetScencegroupFileDownloadurlShrinkRequest(GetScencegroupFileDownloadurlShrinkRequest &&) = default ;
    GetScencegroupFileDownloadurlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScencegroupFileDownloadurlShrinkRequest() = default ;
    GetScencegroupFileDownloadurlShrinkRequest& operator=(const GetScencegroupFileDownloadurlShrinkRequest &) = default ;
    GetScencegroupFileDownloadurlShrinkRequest& operator=(GetScencegroupFileDownloadurlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadCode_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // downloadCode Field Functions 
    bool hasDownloadCode() const { return this->downloadCode_ != nullptr;};
    void deleteDownloadCode() { this->downloadCode_ = nullptr;};
    inline string getDownloadCode() const { DARABONBA_PTR_GET_DEFAULT(downloadCode_, "") };
    inline GetScencegroupFileDownloadurlShrinkRequest& setDownloadCode(string downloadCode) { DARABONBA_PTR_SET_VALUE(downloadCode_, downloadCode) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetScencegroupFileDownloadurlShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> downloadCode_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
