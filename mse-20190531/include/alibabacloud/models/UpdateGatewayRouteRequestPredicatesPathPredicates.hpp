// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTPREDICATESPATHPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTPREDICATESPATHPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRequestPredicatesPathPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRequestPredicatesPathPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRequestPredicatesPathPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateGatewayRouteRequestPredicatesPathPredicates() = default ;
    UpdateGatewayRouteRequestPredicatesPathPredicates(const UpdateGatewayRouteRequestPredicatesPathPredicates &) = default ;
    UpdateGatewayRouteRequestPredicatesPathPredicates(UpdateGatewayRouteRequestPredicatesPathPredicates &&) = default ;
    UpdateGatewayRouteRequestPredicatesPathPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRequestPredicatesPathPredicates() = default ;
    UpdateGatewayRouteRequestPredicatesPathPredicates& operator=(const UpdateGatewayRouteRequestPredicatesPathPredicates &) = default ;
    UpdateGatewayRouteRequestPredicatesPathPredicates& operator=(UpdateGatewayRouteRequestPredicatesPathPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoreCase_ != nullptr
        && this->path_ != nullptr && this->type_ != nullptr; };
    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool ignoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline UpdateGatewayRouteRequestPredicatesPathPredicates& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateGatewayRouteRequestPredicatesPathPredicates& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateGatewayRouteRequestPredicatesPathPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to perform case-insensitive matching.
    std::shared_ptr<bool> ignoreCase_ = nullptr;
    // The path used for route matching.
    std::shared_ptr<string> path_ = nullptr;
    // The matching type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
