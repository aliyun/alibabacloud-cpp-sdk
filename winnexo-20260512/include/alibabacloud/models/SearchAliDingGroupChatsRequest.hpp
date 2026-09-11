// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALIDINGGROUPCHATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALIDINGGROUPCHATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SearchAliDingGroupChatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAliDingGroupChatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cursor, cursor_);
      DARABONBA_PTR_TO_JSON(excludeMuted, excludeMuted_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAliDingGroupChatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(excludeMuted, excludeMuted_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SearchAliDingGroupChatsRequest() = default ;
    SearchAliDingGroupChatsRequest(const SearchAliDingGroupChatsRequest &) = default ;
    SearchAliDingGroupChatsRequest(SearchAliDingGroupChatsRequest &&) = default ;
    SearchAliDingGroupChatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAliDingGroupChatsRequest() = default ;
    SearchAliDingGroupChatsRequest& operator=(const SearchAliDingGroupChatsRequest &) = default ;
    SearchAliDingGroupChatsRequest& operator=(SearchAliDingGroupChatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cursor_ == nullptr
        && this->excludeMuted_ == nullptr && this->keyword_ == nullptr && this->pageSize_ == nullptr && this->tenantId_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline SearchAliDingGroupChatsRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // excludeMuted Field Functions 
    bool hasExcludeMuted() const { return this->excludeMuted_ != nullptr;};
    void deleteExcludeMuted() { this->excludeMuted_ = nullptr;};
    inline bool getExcludeMuted() const { DARABONBA_PTR_GET_DEFAULT(excludeMuted_, false) };
    inline SearchAliDingGroupChatsRequest& setExcludeMuted(bool excludeMuted) { DARABONBA_PTR_SET_VALUE(excludeMuted_, excludeMuted) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchAliDingGroupChatsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAliDingGroupChatsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SearchAliDingGroupChatsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 分页游标，首页传 0
    shared_ptr<string> cursor_ {};
    // 是否排除免打扰群聊
    shared_ptr<bool> excludeMuted_ {};
    // 群聊搜索关键词
    // 
    // This parameter is required.
    shared_ptr<string> keyword_ {};
    // 每页条数，范围 1-100
    shared_ptr<int32_t> pageSize_ {};
    // 租户 ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
