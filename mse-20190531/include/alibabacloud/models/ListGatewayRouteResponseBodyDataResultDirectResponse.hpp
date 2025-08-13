// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTDIRECTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTDIRECTRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultDirectResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultDirectResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultDirectResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    ListGatewayRouteResponseBodyDataResultDirectResponse() = default ;
    ListGatewayRouteResponseBodyDataResultDirectResponse(const ListGatewayRouteResponseBodyDataResultDirectResponse &) = default ;
    ListGatewayRouteResponseBodyDataResultDirectResponse(ListGatewayRouteResponseBodyDataResultDirectResponse &&) = default ;
    ListGatewayRouteResponseBodyDataResultDirectResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultDirectResponse() = default ;
    ListGatewayRouteResponseBodyDataResultDirectResponse& operator=(const ListGatewayRouteResponseBodyDataResultDirectResponse &) = default ;
    ListGatewayRouteResponseBodyDataResultDirectResponse& operator=(ListGatewayRouteResponseBodyDataResultDirectResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->code_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ListGatewayRouteResponseBodyDataResultDirectResponse& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayRouteResponseBodyDataResultDirectResponse& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // The return value for service mocking.
    std::shared_ptr<string> body_ = nullptr;
    // The response code returned.
    std::shared_ptr<int32_t> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
