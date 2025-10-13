// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESFALLBACK_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTEPOLICIESFALLBACK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiRoutePoliciesFallbackDestinations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HttpApiRoutePoliciesFallback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoutePoliciesFallback& obj) { 
      DARABONBA_PTR_TO_JSON(Destinations, destinations_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoutePoliciesFallback& obj) { 
      DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    HttpApiRoutePoliciesFallback() = default ;
    HttpApiRoutePoliciesFallback(const HttpApiRoutePoliciesFallback &) = default ;
    HttpApiRoutePoliciesFallback(HttpApiRoutePoliciesFallback &&) = default ;
    HttpApiRoutePoliciesFallback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoutePoliciesFallback() = default ;
    HttpApiRoutePoliciesFallback& operator=(const HttpApiRoutePoliciesFallback &) = default ;
    HttpApiRoutePoliciesFallback& operator=(HttpApiRoutePoliciesFallback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinations_ == nullptr
        && return this->enable_ == nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<Models::HttpApiRoutePoliciesFallbackDestinations> & destinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<Models::HttpApiRoutePoliciesFallbackDestinations>) };
    inline vector<Models::HttpApiRoutePoliciesFallbackDestinations> destinations() { DARABONBA_PTR_GET(destinations_, vector<Models::HttpApiRoutePoliciesFallbackDestinations>) };
    inline HttpApiRoutePoliciesFallback& setDestinations(const vector<Models::HttpApiRoutePoliciesFallbackDestinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline HttpApiRoutePoliciesFallback& setDestinations(vector<Models::HttpApiRoutePoliciesFallbackDestinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiRoutePoliciesFallback& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<vector<Models::HttpApiRoutePoliciesFallbackDestinations>> destinations_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
