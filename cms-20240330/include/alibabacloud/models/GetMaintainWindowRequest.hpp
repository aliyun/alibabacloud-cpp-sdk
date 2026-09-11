// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAINTAINWINDOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMAINTAINWINDOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetMaintainWindowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMaintainWindowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetMaintainWindowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetMaintainWindowRequest() = default ;
    GetMaintainWindowRequest(const GetMaintainWindowRequest &) = default ;
    GetMaintainWindowRequest(GetMaintainWindowRequest &&) = default ;
    GetMaintainWindowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMaintainWindowRequest() = default ;
    GetMaintainWindowRequest& operator=(const GetMaintainWindowRequest &) = default ;
    GetMaintainWindowRequest& operator=(GetMaintainWindowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspace_ == nullptr; };
    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetMaintainWindowRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
