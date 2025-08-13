// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAREDIRECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRedirect& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRedirect& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    GetGatewayRouteDetailResponseBodyDataRedirect() = default ;
    GetGatewayRouteDetailResponseBodyDataRedirect(const GetGatewayRouteDetailResponseBodyDataRedirect &) = default ;
    GetGatewayRouteDetailResponseBodyDataRedirect(GetGatewayRouteDetailResponseBodyDataRedirect &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRedirect() = default ;
    GetGatewayRouteDetailResponseBodyDataRedirect& operator=(const GetGatewayRouteDetailResponseBodyDataRedirect &) = default ;
    GetGatewayRouteDetailResponseBodyDataRedirect& operator=(GetGatewayRouteDetailResponseBodyDataRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->host_ != nullptr && this->path_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayRouteDetailResponseBodyDataRedirect& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRedirect& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRedirect& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The response code returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The hostname.
    std::shared_ptr<string> host_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
