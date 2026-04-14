// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONCURRENCYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONCURRENCYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DeleteConcurrencyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConcurrencyConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteConcurrencyConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteConcurrencyConfigRequest() = default ;
    DeleteConcurrencyConfigRequest(const DeleteConcurrencyConfigRequest &) = default ;
    DeleteConcurrencyConfigRequest(DeleteConcurrencyConfigRequest &&) = default ;
    DeleteConcurrencyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConcurrencyConfigRequest() = default ;
    DeleteConcurrencyConfigRequest& operator=(const DeleteConcurrencyConfigRequest &) = default ;
    DeleteConcurrencyConfigRequest& operator=(DeleteConcurrencyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
