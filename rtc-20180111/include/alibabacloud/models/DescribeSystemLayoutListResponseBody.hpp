// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODY_HPP_
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
  class DescribeSystemLayoutListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLayoutListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLayoutListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeSystemLayoutListResponseBody() = default ;
    DescribeSystemLayoutListResponseBody(const DescribeSystemLayoutListResponseBody &) = default ;
    DescribeSystemLayoutListResponseBody(DescribeSystemLayoutListResponseBody &&) = default ;
    DescribeSystemLayoutListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLayoutListResponseBody() = default ;
    DescribeSystemLayoutListResponseBody& operator=(const DescribeSystemLayoutListResponseBody &) = default ;
    DescribeSystemLayoutListResponseBody& operator=(DescribeSystemLayoutListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layouts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layouts& obj) { 
        DARABONBA_PTR_TO_JSON(Layout, layout_);
      };
      friend void from_json(const Darabonba::Json& j, Layouts& obj) { 
        DARABONBA_PTR_FROM_JSON(Layout, layout_);
      };
      Layouts() = default ;
      Layouts(const Layouts &) = default ;
      Layouts(Layouts &&) = default ;
      Layouts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layouts() = default ;
      Layouts& operator=(const Layouts &) = default ;
      Layouts& operator=(Layouts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Layout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Layout& obj) { 
          DARABONBA_PTR_TO_JSON(AudioMixCount, audioMixCount_);
          DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Panes, panes_);
        };
        friend void from_json(const Darabonba::Json& j, Layout& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioMixCount, audioMixCount_);
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
            DARABONBA_PTR_TO_JSON(Panes, panes_);
          };
          friend void from_json(const Darabonba::Json& j, Panes& obj) { 
            DARABONBA_PTR_FROM_JSON(Panes, panes_);
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
          class PanesItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PanesItem& obj) { 
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(MajorPane, majorPane_);
              DARABONBA_PTR_TO_JSON(PaneId, paneId_);
              DARABONBA_PTR_TO_JSON(Width, width_);
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
              DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
            };
            friend void from_json(const Darabonba::Json& j, PanesItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(MajorPane, majorPane_);
              DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
              DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
            };
            PanesItem() = default ;
            PanesItem(const PanesItem &) = default ;
            PanesItem(PanesItem &&) = default ;
            PanesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PanesItem() = default ;
            PanesItem& operator=(const PanesItem &) = default ;
            PanesItem& operator=(PanesItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->height_ == nullptr
        && this->majorPane_ == nullptr && this->paneId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
            inline PanesItem& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // majorPane Field Functions 
            bool hasMajorPane() const { return this->majorPane_ != nullptr;};
            void deleteMajorPane() { this->majorPane_ = nullptr;};
            inline int32_t getMajorPane() const { DARABONBA_PTR_GET_DEFAULT(majorPane_, 0) };
            inline PanesItem& setMajorPane(int32_t majorPane) { DARABONBA_PTR_SET_VALUE(majorPane_, majorPane) };


            // paneId Field Functions 
            bool hasPaneId() const { return this->paneId_ != nullptr;};
            void deletePaneId() { this->paneId_ = nullptr;};
            inline int32_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
            inline PanesItem& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
            inline PanesItem& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
            inline PanesItem& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
            inline PanesItem& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


            // ZOrder Field Functions 
            bool hasZOrder() const { return this->ZOrder_ != nullptr;};
            void deleteZOrder() { this->ZOrder_ = nullptr;};
            inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
            inline PanesItem& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


          protected:
            shared_ptr<float> height_ {};
            shared_ptr<int32_t> majorPane_ {};
            shared_ptr<int32_t> paneId_ {};
            shared_ptr<float> width_ {};
            shared_ptr<float> x_ {};
            shared_ptr<float> y_ {};
            shared_ptr<int32_t> ZOrder_ {};
          };

          virtual bool empty() const override { return this->panes_ == nullptr; };
          // panes Field Functions 
          bool hasPanes() const { return this->panes_ != nullptr;};
          void deletePanes() { this->panes_ = nullptr;};
          inline const vector<Panes::PanesItem> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Panes::PanesItem>) };
          inline vector<Panes::PanesItem> getPanes() { DARABONBA_PTR_GET(panes_, vector<Panes::PanesItem>) };
          inline Panes& setPanes(const vector<Panes::PanesItem> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
          inline Panes& setPanes(vector<Panes::PanesItem> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


        protected:
          shared_ptr<vector<Panes::PanesItem>> panes_ {};
        };

        virtual bool empty() const override { return this->audioMixCount_ == nullptr
        && this->layoutId_ == nullptr && this->name_ == nullptr && this->panes_ == nullptr; };
        // audioMixCount Field Functions 
        bool hasAudioMixCount() const { return this->audioMixCount_ != nullptr;};
        void deleteAudioMixCount() { this->audioMixCount_ = nullptr;};
        inline int32_t getAudioMixCount() const { DARABONBA_PTR_GET_DEFAULT(audioMixCount_, 0) };
        inline Layout& setAudioMixCount(int32_t audioMixCount) { DARABONBA_PTR_SET_VALUE(audioMixCount_, audioMixCount) };


        // layoutId Field Functions 
        bool hasLayoutId() const { return this->layoutId_ != nullptr;};
        void deleteLayoutId() { this->layoutId_ = nullptr;};
        inline int64_t getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, 0L) };
        inline Layout& setLayoutId(int64_t layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Layout& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // panes Field Functions 
        bool hasPanes() const { return this->panes_ != nullptr;};
        void deletePanes() { this->panes_ = nullptr;};
        inline const Layout::Panes & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, Layout::Panes) };
        inline Layout::Panes getPanes() { DARABONBA_PTR_GET(panes_, Layout::Panes) };
        inline Layout& setPanes(const Layout::Panes & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
        inline Layout& setPanes(Layout::Panes && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


      protected:
        shared_ptr<int32_t> audioMixCount_ {};
        shared_ptr<int64_t> layoutId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Layout::Panes> panes_ {};
      };

      virtual bool empty() const override { return this->layout_ == nullptr; };
      // layout Field Functions 
      bool hasLayout() const { return this->layout_ != nullptr;};
      void deleteLayout() { this->layout_ = nullptr;};
      inline const vector<Layouts::Layout> & getLayout() const { DARABONBA_PTR_GET_CONST(layout_, vector<Layouts::Layout>) };
      inline vector<Layouts::Layout> getLayout() { DARABONBA_PTR_GET(layout_, vector<Layouts::Layout>) };
      inline Layouts& setLayout(const vector<Layouts::Layout> & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
      inline Layouts& setLayout(vector<Layouts::Layout> && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


    protected:
      shared_ptr<vector<Layouts::Layout>> layout_ {};
    };

    virtual bool empty() const override { return this->layouts_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline const DescribeSystemLayoutListResponseBody::Layouts & getLayouts() const { DARABONBA_PTR_GET_CONST(layouts_, DescribeSystemLayoutListResponseBody::Layouts) };
    inline DescribeSystemLayoutListResponseBody::Layouts getLayouts() { DARABONBA_PTR_GET(layouts_, DescribeSystemLayoutListResponseBody::Layouts) };
    inline DescribeSystemLayoutListResponseBody& setLayouts(const DescribeSystemLayoutListResponseBody::Layouts & layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };
    inline DescribeSystemLayoutListResponseBody& setLayouts(DescribeSystemLayoutListResponseBody::Layouts && layouts) { DARABONBA_PTR_SET_RVALUE(layouts_, layouts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemLayoutListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeSystemLayoutListResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeSystemLayoutListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<DescribeSystemLayoutListResponseBody::Layouts> layouts_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
