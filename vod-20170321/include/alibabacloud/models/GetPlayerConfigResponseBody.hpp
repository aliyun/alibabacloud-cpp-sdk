// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayerConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayerConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlayerConfig, playerConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayerConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayerConfig, playerConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPlayerConfigResponseBody() = default ;
    GetPlayerConfigResponseBody(const GetPlayerConfigResponseBody &) = default ;
    GetPlayerConfigResponseBody(GetPlayerConfigResponseBody &&) = default ;
    GetPlayerConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayerConfigResponseBody() = default ;
    GetPlayerConfigResponseBody& operator=(const GetPlayerConfigResponseBody &) = default ;
    GetPlayerConfigResponseBody& operator=(GetPlayerConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->playerConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // playerConfig Field Functions 
    bool hasPlayerConfig() const { return this->playerConfig_ != nullptr;};
    void deletePlayerConfig() { this->playerConfig_ = nullptr;};
    inline string playerConfig() const { DARABONBA_PTR_GET_DEFAULT(playerConfig_, "") };
    inline GetPlayerConfigResponseBody& setPlayerConfig(string playerConfig) { DARABONBA_PTR_SET_VALUE(playerConfig_, playerConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayerConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> playerConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
