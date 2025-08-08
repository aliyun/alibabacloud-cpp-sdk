// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTSMCPSERVERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTSMCPSERVERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ToolsetStatusOutputsMcpServerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolsetStatusOutputsMcpServerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(transportType, transportType_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ToolsetStatusOutputsMcpServerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(transportType, transportType_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ToolsetStatusOutputsMcpServerConfig() = default ;
    ToolsetStatusOutputsMcpServerConfig(const ToolsetStatusOutputsMcpServerConfig &) = default ;
    ToolsetStatusOutputsMcpServerConfig(ToolsetStatusOutputsMcpServerConfig &&) = default ;
    ToolsetStatusOutputsMcpServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolsetStatusOutputsMcpServerConfig() = default ;
    ToolsetStatusOutputsMcpServerConfig& operator=(const ToolsetStatusOutputsMcpServerConfig &) = default ;
    ToolsetStatusOutputsMcpServerConfig& operator=(ToolsetStatusOutputsMcpServerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->transportType_ != nullptr && this->url_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ToolsetStatusOutputsMcpServerConfig& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ToolsetStatusOutputsMcpServerConfig& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // transportType Field Functions 
    bool hasTransportType() const { return this->transportType_ != nullptr;};
    void deleteTransportType() { this->transportType_ = nullptr;};
    inline string transportType() const { DARABONBA_PTR_GET_DEFAULT(transportType_, "") };
    inline ToolsetStatusOutputsMcpServerConfig& setTransportType(string transportType) { DARABONBA_PTR_SET_VALUE(transportType_, transportType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ToolsetStatusOutputsMcpServerConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<string> transportType_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
