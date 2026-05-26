// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteConfigRequest() = default ;
    DeleteConfigRequest(const DeleteConfigRequest &) = default ;
    DeleteConfigRequest(DeleteConfigRequest &&) = default ;
    DeleteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigRequest() = default ;
    DeleteConfigRequest& operator=(const DeleteConfigRequest &) = default ;
    DeleteConfigRequest& operator=(DeleteConfigRequest &&) = default ;
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
