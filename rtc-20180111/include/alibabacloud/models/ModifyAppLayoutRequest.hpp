// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    ModifyAppLayoutRequest() = default ;
    ModifyAppLayoutRequest(const ModifyAppLayoutRequest &) = default ;
    ModifyAppLayoutRequest(ModifyAppLayoutRequest &&) = default ;
    ModifyAppLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppLayoutRequest() = default ;
    ModifyAppLayoutRequest& operator=(const ModifyAppLayoutRequest &) = default ;
    ModifyAppLayoutRequest& operator=(ModifyAppLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layout& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Panes, panes_);
      };
      friend void from_json(const Darabonba::Json& j, Layout& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Panes, panes_);
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
      class Panes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Panes& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(PaneId, paneId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, Panes& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        Panes() = default ;
        Panes(const Panes &) = default ;
        Panes(Panes &&) = default ;
        Panes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Panes() = default ;
        Panes& operator=(const Panes &) = default ;
        Panes& operator=(Panes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->height_ == nullptr
        && this->paneId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr && this->ZOrder_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Panes& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // paneId Field Functions 
        bool hasPaneId() const { return this->paneId_ != nullptr;};
        void deletePaneId() { this->paneId_ = nullptr;};
        inline int64_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0L) };
        inline Panes& setPaneId(int64_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Panes& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline double getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Panes& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline double getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Panes& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Panes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<double> height_ {};
        shared_ptr<int64_t> paneId_ {};
        shared_ptr<double> width_ {};
        shared_ptr<double> x_ {};
        shared_ptr<double> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      virtual bool empty() const override { return this->layoutId_ == nullptr
        && this->name_ == nullptr && this->panes_ == nullptr; };
      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline Layout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Layout& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // panes Field Functions 
      bool hasPanes() const { return this->panes_ != nullptr;};
      void deletePanes() { this->panes_ = nullptr;};
      inline const vector<Layout::Panes> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Layout::Panes>) };
      inline vector<Layout::Panes> getPanes() { DARABONBA_PTR_GET(panes_, vector<Layout::Panes>) };
      inline Layout& setPanes(const vector<Layout::Panes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
      inline Layout& setPanes(vector<Layout::Panes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    protected:
      // This parameter is required.
      shared_ptr<string> layoutId_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<vector<Layout::Panes>> panes_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientToken_ == nullptr && this->layout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppLayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppLayoutRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const ModifyAppLayoutRequest::Layout & getLayout() const { DARABONBA_PTR_GET_CONST(layout_, ModifyAppLayoutRequest::Layout) };
    inline ModifyAppLayoutRequest::Layout getLayout() { DARABONBA_PTR_GET(layout_, ModifyAppLayoutRequest::Layout) };
    inline ModifyAppLayoutRequest& setLayout(const ModifyAppLayoutRequest::Layout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline ModifyAppLayoutRequest& setLayout(ModifyAppLayoutRequest::Layout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<ModifyAppLayoutRequest::Layout> layout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
