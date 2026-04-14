// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIRTUALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIRTUALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteVirtualResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVirtualResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteVirtualResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteVirtualResourceRequest() = default ;
    DeleteVirtualResourceRequest(const DeleteVirtualResourceRequest &) = default ;
    DeleteVirtualResourceRequest(DeleteVirtualResourceRequest &&) = default ;
    DeleteVirtualResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVirtualResourceRequest() = default ;
    DeleteVirtualResourceRequest& operator=(const DeleteVirtualResourceRequest &) = default ;
    DeleteVirtualResourceRequest& operator=(DeleteVirtualResourceRequest &&) = default ;
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
