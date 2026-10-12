// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeveloperRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetDeveloperRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetDeveloperRequest() = default ;
    GetDeveloperRequest(const GetDeveloperRequest &) = default ;
    GetDeveloperRequest(GetDeveloperRequest &&) = default ;
    GetDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeveloperRequest() = default ;
    GetDeveloperRequest& operator=(const GetDeveloperRequest &) = default ;
    GetDeveloperRequest& operator=(GetDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
