// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESRETRY_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESRETRY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePoliciesRetry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePoliciesRetry& obj) { 
      DARABONBA_PTR_TO_JSON(Attempts, attempts_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePoliciesRetry& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
      DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
    };
    HttpApiRoutePoliciesRetry() = default ;
    HttpApiRoutePoliciesRetry(const HttpApiRoutePoliciesRetry &) = default ;
    HttpApiRoutePoliciesRetry(HttpApiRoutePoliciesRetry &&) = default ;
    HttpApiRoutePoliciesRetry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePoliciesRetry() = default ;
    HttpApiRoutePoliciesRetry& operator=(const HttpApiRoutePoliciesRetry &) = default ;
    HttpApiRoutePoliciesRetry& operator=(HttpApiRoutePoliciesRetry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attempts_ == nullptr
        && return this->enable_ == nullptr && return this->httpCodes_ == nullptr && return this->retryOn_ == nullptr; };
    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int64_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
    inline HttpApiRoutePoliciesRetry& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiRoutePoliciesRetry& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // httpCodes Field Functions 
    bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
    void deleteHttpCodes() { this->httpCodes_ = nullptr;};
    inline const vector<string> & httpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
    inline vector<string> httpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
    inline HttpApiRoutePoliciesRetry& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
    inline HttpApiRoutePoliciesRetry& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


    // retryOn Field Functions 
    bool hasRetryOn() const { return this->retryOn_ != nullptr;};
    void deleteRetryOn() { this->retryOn_ = nullptr;};
    inline const vector<string> & retryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
    inline vector<string> retryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
    inline HttpApiRoutePoliciesRetry& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
    inline HttpApiRoutePoliciesRetry& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


  protected:
    std::shared_ptr<int64_t> attempts_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<vector<string>> httpCodes_ = nullptr;
    std::shared_ptr<vector<string>> retryOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
