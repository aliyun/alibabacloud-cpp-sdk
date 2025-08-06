// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERNEEDAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERNEEDAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryUserNeedAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserNeedAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NeedAuth, needAuth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserNeedAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedAuth, needAuth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserNeedAuthResponseBody() = default ;
    QueryUserNeedAuthResponseBody(const QueryUserNeedAuthResponseBody &) = default ;
    QueryUserNeedAuthResponseBody(QueryUserNeedAuthResponseBody &&) = default ;
    QueryUserNeedAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserNeedAuthResponseBody() = default ;
    QueryUserNeedAuthResponseBody& operator=(const QueryUserNeedAuthResponseBody &) = default ;
    QueryUserNeedAuthResponseBody& operator=(QueryUserNeedAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->needAuth_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // needAuth Field Functions 
    bool hasNeedAuth() const { return this->needAuth_ != nullptr;};
    void deleteNeedAuth() { this->needAuth_ = nullptr;};
    inline bool needAuth() const { DARABONBA_PTR_GET_DEFAULT(needAuth_, false) };
    inline QueryUserNeedAuthResponseBody& setNeedAuth(bool needAuth) { DARABONBA_PTR_SET_VALUE(needAuth_, needAuth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserNeedAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserNeedAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> needAuth_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
