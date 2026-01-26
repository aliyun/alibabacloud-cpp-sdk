// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODY_HPP_
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
  class ListEscalationPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEscalationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEscalationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEscalationPoliciesResponseBody() = default ;
    ListEscalationPoliciesResponseBody(const ListEscalationPoliciesResponseBody &) = default ;
    ListEscalationPoliciesResponseBody(ListEscalationPoliciesResponseBody &&) = default ;
    ListEscalationPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEscalationPoliciesResponseBody() = default ;
    ListEscalationPoliciesResponseBody& operator=(const ListEscalationPoliciesResponseBody &) = default ;
    ListEscalationPoliciesResponseBody& operator=(ListEscalationPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(EscalationPolicies, escalationPolicies_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(EscalationPolicies, escalationPolicies_);
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
      class EscalationPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EscalationPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EscalationPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EscalationPolicies() = default ;
        EscalationPolicies(const EscalationPolicies &) = default ;
        EscalationPolicies(EscalationPolicies &&) = default ;
        EscalationPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EscalationPolicies() = default ;
        EscalationPolicies& operator=(const EscalationPolicies &) = default ;
        EscalationPolicies& operator=(EscalationPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline EscalationPolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EscalationPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the escalation policy.
        shared_ptr<int64_t> id_ {};
        // The name of the escalation policy.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->escalationPolicies_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // escalationPolicies Field Functions 
      bool hasEscalationPolicies() const { return this->escalationPolicies_ != nullptr;};
      void deleteEscalationPolicies() { this->escalationPolicies_ = nullptr;};
      inline const vector<PageBean::EscalationPolicies> & getEscalationPolicies() const { DARABONBA_PTR_GET_CONST(escalationPolicies_, vector<PageBean::EscalationPolicies>) };
      inline vector<PageBean::EscalationPolicies> getEscalationPolicies() { DARABONBA_PTR_GET(escalationPolicies_, vector<PageBean::EscalationPolicies>) };
      inline PageBean& setEscalationPolicies(const vector<PageBean::EscalationPolicies> & escalationPolicies) { DARABONBA_PTR_SET_VALUE(escalationPolicies_, escalationPolicies) };
      inline PageBean& setEscalationPolicies(vector<PageBean::EscalationPolicies> && escalationPolicies) { DARABONBA_PTR_SET_RVALUE(escalationPolicies_, escalationPolicies) };


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
      // The list of escalation policies.
      shared_ptr<vector<PageBean::EscalationPolicies>> escalationPolicies_ {};
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
    inline const ListEscalationPoliciesResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListEscalationPoliciesResponseBody::PageBean) };
    inline ListEscalationPoliciesResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListEscalationPoliciesResponseBody::PageBean) };
    inline ListEscalationPoliciesResponseBody& setPageBean(const ListEscalationPoliciesResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListEscalationPoliciesResponseBody& setPageBean(ListEscalationPoliciesResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEscalationPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned objects.
    shared_ptr<ListEscalationPoliciesResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
