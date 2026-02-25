// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomViews, customViews_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomViews, customViews_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomViewsResponseBody() = default ;
    ListCustomViewsResponseBody(const ListCustomViewsResponseBody &) = default ;
    ListCustomViewsResponseBody(ListCustomViewsResponseBody &&) = default ;
    ListCustomViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewsResponseBody() = default ;
    ListCustomViewsResponseBody& operator=(const ListCustomViewsResponseBody &) = default ;
    ListCustomViewsResponseBody& operator=(ListCustomViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomViews& obj) { 
        DARABONBA_PTR_TO_JSON(CustomView, customView_);
      };
      friend void from_json(const Darabonba::Json& j, CustomViews& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomView, customView_);
      };
      CustomViews() = default ;
      CustomViews(const CustomViews &) = default ;
      CustomViews(CustomViews &&) = default ;
      CustomViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomViews() = default ;
      CustomViews& operator=(const CustomViews &) = default ;
      CustomViews& operator=(CustomViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomView : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomView& obj) { 
          DARABONBA_PTR_TO_JSON(CustomViewId, customViewId_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        };
        friend void from_json(const Darabonba::Json& j, CustomView& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomViewId, customViewId_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        };
        CustomView() = default ;
        CustomView(const CustomView &) = default ;
        CustomView(CustomView &&) = default ;
        CustomView(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomView() = default ;
        CustomView& operator=(const CustomView &) = default ;
        CustomView& operator=(CustomView &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customViewId_ == nullptr
        && this->imageUrl_ == nullptr; };
        // customViewId Field Functions 
        bool hasCustomViewId() const { return this->customViewId_ != nullptr;};
        void deleteCustomViewId() { this->customViewId_ = nullptr;};
        inline string getCustomViewId() const { DARABONBA_PTR_GET_DEFAULT(customViewId_, "") };
        inline CustomView& setCustomViewId(string customViewId) { DARABONBA_PTR_SET_VALUE(customViewId_, customViewId) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline CustomView& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      protected:
        shared_ptr<string> customViewId_ {};
        shared_ptr<string> imageUrl_ {};
      };

      virtual bool empty() const override { return this->customView_ == nullptr; };
      // customView Field Functions 
      bool hasCustomView() const { return this->customView_ != nullptr;};
      void deleteCustomView() { this->customView_ = nullptr;};
      inline const vector<CustomViews::CustomView> & getCustomView() const { DARABONBA_PTR_GET_CONST(customView_, vector<CustomViews::CustomView>) };
      inline vector<CustomViews::CustomView> getCustomView() { DARABONBA_PTR_GET(customView_, vector<CustomViews::CustomView>) };
      inline CustomViews& setCustomView(const vector<CustomViews::CustomView> & customView) { DARABONBA_PTR_SET_VALUE(customView_, customView) };
      inline CustomViews& setCustomView(vector<CustomViews::CustomView> && customView) { DARABONBA_PTR_SET_RVALUE(customView_, customView) };


    protected:
      shared_ptr<vector<CustomViews::CustomView>> customView_ {};
    };

    virtual bool empty() const override { return this->customViews_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // customViews Field Functions 
    bool hasCustomViews() const { return this->customViews_ != nullptr;};
    void deleteCustomViews() { this->customViews_ = nullptr;};
    inline const ListCustomViewsResponseBody::CustomViews & getCustomViews() const { DARABONBA_PTR_GET_CONST(customViews_, ListCustomViewsResponseBody::CustomViews) };
    inline ListCustomViewsResponseBody::CustomViews getCustomViews() { DARABONBA_PTR_GET(customViews_, ListCustomViewsResponseBody::CustomViews) };
    inline ListCustomViewsResponseBody& setCustomViews(const ListCustomViewsResponseBody::CustomViews & customViews) { DARABONBA_PTR_SET_VALUE(customViews_, customViews) };
    inline ListCustomViewsResponseBody& setCustomViews(ListCustomViewsResponseBody::CustomViews && customViews) { DARABONBA_PTR_SET_RVALUE(customViews_, customViews) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomViewsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomViewsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListCustomViewsResponseBody::CustomViews> customViews_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
