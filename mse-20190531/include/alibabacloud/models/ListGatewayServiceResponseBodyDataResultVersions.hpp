// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResultVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultVersions& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListGatewayServiceResponseBodyDataResultVersions() = default ;
    ListGatewayServiceResponseBodyDataResultVersions(const ListGatewayServiceResponseBodyDataResultVersions &) = default ;
    ListGatewayServiceResponseBodyDataResultVersions(ListGatewayServiceResponseBodyDataResultVersions &&) = default ;
    ListGatewayServiceResponseBodyDataResultVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultVersions() = default ;
    ListGatewayServiceResponseBodyDataResultVersions& operator=(const ListGatewayServiceResponseBodyDataResultVersions &) = default ;
    ListGatewayServiceResponseBodyDataResultVersions& operator=(ListGatewayServiceResponseBodyDataResultVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayServiceResponseBodyDataResultVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The version number.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
