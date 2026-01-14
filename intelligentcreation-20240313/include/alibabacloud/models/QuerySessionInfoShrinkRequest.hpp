// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QuerySessionInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(statusList, statusListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(statusList, statusListShrink_);
    };
    QuerySessionInfoShrinkRequest() = default ;
    QuerySessionInfoShrinkRequest(const QuerySessionInfoShrinkRequest &) = default ;
    QuerySessionInfoShrinkRequest(QuerySessionInfoShrinkRequest &&) = default ;
    QuerySessionInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionInfoShrinkRequest() = default ;
    QuerySessionInfoShrinkRequest& operator=(const QuerySessionInfoShrinkRequest &) = default ;
    QuerySessionInfoShrinkRequest& operator=(QuerySessionInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->statusListShrink_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QuerySessionInfoShrinkRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySessionInfoShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QuerySessionInfoShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string getStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline QuerySessionInfoShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> statusListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
