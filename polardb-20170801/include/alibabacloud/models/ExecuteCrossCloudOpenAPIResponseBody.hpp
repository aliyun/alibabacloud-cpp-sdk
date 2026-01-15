// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECROSSCLOUDOPENAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECROSSCLOUDOPENAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ExecuteCrossCloudOpenAPIResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteCrossCloudOpenAPIResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyData, proxyData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteCrossCloudOpenAPIResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyData, proxyData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecuteCrossCloudOpenAPIResponseBody() = default ;
    ExecuteCrossCloudOpenAPIResponseBody(const ExecuteCrossCloudOpenAPIResponseBody &) = default ;
    ExecuteCrossCloudOpenAPIResponseBody(ExecuteCrossCloudOpenAPIResponseBody &&) = default ;
    ExecuteCrossCloudOpenAPIResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteCrossCloudOpenAPIResponseBody() = default ;
    ExecuteCrossCloudOpenAPIResponseBody& operator=(const ExecuteCrossCloudOpenAPIResponseBody &) = default ;
    ExecuteCrossCloudOpenAPIResponseBody& operator=(ExecuteCrossCloudOpenAPIResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proxyData_ == nullptr
        && this->requestId_ == nullptr; };
    // proxyData Field Functions 
    bool hasProxyData() const { return this->proxyData_ != nullptr;};
    void deleteProxyData() { this->proxyData_ = nullptr;};
    inline string getProxyData() const { DARABONBA_PTR_GET_DEFAULT(proxyData_, "") };
    inline ExecuteCrossCloudOpenAPIResponseBody& setProxyData(string proxyData) { DARABONBA_PTR_SET_VALUE(proxyData_, proxyData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteCrossCloudOpenAPIResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> proxyData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
