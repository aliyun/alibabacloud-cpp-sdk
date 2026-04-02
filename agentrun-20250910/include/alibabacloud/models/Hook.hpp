// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOOK_HPP_
#define ALIBABACLOUD_MODELS_HOOK_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Hook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Hook& obj) { 
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, Hook& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    Hook() = default ;
    Hook(const Hook &) = default ;
    Hook(Hook &&) = default ;
    Hook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Hook() = default ;
    Hook& operator=(const Hook &) = default ;
    Hook& operator=(Hook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->event_ == nullptr && this->headers_ == nullptr && this->timeout_ == nullptr
        && this->url_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline Hook& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Hook& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline Hook& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline Hook& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline Hook& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline Hook& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline Hook& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline Hook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> apiVersion_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    // This parameter is required.
    shared_ptr<string> event_ {};
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> timeout_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
