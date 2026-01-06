// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportUnReadCountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportUnReadCountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Request, requestShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportUnReadCountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Request, requestShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetReportUnReadCountShrinkRequest() = default ;
    GetReportUnReadCountShrinkRequest(const GetReportUnReadCountShrinkRequest &) = default ;
    GetReportUnReadCountShrinkRequest(GetReportUnReadCountShrinkRequest &&) = default ;
    GetReportUnReadCountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportUnReadCountShrinkRequest() = default ;
    GetReportUnReadCountShrinkRequest& operator=(const GetReportUnReadCountShrinkRequest &) = default ;
    GetReportUnReadCountShrinkRequest& operator=(GetReportUnReadCountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestShrink_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // requestShrink Field Functions 
    bool hasRequestShrink() const { return this->requestShrink_ != nullptr;};
    void deleteRequestShrink() { this->requestShrink_ = nullptr;};
    inline string getRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(requestShrink_, "") };
    inline GetReportUnReadCountShrinkRequest& setRequestShrink(string requestShrink) { DARABONBA_PTR_SET_VALUE(requestShrink_, requestShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetReportUnReadCountShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<string> requestShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
