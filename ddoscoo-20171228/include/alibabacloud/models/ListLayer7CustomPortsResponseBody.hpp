// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListLayer7CustomPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayer7CustomPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7CustomPorts, layer7CustomPorts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayer7CustomPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7CustomPorts, layer7CustomPorts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLayer7CustomPortsResponseBody() = default ;
    ListLayer7CustomPortsResponseBody(const ListLayer7CustomPortsResponseBody &) = default ;
    ListLayer7CustomPortsResponseBody(ListLayer7CustomPortsResponseBody &&) = default ;
    ListLayer7CustomPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayer7CustomPortsResponseBody() = default ;
    ListLayer7CustomPortsResponseBody& operator=(const ListLayer7CustomPortsResponseBody &) = default ;
    ListLayer7CustomPortsResponseBody& operator=(ListLayer7CustomPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layer7CustomPorts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layer7CustomPorts& obj) { 
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      };
      friend void from_json(const Darabonba::Json& j, Layer7CustomPorts& obj) { 
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
        DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      };
      Layer7CustomPorts() = default ;
      Layer7CustomPorts(const Layer7CustomPorts &) = default ;
      Layer7CustomPorts(Layer7CustomPorts &&) = default ;
      Layer7CustomPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layer7CustomPorts() = default ;
      Layer7CustomPorts& operator=(const Layer7CustomPorts &) = default ;
      Layer7CustomPorts& operator=(Layer7CustomPorts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flag_ == nullptr
        && this->proxyPorts_ == nullptr && this->proxyType_ == nullptr; };
      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline Layer7CustomPorts& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // proxyPorts Field Functions 
      bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
      void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
      inline const vector<string> & getProxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<string>) };
      inline vector<string> getProxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<string>) };
      inline Layer7CustomPorts& setProxyPorts(const vector<string> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
      inline Layer7CustomPorts& setProxyPorts(vector<string> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


      // proxyType Field Functions 
      bool hasProxyType() const { return this->proxyType_ != nullptr;};
      void deleteProxyType() { this->proxyType_ = nullptr;};
      inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
      inline Layer7CustomPorts& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    protected:
      shared_ptr<string> flag_ {};
      shared_ptr<vector<string>> proxyPorts_ {};
      shared_ptr<string> proxyType_ {};
    };

    virtual bool empty() const override { return this->layer7CustomPorts_ == nullptr
        && this->requestId_ == nullptr; };
    // layer7CustomPorts Field Functions 
    bool hasLayer7CustomPorts() const { return this->layer7CustomPorts_ != nullptr;};
    void deleteLayer7CustomPorts() { this->layer7CustomPorts_ = nullptr;};
    inline const vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts> & getLayer7CustomPorts() const { DARABONBA_PTR_GET_CONST(layer7CustomPorts_, vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts>) };
    inline vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts> getLayer7CustomPorts() { DARABONBA_PTR_GET(layer7CustomPorts_, vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts>) };
    inline ListLayer7CustomPortsResponseBody& setLayer7CustomPorts(const vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts> & layer7CustomPorts) { DARABONBA_PTR_SET_VALUE(layer7CustomPorts_, layer7CustomPorts) };
    inline ListLayer7CustomPortsResponseBody& setLayer7CustomPorts(vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts> && layer7CustomPorts) { DARABONBA_PTR_SET_RVALUE(layer7CustomPorts_, layer7CustomPorts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLayer7CustomPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListLayer7CustomPortsResponseBody::Layer7CustomPorts>> layer7CustomPorts_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
