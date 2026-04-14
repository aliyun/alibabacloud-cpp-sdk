// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEDLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEDLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteResourceDLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceDLinkRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceDLinkRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteResourceDLinkRequest() = default ;
    DeleteResourceDLinkRequest(const DeleteResourceDLinkRequest &) = default ;
    DeleteResourceDLinkRequest(DeleteResourceDLinkRequest &&) = default ;
    DeleteResourceDLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceDLinkRequest() = default ;
    DeleteResourceDLinkRequest& operator=(const DeleteResourceDLinkRequest &) = default ;
    DeleteResourceDLinkRequest& operator=(DeleteResourceDLinkRequest &&) = default ;
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
