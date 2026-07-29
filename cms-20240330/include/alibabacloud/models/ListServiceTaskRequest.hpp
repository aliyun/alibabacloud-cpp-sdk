// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListServiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListServiceTaskRequest() = default ;
    ListServiceTaskRequest(const ListServiceTaskRequest &) = default ;
    ListServiceTaskRequest(ListServiceTaskRequest &&) = default ;
    ListServiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTaskRequest() = default ;
    ListServiceTaskRequest& operator=(const ListServiceTaskRequest &) = default ;
    ListServiceTaskRequest& operator=(ListServiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->searchCondition_ == nullptr && this->type_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTaskRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTaskRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline string getSearchCondition() const { DARABONBA_PTR_GET_DEFAULT(searchCondition_, "") };
    inline ListServiceTaskRequest& setSearchCondition(string searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> searchCondition_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
