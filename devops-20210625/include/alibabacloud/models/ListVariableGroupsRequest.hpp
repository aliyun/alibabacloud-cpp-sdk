// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVARIABLEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListVariableGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVariableGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pageOrder, pageOrder_);
      DARABONBA_PTR_TO_JSON(pageSort, pageSort_);
    };
    friend void from_json(const Darabonba::Json& j, ListVariableGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pageOrder, pageOrder_);
      DARABONBA_PTR_FROM_JSON(pageSort, pageSort_);
    };
    ListVariableGroupsRequest() = default ;
    ListVariableGroupsRequest(const ListVariableGroupsRequest &) = default ;
    ListVariableGroupsRequest(ListVariableGroupsRequest &&) = default ;
    ListVariableGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVariableGroupsRequest() = default ;
    ListVariableGroupsRequest& operator=(const ListVariableGroupsRequest &) = default ;
    ListVariableGroupsRequest& operator=(ListVariableGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageOrder_ == nullptr && return this->pageSort_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVariableGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVariableGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageOrder Field Functions 
    bool hasPageOrder() const { return this->pageOrder_ != nullptr;};
    void deletePageOrder() { this->pageOrder_ = nullptr;};
    inline string pageOrder() const { DARABONBA_PTR_GET_DEFAULT(pageOrder_, "") };
    inline ListVariableGroupsRequest& setPageOrder(string pageOrder) { DARABONBA_PTR_SET_VALUE(pageOrder_, pageOrder) };


    // pageSort Field Functions 
    bool hasPageSort() const { return this->pageSort_ != nullptr;};
    void deletePageSort() { this->pageSort_ = nullptr;};
    inline string pageSort() const { DARABONBA_PTR_GET_DEFAULT(pageSort_, "") };
    inline ListVariableGroupsRequest& setPageSort(string pageSort) { DARABONBA_PTR_SET_VALUE(pageSort_, pageSort) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> pageOrder_ = nullptr;
    std::shared_ptr<string> pageSort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
