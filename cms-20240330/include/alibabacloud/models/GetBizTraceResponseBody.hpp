// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BizTraceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetBizTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(item, item_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(item, item_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetBizTraceResponseBody() = default ;
    GetBizTraceResponseBody(const GetBizTraceResponseBody &) = default ;
    GetBizTraceResponseBody(GetBizTraceResponseBody &&) = default ;
    GetBizTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizTraceResponseBody() = default ;
    GetBizTraceResponseBody& operator=(const GetBizTraceResponseBody &) = default ;
    GetBizTraceResponseBody& operator=(GetBizTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && this->requestId_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const BizTraceConfig & getItem() const { DARABONBA_PTR_GET_CONST(item_, BizTraceConfig) };
    inline BizTraceConfig getItem() { DARABONBA_PTR_GET(item_, BizTraceConfig) };
    inline GetBizTraceResponseBody& setItem(const BizTraceConfig & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetBizTraceResponseBody& setItem(BizTraceConfig && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<BizTraceConfig> item_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
