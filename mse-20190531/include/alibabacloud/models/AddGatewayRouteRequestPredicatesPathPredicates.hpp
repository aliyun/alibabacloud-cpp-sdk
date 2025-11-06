// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTPREDICATESPATHPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTPREDICATESPATHPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteRequestPredicatesPathPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequestPredicatesPathPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequestPredicatesPathPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGatewayRouteRequestPredicatesPathPredicates() = default ;
    AddGatewayRouteRequestPredicatesPathPredicates(const AddGatewayRouteRequestPredicatesPathPredicates &) = default ;
    AddGatewayRouteRequestPredicatesPathPredicates(AddGatewayRouteRequestPredicatesPathPredicates &&) = default ;
    AddGatewayRouteRequestPredicatesPathPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequestPredicatesPathPredicates() = default ;
    AddGatewayRouteRequestPredicatesPathPredicates& operator=(const AddGatewayRouteRequestPredicatesPathPredicates &) = default ;
    AddGatewayRouteRequestPredicatesPathPredicates& operator=(AddGatewayRouteRequestPredicatesPathPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreCase_ == nullptr
        && return this->path_ == nullptr && return this->type_ == nullptr; };
    // ignoreCase Field Functions 
    bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
    void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
    inline bool ignoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
    inline AddGatewayRouteRequestPredicatesPathPredicates& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AddGatewayRouteRequestPredicatesPathPredicates& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewayRouteRequestPredicatesPathPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to ignore case sensitivity.
    std::shared_ptr<bool> ignoreCase_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The route matching type. Valid values:
    // 
    // *   PRE: prefix matching
    // *   EQUAL: exact matching
    // *   ERGULAR: regular expression matching
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
