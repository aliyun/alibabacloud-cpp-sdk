// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTODISPOSECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTODISPOSECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetAutoDisposeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoDisposeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDisposeConfig, autoDisposeConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoDisposeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDisposeConfig, autoDisposeConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAutoDisposeConfigResponseBody() = default ;
    GetAutoDisposeConfigResponseBody(const GetAutoDisposeConfigResponseBody &) = default ;
    GetAutoDisposeConfigResponseBody(GetAutoDisposeConfigResponseBody &&) = default ;
    GetAutoDisposeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoDisposeConfigResponseBody() = default ;
    GetAutoDisposeConfigResponseBody& operator=(const GetAutoDisposeConfigResponseBody &) = default ;
    GetAutoDisposeConfigResponseBody& operator=(GetAutoDisposeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoDisposeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoDisposeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoDecisionStatus, autoDecisionStatus_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      };
      friend void from_json(const Darabonba::Json& j, AutoDisposeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoDecisionStatus, autoDecisionStatus_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      };
      AutoDisposeConfig() = default ;
      AutoDisposeConfig(const AutoDisposeConfig &) = default ;
      AutoDisposeConfig(AutoDisposeConfig &&) = default ;
      AutoDisposeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoDisposeConfig() = default ;
      AutoDisposeConfig& operator=(const AutoDisposeConfig &) = default ;
      AutoDisposeConfig& operator=(AutoDisposeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoDecisionStatus_ == nullptr
        && this->productCode_ == nullptr; };
      // autoDecisionStatus Field Functions 
      bool hasAutoDecisionStatus() const { return this->autoDecisionStatus_ != nullptr;};
      void deleteAutoDecisionStatus() { this->autoDecisionStatus_ = nullptr;};
      inline string getAutoDecisionStatus() const { DARABONBA_PTR_GET_DEFAULT(autoDecisionStatus_, "") };
      inline AutoDisposeConfig& setAutoDecisionStatus(string autoDecisionStatus) { DARABONBA_PTR_SET_VALUE(autoDecisionStatus_, autoDecisionStatus) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline AutoDisposeConfig& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    protected:
      shared_ptr<string> autoDecisionStatus_ {};
      shared_ptr<string> productCode_ {};
    };

    virtual bool empty() const override { return this->autoDisposeConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // autoDisposeConfig Field Functions 
    bool hasAutoDisposeConfig() const { return this->autoDisposeConfig_ != nullptr;};
    void deleteAutoDisposeConfig() { this->autoDisposeConfig_ = nullptr;};
    inline const GetAutoDisposeConfigResponseBody::AutoDisposeConfig & getAutoDisposeConfig() const { DARABONBA_PTR_GET_CONST(autoDisposeConfig_, GetAutoDisposeConfigResponseBody::AutoDisposeConfig) };
    inline GetAutoDisposeConfigResponseBody::AutoDisposeConfig getAutoDisposeConfig() { DARABONBA_PTR_GET(autoDisposeConfig_, GetAutoDisposeConfigResponseBody::AutoDisposeConfig) };
    inline GetAutoDisposeConfigResponseBody& setAutoDisposeConfig(const GetAutoDisposeConfigResponseBody::AutoDisposeConfig & autoDisposeConfig) { DARABONBA_PTR_SET_VALUE(autoDisposeConfig_, autoDisposeConfig) };
    inline GetAutoDisposeConfigResponseBody& setAutoDisposeConfig(GetAutoDisposeConfigResponseBody::AutoDisposeConfig && autoDisposeConfig) { DARABONBA_PTR_SET_RVALUE(autoDisposeConfig_, autoDisposeConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoDisposeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAutoDisposeConfigResponseBody::AutoDisposeConfig> autoDisposeConfig_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
