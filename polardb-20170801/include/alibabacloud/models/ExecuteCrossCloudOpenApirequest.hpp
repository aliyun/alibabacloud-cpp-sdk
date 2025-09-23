// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECROSSCLOUDOPENAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECROSSCLOUDOPENAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ExecuteCrossCloudOpenAPIRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteCrossCloudOpenAPIRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyInfo, proxyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteCrossCloudOpenAPIRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyInfo, proxyInfo_);
    };
    ExecuteCrossCloudOpenAPIRequest() = default ;
    ExecuteCrossCloudOpenAPIRequest(const ExecuteCrossCloudOpenAPIRequest &) = default ;
    ExecuteCrossCloudOpenAPIRequest(ExecuteCrossCloudOpenAPIRequest &&) = default ;
    ExecuteCrossCloudOpenAPIRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteCrossCloudOpenAPIRequest() = default ;
    ExecuteCrossCloudOpenAPIRequest& operator=(const ExecuteCrossCloudOpenAPIRequest &) = default ;
    ExecuteCrossCloudOpenAPIRequest& operator=(ExecuteCrossCloudOpenAPIRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyInfo_ != nullptr; };
    // proxyInfo Field Functions 
    bool hasProxyInfo() const { return this->proxyInfo_ != nullptr;};
    void deleteProxyInfo() { this->proxyInfo_ = nullptr;};
    inline string proxyInfo() const { DARABONBA_PTR_GET_DEFAULT(proxyInfo_, "") };
    inline ExecuteCrossCloudOpenAPIRequest& setProxyInfo(string proxyInfo) { DARABONBA_PTR_SET_VALUE(proxyInfo_, proxyInfo) };


  protected:
    std::shared_ptr<string> proxyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
