// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVERYONESELLSFORMLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEVERYONESELLSFORMLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{
namespace Models
{
  class GetEveryOneSellsFormListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEveryOneSellsFormListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
    };
    friend void from_json(const Darabonba::Json& j, GetEveryOneSellsFormListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
    };
    GetEveryOneSellsFormListRequest() = default ;
    GetEveryOneSellsFormListRequest(const GetEveryOneSellsFormListRequest &) = default ;
    GetEveryOneSellsFormListRequest(GetEveryOneSellsFormListRequest &&) = default ;
    GetEveryOneSellsFormListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEveryOneSellsFormListRequest() = default ;
    GetEveryOneSellsFormListRequest& operator=(const GetEveryOneSellsFormListRequest &) = default ;
    GetEveryOneSellsFormListRequest& operator=(GetEveryOneSellsFormListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auth_ != nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline string auth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
    inline GetEveryOneSellsFormListRequest& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


  protected:
    std::shared_ptr<string> auth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709
#endif
