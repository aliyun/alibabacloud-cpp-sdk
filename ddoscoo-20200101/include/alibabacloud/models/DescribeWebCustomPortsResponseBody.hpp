// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCustomPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCustomPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebCustomPorts, webCustomPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCustomPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebCustomPorts, webCustomPorts_);
    };
    DescribeWebCustomPortsResponseBody() = default ;
    DescribeWebCustomPortsResponseBody(const DescribeWebCustomPortsResponseBody &) = default ;
    DescribeWebCustomPortsResponseBody(DescribeWebCustomPortsResponseBody &&) = default ;
    DescribeWebCustomPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCustomPortsResponseBody() = default ;
    DescribeWebCustomPortsResponseBody& operator=(const DescribeWebCustomPortsResponseBody &) = default ;
    DescribeWebCustomPortsResponseBody& operator=(DescribeWebCustomPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebCustomPorts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebCustomPorts& obj) { 
        DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      };
      friend void from_json(const Darabonba::Json& j, WebCustomPorts& obj) { 
        DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      };
      WebCustomPorts() = default ;
      WebCustomPorts(const WebCustomPorts &) = default ;
      WebCustomPorts(WebCustomPorts &&) = default ;
      WebCustomPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebCustomPorts() = default ;
      WebCustomPorts& operator=(const WebCustomPorts &) = default ;
      WebCustomPorts& operator=(WebCustomPorts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->proxyPorts_ == nullptr
        && this->proxyType_ == nullptr; };
      // proxyPorts Field Functions 
      bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
      void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
      inline const vector<string> & getProxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
      inline vector<string> getProxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
      inline WebCustomPorts& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
      inline WebCustomPorts& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


      // proxyType Field Functions 
      bool hasProxyType() const { return this->proxyType_ != nullptr;};
      void deleteProxyType() { this->proxyType_ = nullptr;};
      inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
      inline WebCustomPorts& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    protected:
      // An array that consists of supported custom ports.
      shared_ptr<vector<string>> proxyPorts_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **http**
      // *   **https**
      shared_ptr<string> proxyType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webCustomPorts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCustomPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webCustomPorts Field Functions 
    bool hasWebCustomPorts() const { return this->webCustomPorts_ != nullptr;};
    void deleteWebCustomPorts() { this->webCustomPorts_ = nullptr;};
    inline const vector<DescribeWebCustomPortsResponseBody::WebCustomPorts> & getWebCustomPorts() const { DARABONBA_PTR_GET_CONST(webCustomPorts_, vector<DescribeWebCustomPortsResponseBody::WebCustomPorts>) };
    inline vector<DescribeWebCustomPortsResponseBody::WebCustomPorts> getWebCustomPorts() { DARABONBA_PTR_GET(webCustomPorts_, vector<DescribeWebCustomPortsResponseBody::WebCustomPorts>) };
    inline DescribeWebCustomPortsResponseBody& setWebCustomPorts(const vector<DescribeWebCustomPortsResponseBody::WebCustomPorts> & webCustomPorts) { DARABONBA_PTR_SET_VALUE(webCustomPorts_, webCustomPorts) };
    inline DescribeWebCustomPortsResponseBody& setWebCustomPorts(vector<DescribeWebCustomPortsResponseBody::WebCustomPorts> && webCustomPorts) { DARABONBA_PTR_SET_RVALUE(webCustomPorts_, webCustomPorts) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array consisting of information about supported custom ports that are used by a website.
    shared_ptr<vector<DescribeWebCustomPortsResponseBody::WebCustomPorts>> webCustomPorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
