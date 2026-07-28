// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfoList, domainInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfoList, domainInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDomainResponseBody() = default ;
    ListDomainResponseBody(const ListDomainResponseBody &) = default ;
    ListDomainResponseBody(ListDomainResponseBody &&) = default ;
    ListDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainResponseBody() = default ;
    ListDomainResponseBody& operator=(const ListDomainResponseBody &) = default ;
    ListDomainResponseBody& operator=(ListDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ToolCount, toolCount_);
        DARABONBA_PTR_TO_JSON(ToolList, toolList_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ToolCount, toolCount_);
        DARABONBA_PTR_FROM_JSON(ToolList, toolList_);
      };
      DomainInfoList() = default ;
      DomainInfoList(const DomainInfoList &) = default ;
      DomainInfoList(DomainInfoList &&) = default ;
      DomainInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfoList() = default ;
      DomainInfoList& operator=(const DomainInfoList &) = default ;
      DomainInfoList& operator=(DomainInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ToolList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolList& obj) { 
          DARABONBA_PTR_TO_JSON(ToolCode, toolCode_);
          DARABONBA_PTR_TO_JSON(ToolName, toolName_);
        };
        friend void from_json(const Darabonba::Json& j, ToolList& obj) { 
          DARABONBA_PTR_FROM_JSON(ToolCode, toolCode_);
          DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
        };
        ToolList() = default ;
        ToolList(const ToolList &) = default ;
        ToolList(ToolList &&) = default ;
        ToolList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolList() = default ;
        ToolList& operator=(const ToolList &) = default ;
        ToolList& operator=(ToolList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->toolCode_ == nullptr
        && this->toolName_ == nullptr; };
        // toolCode Field Functions 
        bool hasToolCode() const { return this->toolCode_ != nullptr;};
        void deleteToolCode() { this->toolCode_ = nullptr;};
        inline string getToolCode() const { DARABONBA_PTR_GET_DEFAULT(toolCode_, "") };
        inline ToolList& setToolCode(string toolCode) { DARABONBA_PTR_SET_VALUE(toolCode_, toolCode) };


        // toolName Field Functions 
        bool hasToolName() const { return this->toolName_ != nullptr;};
        void deleteToolName() { this->toolName_ = nullptr;};
        inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
        inline ToolList& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


      protected:
        shared_ptr<string> toolCode_ {};
        shared_ptr<string> toolName_ {};
      };

      virtual bool empty() const override { return this->domainCode_ == nullptr
        && this->domainName_ == nullptr && this->toolCount_ == nullptr && this->toolList_ == nullptr; };
      // domainCode Field Functions 
      bool hasDomainCode() const { return this->domainCode_ != nullptr;};
      void deleteDomainCode() { this->domainCode_ = nullptr;};
      inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
      inline DomainInfoList& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainInfoList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // toolCount Field Functions 
      bool hasToolCount() const { return this->toolCount_ != nullptr;};
      void deleteToolCount() { this->toolCount_ = nullptr;};
      inline int32_t getToolCount() const { DARABONBA_PTR_GET_DEFAULT(toolCount_, 0) };
      inline DomainInfoList& setToolCount(int32_t toolCount) { DARABONBA_PTR_SET_VALUE(toolCount_, toolCount) };


      // toolList Field Functions 
      bool hasToolList() const { return this->toolList_ != nullptr;};
      void deleteToolList() { this->toolList_ = nullptr;};
      inline const vector<DomainInfoList::ToolList> & getToolList() const { DARABONBA_PTR_GET_CONST(toolList_, vector<DomainInfoList::ToolList>) };
      inline vector<DomainInfoList::ToolList> getToolList() { DARABONBA_PTR_GET(toolList_, vector<DomainInfoList::ToolList>) };
      inline DomainInfoList& setToolList(const vector<DomainInfoList::ToolList> & toolList) { DARABONBA_PTR_SET_VALUE(toolList_, toolList) };
      inline DomainInfoList& setToolList(vector<DomainInfoList::ToolList> && toolList) { DARABONBA_PTR_SET_RVALUE(toolList_, toolList) };


    protected:
      shared_ptr<string> domainCode_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<int32_t> toolCount_ {};
      shared_ptr<vector<DomainInfoList::ToolList>> toolList_ {};
    };

    virtual bool empty() const override { return this->domainInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainInfoList Field Functions 
    bool hasDomainInfoList() const { return this->domainInfoList_ != nullptr;};
    void deleteDomainInfoList() { this->domainInfoList_ = nullptr;};
    inline const vector<ListDomainResponseBody::DomainInfoList> & getDomainInfoList() const { DARABONBA_PTR_GET_CONST(domainInfoList_, vector<ListDomainResponseBody::DomainInfoList>) };
    inline vector<ListDomainResponseBody::DomainInfoList> getDomainInfoList() { DARABONBA_PTR_GET(domainInfoList_, vector<ListDomainResponseBody::DomainInfoList>) };
    inline ListDomainResponseBody& setDomainInfoList(const vector<ListDomainResponseBody::DomainInfoList> & domainInfoList) { DARABONBA_PTR_SET_VALUE(domainInfoList_, domainInfoList) };
    inline ListDomainResponseBody& setDomainInfoList(vector<ListDomainResponseBody::DomainInfoList> && domainInfoList) { DARABONBA_PTR_SET_RVALUE(domainInfoList_, domainInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDomainResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDomainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDomainResponseBody::DomainInfoList>> domainInfoList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
