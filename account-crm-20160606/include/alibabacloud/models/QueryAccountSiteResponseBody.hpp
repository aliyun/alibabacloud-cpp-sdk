// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountSiteResponseBody() = default ;
    QueryAccountSiteResponseBody(const QueryAccountSiteResponseBody &) = default ;
    QueryAccountSiteResponseBody(QueryAccountSiteResponseBody &&) = default ;
    QueryAccountSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountSiteResponseBody() = default ;
    QueryAccountSiteResponseBody& operator=(const QueryAccountSiteResponseBody &) = default ;
    QueryAccountSiteResponseBody& operator=(QueryAccountSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->requestId_ == nullptr && this->site_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAccountSiteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline QueryAccountSiteResponseBody& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountSiteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> site_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
