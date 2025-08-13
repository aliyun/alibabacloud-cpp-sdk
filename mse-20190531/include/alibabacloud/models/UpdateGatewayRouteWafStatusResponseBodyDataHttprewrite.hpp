// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHTTPREWRITE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHTTPREWRITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Substitution, substitution_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Substitution, substitution_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite(const UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite(UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& operator=(UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->path_ != nullptr && this->pathType_ != nullptr && this->pattern_ != nullptr && this->status_ != nullptr && this->substitution_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // substitution Field Functions 
    bool hasSubstitution() const { return this->substitution_ != nullptr;};
    void deleteSubstitution() { this->substitution_ = nullptr;};
    inline string substitution() const { DARABONBA_PTR_GET_DEFAULT(substitution_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite& setSubstitution(string substitution) { DARABONBA_PTR_SET_VALUE(substitution_, substitution) };


  protected:
    // The domain name.
    std::shared_ptr<string> host_ = nullptr;
    // The HTTP request path.
    std::shared_ptr<string> path_ = nullptr;
    // The path type of the HTTP request.
    std::shared_ptr<string> pathType_ = nullptr;
    // The matching pattern.
    std::shared_ptr<string> pattern_ = nullptr;
    // The HTTP status.
    std::shared_ptr<string> status_ = nullptr;
    // The replacement.
    std::shared_ptr<string> substitution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
