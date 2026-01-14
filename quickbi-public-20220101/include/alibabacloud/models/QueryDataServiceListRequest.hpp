// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryDataServiceListRequest() = default ;
    QueryDataServiceListRequest(const QueryDataServiceListRequest &) = default ;
    QueryDataServiceListRequest(QueryDataServiceListRequest &&) = default ;
    QueryDataServiceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListRequest() = default ;
    QueryDataServiceListRequest& operator=(const QueryDataServiceListRequest &) = default ;
    QueryDataServiceListRequest& operator=(QueryDataServiceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->userId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDataServiceListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryDataServiceListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDataServiceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDataServiceListRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Data service name.
    shared_ptr<string> name_ {};
    // Page number. Default value: **1**.
    shared_ptr<int32_t> pageNo_ {};
    // Number of items per page in a paginated query:
    // 
    // - Default value: 10
    // - Maximum value: 1000
    shared_ptr<int32_t> pageSize_ {};
    // User ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
