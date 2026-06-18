// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteEdgeContainerAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeContainerAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeContainerAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeleteEdgeContainerAppRequest() = default ;
    DeleteEdgeContainerAppRequest(const DeleteEdgeContainerAppRequest &) = default ;
    DeleteEdgeContainerAppRequest(DeleteEdgeContainerAppRequest &&) = default ;
    DeleteEdgeContainerAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeContainerAppRequest() = default ;
    DeleteEdgeContainerAppRequest& operator=(const DeleteEdgeContainerAppRequest &) = default ;
    DeleteEdgeContainerAppRequest& operator=(DeleteEdgeContainerAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEdgeContainerAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application ID. You can call the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation to obtain the application ID. 
    // <notice>AppId is required. If this parameter is not specified, the API returns InvalidParameter.appid (400). You can obtain the value by calling ListEdgeContainerApps.
    // The AppId value is in the format of the app- prefix followed by 18 or more digits (at least 20 characters in total). You can obtain the actual value from the AppId field in the ListEdgeContainerApps response.</notice>.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
