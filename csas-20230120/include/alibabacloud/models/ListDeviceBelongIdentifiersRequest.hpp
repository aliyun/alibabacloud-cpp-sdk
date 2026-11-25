// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDeviceBelongIdentifiersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IdentifierIds, identifierIds_);
      DARABONBA_PTR_TO_JSON(IdentifierType, identifierType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IdentifierIds, identifierIds_);
      DARABONBA_PTR_FROM_JSON(IdentifierType, identifierType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDeviceBelongIdentifiersRequest() = default ;
    ListDeviceBelongIdentifiersRequest(const ListDeviceBelongIdentifiersRequest &) = default ;
    ListDeviceBelongIdentifiersRequest(ListDeviceBelongIdentifiersRequest &&) = default ;
    ListDeviceBelongIdentifiersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBelongIdentifiersRequest() = default ;
    ListDeviceBelongIdentifiersRequest& operator=(const ListDeviceBelongIdentifiersRequest &) = default ;
    ListDeviceBelongIdentifiersRequest& operator=(ListDeviceBelongIdentifiersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->identifierIds_ == nullptr && this->identifierType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDeviceBelongIdentifiersRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // identifierIds Field Functions 
    bool hasIdentifierIds() const { return this->identifierIds_ != nullptr;};
    void deleteIdentifierIds() { this->identifierIds_ = nullptr;};
    inline const vector<string> & getIdentifierIds() const { DARABONBA_PTR_GET_CONST(identifierIds_, vector<string>) };
    inline vector<string> getIdentifierIds() { DARABONBA_PTR_GET(identifierIds_, vector<string>) };
    inline ListDeviceBelongIdentifiersRequest& setIdentifierIds(const vector<string> & identifierIds) { DARABONBA_PTR_SET_VALUE(identifierIds_, identifierIds) };
    inline ListDeviceBelongIdentifiersRequest& setIdentifierIds(vector<string> && identifierIds) { DARABONBA_PTR_SET_RVALUE(identifierIds_, identifierIds) };


    // identifierType Field Functions 
    bool hasIdentifierType() const { return this->identifierType_ != nullptr;};
    void deleteIdentifierType() { this->identifierType_ = nullptr;};
    inline string getIdentifierType() const { DARABONBA_PTR_GET_DEFAULT(identifierType_, "") };
    inline ListDeviceBelongIdentifiersRequest& setIdentifierType(string identifierType) { DARABONBA_PTR_SET_VALUE(identifierType_, identifierType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDeviceBelongIdentifiersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDeviceBelongIdentifiersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeviceBelongIdentifiersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<string>> identifierIds_ {};
    shared_ptr<string> identifierType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
