// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiRoutePoliciesFallback.hpp>
#include <alibabacloud/models/HttpApiRoutePoliciesRetry.hpp>
#include <alibabacloud/models/HttpApiRoutePoliciesTimeout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    HttpApiRoutePolicies() = default ;
    HttpApiRoutePolicies(const HttpApiRoutePolicies &) = default ;
    HttpApiRoutePolicies(HttpApiRoutePolicies &&) = default ;
    HttpApiRoutePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePolicies() = default ;
    HttpApiRoutePolicies& operator=(const HttpApiRoutePolicies &) = default ;
    HttpApiRoutePolicies& operator=(HttpApiRoutePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fallback_ != nullptr
        && this->retry_ != nullptr && this->timeout_ != nullptr; };
    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline const Models::HttpApiRoutePoliciesFallback & fallback() const { DARABONBA_PTR_GET_CONST(fallback_, Models::HttpApiRoutePoliciesFallback) };
    inline Models::HttpApiRoutePoliciesFallback fallback() { DARABONBA_PTR_GET(fallback_, Models::HttpApiRoutePoliciesFallback) };
    inline HttpApiRoutePolicies& setFallback(const Models::HttpApiRoutePoliciesFallback & fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };
    inline HttpApiRoutePolicies& setFallback(Models::HttpApiRoutePoliciesFallback && fallback) { DARABONBA_PTR_SET_RVALUE(fallback_, fallback) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline const Models::HttpApiRoutePoliciesRetry & retry() const { DARABONBA_PTR_GET_CONST(retry_, Models::HttpApiRoutePoliciesRetry) };
    inline Models::HttpApiRoutePoliciesRetry retry() { DARABONBA_PTR_GET(retry_, Models::HttpApiRoutePoliciesRetry) };
    inline HttpApiRoutePolicies& setRetry(const Models::HttpApiRoutePoliciesRetry & retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };
    inline HttpApiRoutePolicies& setRetry(Models::HttpApiRoutePoliciesRetry && retry) { DARABONBA_PTR_SET_RVALUE(retry_, retry) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::HttpApiRoutePoliciesTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::HttpApiRoutePoliciesTimeout) };
    inline Models::HttpApiRoutePoliciesTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::HttpApiRoutePoliciesTimeout) };
    inline HttpApiRoutePolicies& setTimeout(const Models::HttpApiRoutePoliciesTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline HttpApiRoutePolicies& setTimeout(Models::HttpApiRoutePoliciesTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<Models::HttpApiRoutePoliciesFallback> fallback_ = nullptr;
    std::shared_ptr<Models::HttpApiRoutePoliciesRetry> retry_ = nullptr;
    std::shared_ptr<Models::HttpApiRoutePoliciesTimeout> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
