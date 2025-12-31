// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLENDENTITYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLENDENTITYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListAllEndEntityInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllEndEntityInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RecursiveChildren, recursiveChildren_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllEndEntityInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RecursiveChildren, recursiveChildren_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    ListAllEndEntityInstanceRequest() = default ;
    ListAllEndEntityInstanceRequest(const ListAllEndEntityInstanceRequest &) = default ;
    ListAllEndEntityInstanceRequest(ListAllEndEntityInstanceRequest &&) = default ;
    ListAllEndEntityInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllEndEntityInstanceRequest() = default ;
    ListAllEndEntityInstanceRequest& operator=(const ListAllEndEntityInstanceRequest &) = default ;
    ListAllEndEntityInstanceRequest& operator=(ListAllEndEntityInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->parentId_ == nullptr && this->recursiveChildren_ == nullptr && this->showSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAllEndEntityInstanceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAllEndEntityInstanceRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAllEndEntityInstanceRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline ListAllEndEntityInstanceRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // recursiveChildren Field Functions 
    bool hasRecursiveChildren() const { return this->recursiveChildren_ != nullptr;};
    void deleteRecursiveChildren() { this->recursiveChildren_ = nullptr;};
    inline int32_t getRecursiveChildren() const { DARABONBA_PTR_GET_DEFAULT(recursiveChildren_, 0) };
    inline ListAllEndEntityInstanceRequest& setRecursiveChildren(int32_t recursiveChildren) { DARABONBA_PTR_SET_VALUE(recursiveChildren_, recursiveChildren) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListAllEndEntityInstanceRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> parentId_ {};
    shared_ptr<int32_t> recursiveChildren_ {};
    shared_ptr<int32_t> showSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
