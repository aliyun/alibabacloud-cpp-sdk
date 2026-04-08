// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EntityQualifiedName, entityQualifiedName_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EntityQualifiedName, entityQualifiedName_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListLineageRequest() = default ;
    ListLineageRequest(const ListLineageRequest &) = default ;
    ListLineageRequest(ListLineageRequest &&) = default ;
    ListLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageRequest() = default ;
    ListLineageRequest& operator=(const ListLineageRequest &) = default ;
    ListLineageRequest& operator=(ListLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->entityQualifiedName_ == nullptr && this->keyword_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListLineageRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // entityQualifiedName Field Functions 
    bool hasEntityQualifiedName() const { return this->entityQualifiedName_ != nullptr;};
    void deleteEntityQualifiedName() { this->entityQualifiedName_ = nullptr;};
    inline string getEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(entityQualifiedName_, "") };
    inline ListLineageRequest& setEntityQualifiedName(string entityQualifiedName) { DARABONBA_PTR_SET_VALUE(entityQualifiedName_, entityQualifiedName) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListLineageRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLineageRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLineageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The lineage type. Valid values:
    // 
    // *   up: ancestor lineage
    // *   down: descendant lineage
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The unique identifier of the entity.
    // 
    // This parameter is required.
    shared_ptr<string> entityQualifiedName_ {};
    // The keyword of the entity name.
    shared_ptr<string> keyword_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
