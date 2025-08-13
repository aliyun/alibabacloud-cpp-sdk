// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATARESOURCELISTAUTHRESOURCEHEADERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATARESOURCELISTAUTHRESOURCEHEADERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_TO_JSON(HeaderMethod, headerMethod_);
      DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
      DARABONBA_PTR_FROM_JSON(HeaderMethod, headerMethod_);
      DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
    };
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList() = default ;
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList(const GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList &) = default ;
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList(GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList &&) = default ;
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList() = default ;
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& operator=(const GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList &) = default ;
    GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& operator=(GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerKey_ != nullptr
        && this->headerMethod_ != nullptr && this->headerValue_ != nullptr; };
    // headerKey Field Functions 
    bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
    void deleteHeaderKey() { this->headerKey_ = nullptr;};
    inline string headerKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
    inline GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


    // headerMethod Field Functions 
    bool hasHeaderMethod() const { return this->headerMethod_ != nullptr;};
    void deleteHeaderMethod() { this->headerMethod_ = nullptr;};
    inline string headerMethod() const { DARABONBA_PTR_GET_DEFAULT(headerMethod_, "") };
    inline GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& setHeaderMethod(string headerMethod) { DARABONBA_PTR_SET_VALUE(headerMethod_, headerMethod) };


    // headerValue Field Functions 
    bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
    void deleteHeaderValue() { this->headerValue_ = nullptr;};
    inline string headerValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
    inline GetGatewayAuthDetailResponseBodyDataResourceListAuthResourceHeaderList& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


  protected:
    std::shared_ptr<string> headerKey_ = nullptr;
    std::shared_ptr<string> headerMethod_ = nullptr;
    std::shared_ptr<string> headerValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
