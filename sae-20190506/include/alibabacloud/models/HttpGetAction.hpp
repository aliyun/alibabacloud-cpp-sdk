// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPGETACTION_HPP_
#define ALIBABACLOUD_MODELS_HTTPGETACTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HTTPHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HTTPGetAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HTTPGetAction& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
    };
    friend void from_json(const Darabonba::Json& j, HTTPGetAction& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
    };
    HTTPGetAction() = default ;
    HTTPGetAction(const HTTPGetAction &) = default ;
    HTTPGetAction(HTTPGetAction &&) = default ;
    HTTPGetAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HTTPGetAction() = default ;
    HTTPGetAction& operator=(const HTTPGetAction &) = default ;
    HTTPGetAction& operator=(HTTPGetAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && this->httpHeaders_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->scheme_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline HTTPGetAction& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpHeaders Field Functions 
    bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
    void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
    inline const vector<HTTPHeader> & getHttpHeaders() const { DARABONBA_PTR_GET_CONST(httpHeaders_, vector<HTTPHeader>) };
    inline vector<HTTPHeader> getHttpHeaders() { DARABONBA_PTR_GET(httpHeaders_, vector<HTTPHeader>) };
    inline HTTPGetAction& setHttpHeaders(const vector<HTTPHeader> & httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };
    inline HTTPGetAction& setHttpHeaders(vector<HTTPHeader> && httpHeaders) { DARABONBA_PTR_SET_RVALUE(httpHeaders_, httpHeaders) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline HTTPGetAction& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline HTTPGetAction& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline HTTPGetAction& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


  protected:
    shared_ptr<string> host_ {};
    shared_ptr<vector<HTTPHeader>> httpHeaders_ {};
    shared_ptr<string> path_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> scheme_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
