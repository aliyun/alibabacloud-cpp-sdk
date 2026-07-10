// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DeleteTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTeamRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteTeamRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteTeamRequest() = default ;
    DeleteTeamRequest(const DeleteTeamRequest &) = default ;
    DeleteTeamRequest(DeleteTeamRequest &&) = default ;
    DeleteTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTeamRequest() = default ;
    DeleteTeamRequest& operator=(const DeleteTeamRequest &) = default ;
    DeleteTeamRequest& operator=(DeleteTeamRequest &&) = default ;
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
