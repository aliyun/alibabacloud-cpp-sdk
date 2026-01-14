// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSEMBEDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetWorksEmbedListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorksEmbedListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
      DARABONBA_PTR_TO_JSON(WsId, wsId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorksEmbedListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
      DARABONBA_PTR_FROM_JSON(WsId, wsId_);
    };
    GetWorksEmbedListRequest() = default ;
    GetWorksEmbedListRequest(const GetWorksEmbedListRequest &) = default ;
    GetWorksEmbedListRequest(GetWorksEmbedListRequest &&) = default ;
    GetWorksEmbedListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorksEmbedListRequest() = default ;
    GetWorksEmbedListRequest& operator=(const GetWorksEmbedListRequest &) = default ;
    GetWorksEmbedListRequest& operator=(GetWorksEmbedListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->worksType_ == nullptr && this->wsId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetWorksEmbedListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetWorksEmbedListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetWorksEmbedListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string getWorksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline GetWorksEmbedListRequest& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


    // wsId Field Functions 
    bool hasWsId() const { return this->wsId_ != nullptr;};
    void deleteWsId() { this->wsId_ = nullptr;};
    inline string getWsId() const { DARABONBA_PTR_GET_DEFAULT(wsId_, "") };
    inline GetWorksEmbedListRequest& setWsId(string wsId) { DARABONBA_PTR_SET_VALUE(wsId_, wsId) };


  protected:
    // Report name (fuzzy match)
    shared_ptr<string> keyword_ {};
    // Page number (defaults to 1 if empty)
    shared_ptr<int32_t> pageNo_ {};
    // Number of items per page (defaults to 10 if empty)
    shared_ptr<int32_t> pageSize_ {};
    // Report type
    // 
    // - page, Dashboard
    // - screen, Data Screen
    // - report, Spreadsheet
    // - ANALYSIS, Ad-hoc Analysis
    // - dashboardOfflineQuery, Self-service Data Retrieval
    // - dataForm, Data Entry Form
    shared_ptr<string> worksType_ {};
    // Workspace ID
    shared_ptr<string> wsId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
