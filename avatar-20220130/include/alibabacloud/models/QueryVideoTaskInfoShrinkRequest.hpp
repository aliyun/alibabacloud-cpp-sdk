// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryVideoTaskInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoTaskInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, appShrink_);
      DARABONBA_PTR_TO_JSON(OrderById, orderById_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoTaskInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, appShrink_);
      DARABONBA_PTR_FROM_JSON(OrderById, orderById_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskUuid, taskUuid_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryVideoTaskInfoShrinkRequest() = default ;
    QueryVideoTaskInfoShrinkRequest(const QueryVideoTaskInfoShrinkRequest &) = default ;
    QueryVideoTaskInfoShrinkRequest(QueryVideoTaskInfoShrinkRequest &&) = default ;
    QueryVideoTaskInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoTaskInfoShrinkRequest() = default ;
    QueryVideoTaskInfoShrinkRequest& operator=(const QueryVideoTaskInfoShrinkRequest &) = default ;
    QueryVideoTaskInfoShrinkRequest& operator=(QueryVideoTaskInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appShrink_ != nullptr
        && this->orderById_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr && this->taskUuid_ != nullptr
        && this->tenantId_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // appShrink Field Functions 
    bool hasAppShrink() const { return this->appShrink_ != nullptr;};
    void deleteAppShrink() { this->appShrink_ = nullptr;};
    inline string appShrink() const { DARABONBA_PTR_GET_DEFAULT(appShrink_, "") };
    inline QueryVideoTaskInfoShrinkRequest& setAppShrink(string appShrink) { DARABONBA_PTR_SET_VALUE(appShrink_, appShrink) };


    // orderById Field Functions 
    bool hasOrderById() const { return this->orderById_ != nullptr;};
    void deleteOrderById() { this->orderById_ = nullptr;};
    inline string orderById() const { DARABONBA_PTR_GET_DEFAULT(orderById_, "") };
    inline QueryVideoTaskInfoShrinkRequest& setOrderById(string orderById) { DARABONBA_PTR_SET_VALUE(orderById_, orderById) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryVideoTaskInfoShrinkRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryVideoTaskInfoShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryVideoTaskInfoShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskUuid Field Functions 
    bool hasTaskUuid() const { return this->taskUuid_ != nullptr;};
    void deleteTaskUuid() { this->taskUuid_ = nullptr;};
    inline string taskUuid() const { DARABONBA_PTR_GET_DEFAULT(taskUuid_, "") };
    inline QueryVideoTaskInfoShrinkRequest& setTaskUuid(string taskUuid) { DARABONBA_PTR_SET_VALUE(taskUuid_, taskUuid) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline QueryVideoTaskInfoShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryVideoTaskInfoShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryVideoTaskInfoShrinkRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appShrink_ = nullptr;
    std::shared_ptr<string> orderById_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
