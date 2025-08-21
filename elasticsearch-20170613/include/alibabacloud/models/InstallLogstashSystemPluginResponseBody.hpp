// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLLOGSTASHSYSTEMPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLLOGSTASHSYSTEMPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InstallLogstashSystemPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallLogstashSystemPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, InstallLogstashSystemPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    InstallLogstashSystemPluginResponseBody() = default ;
    InstallLogstashSystemPluginResponseBody(const InstallLogstashSystemPluginResponseBody &) = default ;
    InstallLogstashSystemPluginResponseBody(InstallLogstashSystemPluginResponseBody &&) = default ;
    InstallLogstashSystemPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallLogstashSystemPluginResponseBody() = default ;
    InstallLogstashSystemPluginResponseBody& operator=(const InstallLogstashSystemPluginResponseBody &) = default ;
    InstallLogstashSystemPluginResponseBody& operator=(InstallLogstashSystemPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallLogstashSystemPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<string> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<string>) };
    inline vector<string> result() { DARABONBA_PTR_GET(result_, vector<string>) };
    inline InstallLogstashSystemPluginResponseBody& setResult(const vector<string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline InstallLogstashSystemPluginResponseBody& setResult(vector<string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
