// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODY_HPP_
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
  class ListCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToolInfoList, toolInfoList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToolInfoList, toolInfoList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCommandResponseBody() = default ;
    ListCommandResponseBody(const ListCommandResponseBody &) = default ;
    ListCommandResponseBody(ListCommandResponseBody &&) = default ;
    ListCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandResponseBody() = default ;
    ListCommandResponseBody& operator=(const ListCommandResponseBody &) = default ;
    ListCommandResponseBody& operator=(ListCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
        DARABONBA_PTR_TO_JSON(ToolId, toolId_);
        DARABONBA_PTR_TO_JSON(ToolName, toolName_);
        DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
      };
      friend void from_json(const Darabonba::Json& j, ToolInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
        DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
        DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
        DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
      };
      ToolInfoList() = default ;
      ToolInfoList(const ToolInfoList &) = default ;
      ToolInfoList(ToolInfoList &&) = default ;
      ToolInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolInfoList() = default ;
      ToolInfoList& operator=(const ToolInfoList &) = default ;
      ToolInfoList& operator=(ToolInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ToolParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolParams& obj) { 
          DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
          DARABONBA_PTR_TO_JSON(ParamExample, paramExample_);
          DARABONBA_PTR_TO_JSON(ParamName, paramName_);
        };
        friend void from_json(const Darabonba::Json& j, ToolParams& obj) { 
          DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
          DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
          DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
        };
        ToolParams() = default ;
        ToolParams(const ToolParams &) = default ;
        ToolParams(ToolParams &&) = default ;
        ToolParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolParams() = default ;
        ToolParams& operator=(const ToolParams &) = default ;
        ToolParams& operator=(ToolParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->paramDesc_ == nullptr
        && this->paramExample_ == nullptr && this->paramName_ == nullptr; };
        // paramDesc Field Functions 
        bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
        void deleteParamDesc() { this->paramDesc_ = nullptr;};
        inline string getParamDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
        inline ToolParams& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


        // paramExample Field Functions 
        bool hasParamExample() const { return this->paramExample_ != nullptr;};
        void deleteParamExample() { this->paramExample_ = nullptr;};
        inline string getParamExample() const { DARABONBA_PTR_GET_DEFAULT(paramExample_, "") };
        inline ToolParams& setParamExample(string paramExample) { DARABONBA_PTR_SET_VALUE(paramExample_, paramExample) };


        // paramName Field Functions 
        bool hasParamName() const { return this->paramName_ != nullptr;};
        void deleteParamName() { this->paramName_ = nullptr;};
        inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
        inline ToolParams& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


      protected:
        shared_ptr<string> paramDesc_ {};
        shared_ptr<string> paramExample_ {};
        shared_ptr<string> paramName_ {};
      };

      class ToolExamples : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolExamples& obj) { 
          DARABONBA_PTR_TO_JSON(Query, query_);
        };
        friend void from_json(const Darabonba::Json& j, ToolExamples& obj) { 
          DARABONBA_PTR_FROM_JSON(Query, query_);
        };
        ToolExamples() = default ;
        ToolExamples(const ToolExamples &) = default ;
        ToolExamples(ToolExamples &&) = default ;
        ToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolExamples() = default ;
        ToolExamples& operator=(const ToolExamples &) = default ;
        ToolExamples& operator=(ToolExamples &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->query_ == nullptr; };
        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline ToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        shared_ptr<string> query_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->domainCode_ == nullptr && this->domainName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->toolExamples_ == nullptr
        && this->toolId_ == nullptr && this->toolName_ == nullptr && this->toolParams_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ToolInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
      inline ToolInfoList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline ToolInfoList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ToolInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainCode Field Functions 
      bool hasDomainCode() const { return this->domainCode_ != nullptr;};
      void deleteDomainCode() { this->domainCode_ = nullptr;};
      inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
      inline ToolInfoList& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline ToolInfoList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ToolInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ToolInfoList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
      inline ToolInfoList& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline ToolInfoList& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // toolExamples Field Functions 
      bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
      void deleteToolExamples() { this->toolExamples_ = nullptr;};
      inline const vector<ToolInfoList::ToolExamples> & getToolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<ToolInfoList::ToolExamples>) };
      inline vector<ToolInfoList::ToolExamples> getToolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<ToolInfoList::ToolExamples>) };
      inline ToolInfoList& setToolExamples(const vector<ToolInfoList::ToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
      inline ToolInfoList& setToolExamples(vector<ToolInfoList::ToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


      // toolId Field Functions 
      bool hasToolId() const { return this->toolId_ != nullptr;};
      void deleteToolId() { this->toolId_ = nullptr;};
      inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
      inline ToolInfoList& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline ToolInfoList& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


      // toolParams Field Functions 
      bool hasToolParams() const { return this->toolParams_ != nullptr;};
      void deleteToolParams() { this->toolParams_ = nullptr;};
      inline const vector<ToolInfoList::ToolParams> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<ToolInfoList::ToolParams>) };
      inline vector<ToolInfoList::ToolParams> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<ToolInfoList::ToolParams>) };
      inline ToolInfoList& setToolParams(const vector<ToolInfoList::ToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
      inline ToolInfoList& setToolParams(vector<ToolInfoList::ToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> createUserId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> domainCode_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> modifyUserId_ {};
      shared_ptr<string> modifyUserName_ {};
      shared_ptr<vector<ToolInfoList::ToolExamples>> toolExamples_ {};
      shared_ptr<string> toolId_ {};
      shared_ptr<string> toolName_ {};
      shared_ptr<vector<ToolInfoList::ToolParams>> toolParams_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->toolInfoList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommandResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommandResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toolInfoList Field Functions 
    bool hasToolInfoList() const { return this->toolInfoList_ != nullptr;};
    void deleteToolInfoList() { this->toolInfoList_ = nullptr;};
    inline const vector<ListCommandResponseBody::ToolInfoList> & getToolInfoList() const { DARABONBA_PTR_GET_CONST(toolInfoList_, vector<ListCommandResponseBody::ToolInfoList>) };
    inline vector<ListCommandResponseBody::ToolInfoList> getToolInfoList() { DARABONBA_PTR_GET(toolInfoList_, vector<ListCommandResponseBody::ToolInfoList>) };
    inline ListCommandResponseBody& setToolInfoList(const vector<ListCommandResponseBody::ToolInfoList> & toolInfoList) { DARABONBA_PTR_SET_VALUE(toolInfoList_, toolInfoList) };
    inline ListCommandResponseBody& setToolInfoList(vector<ListCommandResponseBody::ToolInfoList> && toolInfoList) { DARABONBA_PTR_SET_RVALUE(toolInfoList_, toolInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCommandResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListCommandResponseBody::ToolInfoList>> toolInfoList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
