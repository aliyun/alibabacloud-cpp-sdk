// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYCLASSIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYCLASSIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSecurityClassifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityClassifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityClassifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListSecurityClassifyRequest() = default ;
    ListSecurityClassifyRequest(const ListSecurityClassifyRequest &) = default ;
    ListSecurityClassifyRequest(ListSecurityClassifyRequest &&) = default ;
    ListSecurityClassifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityClassifyRequest() = default ;
    ListSecurityClassifyRequest& operator=(const ListSecurityClassifyRequest &) = default ;
    ListSecurityClassifyRequest& operator=(ListSecurityClassifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(LevelIndex, levelIndex_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
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
      virtual bool empty() const override { return this->levelIndex_ == nullptr
        && this->name_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->statusList_ == nullptr; };
      // levelIndex Field Functions 
      bool hasLevelIndex() const { return this->levelIndex_ != nullptr;};
      void deleteLevelIndex() { this->levelIndex_ = nullptr;};
      inline int64_t getLevelIndex() const { DARABONBA_PTR_GET_DEFAULT(levelIndex_, 0L) };
      inline ListQuery& setLevelIndex(int64_t levelIndex) { DARABONBA_PTR_SET_VALUE(levelIndex_, levelIndex) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ListQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    protected:
      // The data level ID.
      shared_ptr<int64_t> levelIndex_ {};
      // The classification name. Fuzzy match is supported.
      shared_ptr<string> name_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The list of effective statuses. Valid values: ENABLE, DISABLE.
      shared_ptr<vector<string>> statusList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListSecurityClassifyRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListSecurityClassifyRequest::ListQuery) };
    inline ListSecurityClassifyRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListSecurityClassifyRequest::ListQuery) };
    inline ListSecurityClassifyRequest& setListQuery(const ListSecurityClassifyRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListSecurityClassifyRequest& setListQuery(ListSecurityClassifyRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListSecurityClassifyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The query conditions.
    shared_ptr<ListSecurityClassifyRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
