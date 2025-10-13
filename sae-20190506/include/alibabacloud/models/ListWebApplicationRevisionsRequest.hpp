// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONREVISIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONREVISIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationRevisionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationRevisionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationRevisionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListWebApplicationRevisionsRequest() = default ;
    ListWebApplicationRevisionsRequest(const ListWebApplicationRevisionsRequest &) = default ;
    ListWebApplicationRevisionsRequest(ListWebApplicationRevisionsRequest &&) = default ;
    ListWebApplicationRevisionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationRevisionsRequest() = default ;
    ListWebApplicationRevisionsRequest& operator=(const ListWebApplicationRevisionsRequest &) = default ;
    ListWebApplicationRevisionsRequest& operator=(ListWebApplicationRevisionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->namespaceId_ == nullptr && return this->nextToken_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListWebApplicationRevisionsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListWebApplicationRevisionsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWebApplicationRevisionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The number of applications returned.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
