// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteWorkspaceRequest() = default ;
    DeleteWorkspaceRequest(const DeleteWorkspaceRequest &) = default ;
    DeleteWorkspaceRequest(DeleteWorkspaceRequest &&) = default ;
    DeleteWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceRequest() = default ;
    DeleteWorkspaceRequest& operator=(const DeleteWorkspaceRequest &) = default ;
    DeleteWorkspaceRequest& operator=(DeleteWorkspaceRequest &&) = default ;
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
