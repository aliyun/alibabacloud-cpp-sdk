// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListHostGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountIds, creatorAccountIds_);
      DARABONBA_PTR_TO_JSON(ids, ids_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pageOrder, pageOrder_);
      DARABONBA_PTR_TO_JSON(pageSort, pageSort_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountIds, creatorAccountIds_);
      DARABONBA_PTR_FROM_JSON(ids, ids_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pageOrder, pageOrder_);
      DARABONBA_PTR_FROM_JSON(pageSort, pageSort_);
    };
    ListHostGroupsRequest() = default ;
    ListHostGroupsRequest(const ListHostGroupsRequest &) = default ;
    ListHostGroupsRequest(ListHostGroupsRequest &&) = default ;
    ListHostGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsRequest() = default ;
    ListHostGroupsRequest& operator=(const ListHostGroupsRequest &) = default ;
    ListHostGroupsRequest& operator=(ListHostGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createEndTime_ == nullptr
        && return this->createStartTime_ == nullptr && return this->creatorAccountIds_ == nullptr && return this->ids_ == nullptr && return this->maxResults_ == nullptr && return this->name_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageOrder_ == nullptr && return this->pageSort_ == nullptr; };
    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline int64_t createEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
    inline ListHostGroupsRequest& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline int64_t createStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, 0L) };
    inline ListHostGroupsRequest& setCreateStartTime(int64_t createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // creatorAccountIds Field Functions 
    bool hasCreatorAccountIds() const { return this->creatorAccountIds_ != nullptr;};
    void deleteCreatorAccountIds() { this->creatorAccountIds_ = nullptr;};
    inline string creatorAccountIds() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountIds_, "") };
    inline ListHostGroupsRequest& setCreatorAccountIds(string creatorAccountIds) { DARABONBA_PTR_SET_VALUE(creatorAccountIds_, creatorAccountIds) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ListHostGroupsRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListHostGroupsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHostGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHostGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageOrder Field Functions 
    bool hasPageOrder() const { return this->pageOrder_ != nullptr;};
    void deletePageOrder() { this->pageOrder_ = nullptr;};
    inline string pageOrder() const { DARABONBA_PTR_GET_DEFAULT(pageOrder_, "") };
    inline ListHostGroupsRequest& setPageOrder(string pageOrder) { DARABONBA_PTR_SET_VALUE(pageOrder_, pageOrder) };


    // pageSort Field Functions 
    bool hasPageSort() const { return this->pageSort_ != nullptr;};
    void deletePageSort() { this->pageSort_ = nullptr;};
    inline string pageSort() const { DARABONBA_PTR_GET_DEFAULT(pageSort_, "") };
    inline ListHostGroupsRequest& setPageSort(string pageSort) { DARABONBA_PTR_SET_VALUE(pageSort_, pageSort) };


  protected:
    std::shared_ptr<int64_t> createEndTime_ = nullptr;
    std::shared_ptr<int64_t> createStartTime_ = nullptr;
    std::shared_ptr<string> creatorAccountIds_ = nullptr;
    std::shared_ptr<string> ids_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> pageOrder_ = nullptr;
    std::shared_ptr<string> pageSort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
