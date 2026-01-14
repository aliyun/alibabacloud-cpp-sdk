// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRESERVEHEADERFORMATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRESERVEHEADERFORMATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class PreserveHeaderFormatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreserveHeaderFormatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(PreserveHeaderFormat, preserveHeaderFormat_);
    };
    friend void from_json(const Darabonba::Json& j, PreserveHeaderFormatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(PreserveHeaderFormat, preserveHeaderFormat_);
    };
    PreserveHeaderFormatRequest() = default ;
    PreserveHeaderFormatRequest(const PreserveHeaderFormatRequest &) = default ;
    PreserveHeaderFormatRequest(PreserveHeaderFormatRequest &&) = default ;
    PreserveHeaderFormatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreserveHeaderFormatRequest() = default ;
    PreserveHeaderFormatRequest& operator=(const PreserveHeaderFormatRequest &) = default ;
    PreserveHeaderFormatRequest& operator=(PreserveHeaderFormatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->preserveHeaderFormat_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline PreserveHeaderFormatRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline PreserveHeaderFormatRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // preserveHeaderFormat Field Functions 
    bool hasPreserveHeaderFormat() const { return this->preserveHeaderFormat_ != nullptr;};
    void deletePreserveHeaderFormat() { this->preserveHeaderFormat_ = nullptr;};
    inline bool getPreserveHeaderFormat() const { DARABONBA_PTR_GET_DEFAULT(preserveHeaderFormat_, false) };
    inline PreserveHeaderFormatRequest& setPreserveHeaderFormat(bool preserveHeaderFormat) { DARABONBA_PTR_SET_VALUE(preserveHeaderFormat_, preserveHeaderFormat) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // Specifies whether the request header is case-sensitive. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    shared_ptr<bool> preserveHeaderFormat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
