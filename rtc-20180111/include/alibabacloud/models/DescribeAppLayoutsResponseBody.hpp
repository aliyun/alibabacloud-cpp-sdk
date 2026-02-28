// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODY_HPP_
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
  class DescribeAppLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeAppLayoutsResponseBody() = default ;
    DescribeAppLayoutsResponseBody(const DescribeAppLayoutsResponseBody &) = default ;
    DescribeAppLayoutsResponseBody(DescribeAppLayoutsResponseBody &&) = default ;
    DescribeAppLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppLayoutsResponseBody() = default ;
    DescribeAppLayoutsResponseBody& operator=(const DescribeAppLayoutsResponseBody &) = default ;
    DescribeAppLayoutsResponseBody& operator=(DescribeAppLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layouts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layouts& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Panes, panes_);
      };
      friend void from_json(const Darabonba::Json& j, Layouts& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Panes, panes_);
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
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Panes& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // paneId Field Functions 
        bool hasPaneId() const { return this->paneId_ != nullptr;};
        void deletePaneId() { this->paneId_ = nullptr;};
        inline int32_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
        inline Panes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Panes& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Panes& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Panes& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Panes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<float> height_ {};
        shared_ptr<int32_t> paneId_ {};
        shared_ptr<float> width_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      virtual bool empty() const override { return this->layoutId_ == nullptr
        && this->name_ == nullptr && this->panes_ == nullptr; };
      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline Layouts& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Layouts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // panes Field Functions 
      bool hasPanes() const { return this->panes_ != nullptr;};
      void deletePanes() { this->panes_ = nullptr;};
      inline const vector<Layouts::Panes> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Layouts::Panes>) };
      inline vector<Layouts::Panes> getPanes() { DARABONBA_PTR_GET(panes_, vector<Layouts::Panes>) };
      inline Layouts& setPanes(const vector<Layouts::Panes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
      inline Layouts& setPanes(vector<Layouts::Panes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    protected:
      shared_ptr<string> layoutId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Layouts::Panes>> panes_ {};
    };

    virtual bool empty() const override { return this->layouts_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline const vector<DescribeAppLayoutsResponseBody::Layouts> & getLayouts() const { DARABONBA_PTR_GET_CONST(layouts_, vector<DescribeAppLayoutsResponseBody::Layouts>) };
    inline vector<DescribeAppLayoutsResponseBody::Layouts> getLayouts() { DARABONBA_PTR_GET(layouts_, vector<DescribeAppLayoutsResponseBody::Layouts>) };
    inline DescribeAppLayoutsResponseBody& setLayouts(const vector<DescribeAppLayoutsResponseBody::Layouts> & layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };
    inline DescribeAppLayoutsResponseBody& setLayouts(vector<DescribeAppLayoutsResponseBody::Layouts> && layouts) { DARABONBA_PTR_SET_RVALUE(layouts_, layouts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeAppLayoutsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAppLayoutsResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<DescribeAppLayoutsResponseBody::Layouts>> layouts_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
