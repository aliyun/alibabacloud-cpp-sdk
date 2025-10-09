// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ListDownstreamTasksRequest() = default ;
    ListDownstreamTasksRequest(const ListDownstreamTasksRequest &) = default ;
    ListDownstreamTasksRequest(ListDownstreamTasksRequest &&) = default ;
    ListDownstreamTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTasksRequest() = default ;
    ListDownstreamTasksRequest& operator=(const ListDownstreamTasksRequest &) = default ;
    ListDownstreamTasksRequest& operator=(ListDownstreamTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectEnv_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDownstreamTasksRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDownstreamTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDownstreamTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListDownstreamTasksRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The environment of the workspace.
    // 
    // Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
