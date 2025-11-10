// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServerSystemToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServerSystemToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServerSystemToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(skip, skip_);
    };
    ListApiMcpServerSystemToolsRequest() = default ;
    ListApiMcpServerSystemToolsRequest(const ListApiMcpServerSystemToolsRequest &) = default ;
    ListApiMcpServerSystemToolsRequest(ListApiMcpServerSystemToolsRequest &&) = default ;
    ListApiMcpServerSystemToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServerSystemToolsRequest() = default ;
    ListApiMcpServerSystemToolsRequest& operator=(const ListApiMcpServerSystemToolsRequest &) = default ;
    ListApiMcpServerSystemToolsRequest& operator=(ListApiMcpServerSystemToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->skip_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiMcpServerSystemToolsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiMcpServerSystemToolsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListApiMcpServerSystemToolsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> skip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
