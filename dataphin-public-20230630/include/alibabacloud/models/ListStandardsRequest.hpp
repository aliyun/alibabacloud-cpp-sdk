// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTANDARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTANDARDSREQUEST_HPP_
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
  class ListStandardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStandardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStandardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListStandardsRequest() = default ;
    ListStandardsRequest(const ListStandardsRequest &) = default ;
    ListStandardsRequest(ListStandardsRequest &&) = default ;
    ListStandardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStandardsRequest() = default ;
    ListStandardsRequest& operator=(const ListStandardsRequest &) = default ;
    ListStandardsRequest& operator=(ListStandardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(StandardSetIdList, standardSetIdList_);
        DARABONBA_PTR_TO_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_TO_JSON(StandardStatusList, standardStatusList_);
        DARABONBA_PTR_TO_JSON(StandardTemplateIdList, standardTemplateIdList_);
        DARABONBA_PTR_TO_JSON(StandardTypeList, standardTypeList_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(StandardSetIdList, standardSetIdList_);
        DARABONBA_PTR_FROM_JSON(StandardStage, standardStage_);
        DARABONBA_PTR_FROM_JSON(StandardStatusList, standardStatusList_);
        DARABONBA_PTR_FROM_JSON(StandardTemplateIdList, standardTemplateIdList_);
        DARABONBA_PTR_FROM_JSON(StandardTypeList, standardTypeList_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->directory_ == nullptr
        && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->standardSetIdList_ == nullptr && this->standardStage_ == nullptr
        && this->standardStatusList_ == nullptr && this->standardTemplateIdList_ == nullptr && this->standardTypeList_ == nullptr && this->userId_ == nullptr; };
      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline ListQuery& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


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


      // standardSetIdList Field Functions 
      bool hasStandardSetIdList() const { return this->standardSetIdList_ != nullptr;};
      void deleteStandardSetIdList() { this->standardSetIdList_ = nullptr;};
      inline const vector<int64_t> & getStandardSetIdList() const { DARABONBA_PTR_GET_CONST(standardSetIdList_, vector<int64_t>) };
      inline vector<int64_t> getStandardSetIdList() { DARABONBA_PTR_GET(standardSetIdList_, vector<int64_t>) };
      inline ListQuery& setStandardSetIdList(const vector<int64_t> & standardSetIdList) { DARABONBA_PTR_SET_VALUE(standardSetIdList_, standardSetIdList) };
      inline ListQuery& setStandardSetIdList(vector<int64_t> && standardSetIdList) { DARABONBA_PTR_SET_RVALUE(standardSetIdList_, standardSetIdList) };


      // standardStage Field Functions 
      bool hasStandardStage() const { return this->standardStage_ != nullptr;};
      void deleteStandardStage() { this->standardStage_ = nullptr;};
      inline string getStandardStage() const { DARABONBA_PTR_GET_DEFAULT(standardStage_, "") };
      inline ListQuery& setStandardStage(string standardStage) { DARABONBA_PTR_SET_VALUE(standardStage_, standardStage) };


      // standardStatusList Field Functions 
      bool hasStandardStatusList() const { return this->standardStatusList_ != nullptr;};
      void deleteStandardStatusList() { this->standardStatusList_ = nullptr;};
      inline const vector<string> & getStandardStatusList() const { DARABONBA_PTR_GET_CONST(standardStatusList_, vector<string>) };
      inline vector<string> getStandardStatusList() { DARABONBA_PTR_GET(standardStatusList_, vector<string>) };
      inline ListQuery& setStandardStatusList(const vector<string> & standardStatusList) { DARABONBA_PTR_SET_VALUE(standardStatusList_, standardStatusList) };
      inline ListQuery& setStandardStatusList(vector<string> && standardStatusList) { DARABONBA_PTR_SET_RVALUE(standardStatusList_, standardStatusList) };


      // standardTemplateIdList Field Functions 
      bool hasStandardTemplateIdList() const { return this->standardTemplateIdList_ != nullptr;};
      void deleteStandardTemplateIdList() { this->standardTemplateIdList_ = nullptr;};
      inline const vector<int64_t> & getStandardTemplateIdList() const { DARABONBA_PTR_GET_CONST(standardTemplateIdList_, vector<int64_t>) };
      inline vector<int64_t> getStandardTemplateIdList() { DARABONBA_PTR_GET(standardTemplateIdList_, vector<int64_t>) };
      inline ListQuery& setStandardTemplateIdList(const vector<int64_t> & standardTemplateIdList) { DARABONBA_PTR_SET_VALUE(standardTemplateIdList_, standardTemplateIdList) };
      inline ListQuery& setStandardTemplateIdList(vector<int64_t> && standardTemplateIdList) { DARABONBA_PTR_SET_RVALUE(standardTemplateIdList_, standardTemplateIdList) };


      // standardTypeList Field Functions 
      bool hasStandardTypeList() const { return this->standardTypeList_ != nullptr;};
      void deleteStandardTypeList() { this->standardTypeList_ = nullptr;};
      inline const vector<string> & getStandardTypeList() const { DARABONBA_PTR_GET_CONST(standardTypeList_, vector<string>) };
      inline vector<string> getStandardTypeList() { DARABONBA_PTR_GET(standardTypeList_, vector<string>) };
      inline ListQuery& setStandardTypeList(const vector<string> & standardTypeList) { DARABONBA_PTR_SET_VALUE(standardTypeList_, standardTypeList) };
      inline ListQuery& setStandardTypeList(vector<string> && standardTypeList) { DARABONBA_PTR_SET_RVALUE(standardTypeList_, standardTypeList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ListQuery& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> directory_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<int64_t>> standardSetIdList_ {};
      // This parameter is required.
      shared_ptr<string> standardStage_ {};
      shared_ptr<vector<string>> standardStatusList_ {};
      shared_ptr<vector<int64_t>> standardTemplateIdList_ {};
      shared_ptr<vector<string>> standardTypeList_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListStandardsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListStandardsRequest::ListQuery) };
    inline ListStandardsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListStandardsRequest::ListQuery) };
    inline ListStandardsRequest& setListQuery(const ListStandardsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListStandardsRequest& setListQuery(ListStandardsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListStandardsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListStandardsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
