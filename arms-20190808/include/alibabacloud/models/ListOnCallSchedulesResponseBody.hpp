// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListOnCallSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnCallSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnCallSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOnCallSchedulesResponseBody() = default ;
    ListOnCallSchedulesResponseBody(const ListOnCallSchedulesResponseBody &) = default ;
    ListOnCallSchedulesResponseBody(ListOnCallSchedulesResponseBody &&) = default ;
    ListOnCallSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnCallSchedulesResponseBody() = default ;
    ListOnCallSchedulesResponseBody& operator=(const ListOnCallSchedulesResponseBody &) = default ;
    ListOnCallSchedulesResponseBody& operator=(ListOnCallSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(OnCallSchedules, onCallSchedules_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(OnCallSchedules, onCallSchedules_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OnCallSchedules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnCallSchedules& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, OnCallSchedules& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        OnCallSchedules() = default ;
        OnCallSchedules(const OnCallSchedules &) = default ;
        OnCallSchedules(OnCallSchedules &&) = default ;
        OnCallSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnCallSchedules() = default ;
        OnCallSchedules& operator=(const OnCallSchedules &) = default ;
        OnCallSchedules& operator=(OnCallSchedules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OnCallSchedules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline OnCallSchedules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline OnCallSchedules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the scheduling policy.
        shared_ptr<string> description_ {};
        // The ID of the scheduling policy.
        shared_ptr<int64_t> id_ {};
        // The name of the scheduling policy.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->onCallSchedules_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // onCallSchedules Field Functions 
      bool hasOnCallSchedules() const { return this->onCallSchedules_ != nullptr;};
      void deleteOnCallSchedules() { this->onCallSchedules_ = nullptr;};
      inline const vector<PageBean::OnCallSchedules> & getOnCallSchedules() const { DARABONBA_PTR_GET_CONST(onCallSchedules_, vector<PageBean::OnCallSchedules>) };
      inline vector<PageBean::OnCallSchedules> getOnCallSchedules() { DARABONBA_PTR_GET(onCallSchedules_, vector<PageBean::OnCallSchedules>) };
      inline PageBean& setOnCallSchedules(const vector<PageBean::OnCallSchedules> & onCallSchedules) { DARABONBA_PTR_SET_VALUE(onCallSchedules_, onCallSchedules) };
      inline PageBean& setOnCallSchedules(vector<PageBean::OnCallSchedules> && onCallSchedules) { DARABONBA_PTR_SET_RVALUE(onCallSchedules_, onCallSchedules) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The information about the scheduling policy.
      shared_ptr<vector<PageBean::OnCallSchedules>> onCallSchedules_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListOnCallSchedulesResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListOnCallSchedulesResponseBody::PageBean) };
    inline ListOnCallSchedulesResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListOnCallSchedulesResponseBody::PageBean) };
    inline ListOnCallSchedulesResponseBody& setPageBean(const ListOnCallSchedulesResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListOnCallSchedulesResponseBody& setPageBean(ListOnCallSchedulesResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOnCallSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that were returned.
    shared_ptr<ListOnCallSchedulesResponseBody::PageBean> pageBean_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
