// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServicePublishedApisRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDataServicePublishedApisRequestListQuery() = default ;
    ListDataServicePublishedApisRequestListQuery(const ListDataServicePublishedApisRequestListQuery &) = default ;
    ListDataServicePublishedApisRequestListQuery(ListDataServicePublishedApisRequestListQuery &&) = default ;
    ListDataServicePublishedApisRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisRequestListQuery() = default ;
    ListDataServicePublishedApisRequestListQuery& operator=(const ListDataServicePublishedApisRequestListQuery &) = default ;
    ListDataServicePublishedApisRequestListQuery& operator=(ListDataServicePublishedApisRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->groupId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServicePublishedApisRequestListQuery& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ListDataServicePublishedApisRequestListQuery& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListDataServicePublishedApisRequestListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServicePublishedApisRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int32_t> groupId_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
