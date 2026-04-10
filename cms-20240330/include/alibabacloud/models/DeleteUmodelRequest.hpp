// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteUmodelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUmodelRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteUmodelRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteUmodelRequest() = default ;
    DeleteUmodelRequest(const DeleteUmodelRequest &) = default ;
    DeleteUmodelRequest(DeleteUmodelRequest &&) = default ;
    DeleteUmodelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUmodelRequest() = default ;
    DeleteUmodelRequest& operator=(const DeleteUmodelRequest &) = default ;
    DeleteUmodelRequest& operator=(DeleteUmodelRequest &&) = default ;
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
