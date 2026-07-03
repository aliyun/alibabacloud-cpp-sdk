// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKHEALTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKHEALTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CheckHealthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckHealthRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, CheckHealthRequest& obj) { 
      (void)j; (void)obj; 
    };
    CheckHealthRequest() = default ;
    CheckHealthRequest(const CheckHealthRequest &) = default ;
    CheckHealthRequest(CheckHealthRequest &&) = default ;
    CheckHealthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckHealthRequest() = default ;
    CheckHealthRequest& operator=(const CheckHealthRequest &) = default ;
    CheckHealthRequest& operator=(CheckHealthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
