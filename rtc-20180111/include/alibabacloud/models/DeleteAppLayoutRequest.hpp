// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    DeleteAppLayoutRequest() = default ;
    DeleteAppLayoutRequest(const DeleteAppLayoutRequest &) = default ;
    DeleteAppLayoutRequest(DeleteAppLayoutRequest &&) = default ;
    DeleteAppLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppLayoutRequest() = default ;
    DeleteAppLayoutRequest& operator=(const DeleteAppLayoutRequest &) = default ;
    DeleteAppLayoutRequest& operator=(DeleteAppLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layout& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      };
      friend void from_json(const Darabonba::Json& j, Layout& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      };
      Layout() = default ;
      Layout(const Layout &) = default ;
      Layout(Layout &&) = default ;
      Layout(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layout() = default ;
      Layout& operator=(const Layout &) = default ;
      Layout& operator=(Layout &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->layoutId_ == nullptr; };
      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline Layout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    protected:
      // This parameter is required.
      shared_ptr<string> layoutId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientToken_ == nullptr && this->layout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppLayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAppLayoutRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const DeleteAppLayoutRequest::Layout & getLayout() const { DARABONBA_PTR_GET_CONST(layout_, DeleteAppLayoutRequest::Layout) };
    inline DeleteAppLayoutRequest::Layout getLayout() { DARABONBA_PTR_GET(layout_, DeleteAppLayoutRequest::Layout) };
    inline DeleteAppLayoutRequest& setLayout(const DeleteAppLayoutRequest::Layout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline DeleteAppLayoutRequest& setLayout(DeleteAppLayoutRequest::Layout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<DeleteAppLayoutRequest::Layout> layout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
