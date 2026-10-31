// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPYTHONMODULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPYTHONMODULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPythonModulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPythonModulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPythonModulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListPythonModulesRequest() = default ;
    ListPythonModulesRequest(const ListPythonModulesRequest &) = default ;
    ListPythonModulesRequest(ListPythonModulesRequest &&) = default ;
    ListPythonModulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPythonModulesRequest() = default ;
    ListPythonModulesRequest& operator=(const ListPythonModulesRequest &) = default ;
    ListPythonModulesRequest& operator=(ListPythonModulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PythonModuleId, pythonModuleId_);
        DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PythonModuleId, pythonModuleId_);
        DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pythonModuleId_ == nullptr && this->pythonVersion_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pythonModuleId Field Functions 
      bool hasPythonModuleId() const { return this->pythonModuleId_ != nullptr;};
      void deletePythonModuleId() { this->pythonModuleId_ = nullptr;};
      inline int64_t getPythonModuleId() const { DARABONBA_PTR_GET_DEFAULT(pythonModuleId_, 0L) };
      inline ListQuery& setPythonModuleId(int64_t pythonModuleId) { DARABONBA_PTR_SET_VALUE(pythonModuleId_, pythonModuleId) };


      // pythonVersion Field Functions 
      bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
      void deletePythonVersion() { this->pythonVersion_ = nullptr;};
      inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
      inline ListQuery& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


    protected:
      // The keyword of the third-party package name.
      shared_ptr<string> keyword_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The ID of the Python third-party package.
      shared_ptr<int64_t> pythonModuleId_ {};
      // The Python version. Valid values: PYTHON_2_7, PYTHON_3_7, and PYTHON_3_11.
      shared_ptr<string> pythonVersion_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListPythonModulesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListPythonModulesRequest::ListQuery) };
    inline ListPythonModulesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListPythonModulesRequest::ListQuery) };
    inline ListPythonModulesRequest& setListQuery(const ListPythonModulesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListPythonModulesRequest& setListQuery(ListPythonModulesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListPythonModulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListPythonModulesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The paging conditions for the paged query.
    // 
    // This parameter is required.
    shared_ptr<ListPythonModulesRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
