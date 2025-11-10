// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYAPIINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYAPIINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiMcpServerResponseBodyApiInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiMcpServerResponseBodyApiInfos& obj) { 
      DARABONBA_PTR_TO_JSON(apiName, apiName_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiMcpServerResponseBodyApiInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(apiName, apiName_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    GetApiMcpServerResponseBodyApiInfos() = default ;
    GetApiMcpServerResponseBodyApiInfos(const GetApiMcpServerResponseBodyApiInfos &) = default ;
    GetApiMcpServerResponseBodyApiInfos(GetApiMcpServerResponseBodyApiInfos &&) = default ;
    GetApiMcpServerResponseBodyApiInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiMcpServerResponseBodyApiInfos() = default ;
    GetApiMcpServerResponseBodyApiInfos& operator=(const GetApiMcpServerResponseBodyApiInfos &) = default ;
    GetApiMcpServerResponseBodyApiInfos& operator=(GetApiMcpServerResponseBodyApiInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->apiVersion_ == nullptr && return this->product_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetApiMcpServerResponseBodyApiInfos& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetApiMcpServerResponseBodyApiInfos& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetApiMcpServerResponseBodyApiInfos& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> apiVersion_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
