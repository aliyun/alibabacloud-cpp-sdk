// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class GetTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTeamRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetTeamRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetTeamRequest() = default ;
    GetTeamRequest(const GetTeamRequest &) = default ;
    GetTeamRequest(GetTeamRequest &&) = default ;
    GetTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTeamRequest() = default ;
    GetTeamRequest& operator=(const GetTeamRequest &) = default ;
    GetTeamRequest& operator=(GetTeamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
