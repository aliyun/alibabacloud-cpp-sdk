// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENTITYSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENTITYSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteEntityStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEntityStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteEntityStoreRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteEntityStoreRequest() = default ;
    DeleteEntityStoreRequest(const DeleteEntityStoreRequest &) = default ;
    DeleteEntityStoreRequest(DeleteEntityStoreRequest &&) = default ;
    DeleteEntityStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEntityStoreRequest() = default ;
    DeleteEntityStoreRequest& operator=(const DeleteEntityStoreRequest &) = default ;
    DeleteEntityStoreRequest& operator=(DeleteEntityStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
