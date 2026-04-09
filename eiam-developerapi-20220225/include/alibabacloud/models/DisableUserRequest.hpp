// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class DisableUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableUserRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DisableUserRequest& obj) { 
      (void)j; (void)obj; 
    };
    DisableUserRequest() = default ;
    DisableUserRequest(const DisableUserRequest &) = default ;
    DisableUserRequest(DisableUserRequest &&) = default ;
    DisableUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableUserRequest() = default ;
    DisableUserRequest& operator=(const DisableUserRequest &) = default ;
    DisableUserRequest& operator=(DisableUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
