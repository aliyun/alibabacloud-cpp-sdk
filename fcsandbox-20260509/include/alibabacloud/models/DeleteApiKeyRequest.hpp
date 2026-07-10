// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DeleteApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteApiKeyRequest() = default ;
    DeleteApiKeyRequest(const DeleteApiKeyRequest &) = default ;
    DeleteApiKeyRequest(DeleteApiKeyRequest &&) = default ;
    DeleteApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApiKeyRequest() = default ;
    DeleteApiKeyRequest& operator=(const DeleteApiKeyRequest &) = default ;
    DeleteApiKeyRequest& operator=(DeleteApiKeyRequest &&) = default ;
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
