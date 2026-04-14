// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFAULTINJECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFAULTINJECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteFaultInjectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaultInjectionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaultInjectionRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteFaultInjectionRequest() = default ;
    DeleteFaultInjectionRequest(const DeleteFaultInjectionRequest &) = default ;
    DeleteFaultInjectionRequest(DeleteFaultInjectionRequest &&) = default ;
    DeleteFaultInjectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaultInjectionRequest() = default ;
    DeleteFaultInjectionRequest& operator=(const DeleteFaultInjectionRequest &) = default ;
    DeleteFaultInjectionRequest& operator=(DeleteFaultInjectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
