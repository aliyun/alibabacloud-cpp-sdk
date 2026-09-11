// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMAINTAINWINDOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMAINTAINWINDOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteMaintainWindowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaintainWindowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaintainWindowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    DeleteMaintainWindowRequest() = default ;
    DeleteMaintainWindowRequest(const DeleteMaintainWindowRequest &) = default ;
    DeleteMaintainWindowRequest(DeleteMaintainWindowRequest &&) = default ;
    DeleteMaintainWindowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaintainWindowRequest() = default ;
    DeleteMaintainWindowRequest& operator=(const DeleteMaintainWindowRequest &) = default ;
    DeleteMaintainWindowRequest& operator=(DeleteMaintainWindowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspace_ == nullptr; };
    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline DeleteMaintainWindowRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
