// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogstashPluginsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListLogstashPluginsResponseBody() = default ;
    ListLogstashPluginsResponseBody(const ListLogstashPluginsResponseBody &) = default ;
    ListLogstashPluginsResponseBody(ListLogstashPluginsResponseBody &&) = default ;
    ListLogstashPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashPluginsResponseBody() = default ;
    ListLogstashPluginsResponseBody& operator=(const ListLogstashPluginsResponseBody &) = default ;
    ListLogstashPluginsResponseBody& operator=(ListLogstashPluginsResponseBody &&) = default ;
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
    inline ListLogstashPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListLogstashPluginsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListLogstashPluginsResponseBodyResult>) };
    inline vector<ListLogstashPluginsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListLogstashPluginsResponseBodyResult>) };
    inline ListLogstashPluginsResponseBody& setResult(const vector<ListLogstashPluginsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListLogstashPluginsResponseBody& setResult(vector<ListLogstashPluginsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The address of the documentation for the plug-in.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the plug-in. Valid values:
    // 
    // *   INSTALLED: Installed
    // *   UNINSTALLED: Not installed
    // *   INSTALLING: The instance is being installed.
    // *   UNINSTALLING: The instance is being uninstalled.
    // *   UPGRADING: The backup gateway is being upgraded.
    // *   FAILED: Installation failed
    // *   UNKNOWN: The cluster is lost and cannot be created.
    std::shared_ptr<vector<ListLogstashPluginsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
