// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPromptTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListPromptTemplatesRequest() = default ;
    ListPromptTemplatesRequest(const ListPromptTemplatesRequest &) = default ;
    ListPromptTemplatesRequest(ListPromptTemplatesRequest &&) = default ;
    ListPromptTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptTemplatesRequest() = default ;
    ListPromptTemplatesRequest& operator=(const ListPromptTemplatesRequest &) = default ;
    ListPromptTemplatesRequest& operator=(ListPromptTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->type_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromptTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPromptTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromptTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPromptTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The maximum number of returned entries.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The keyword that is used to search for templates.
    std::shared_ptr<string> name_ = nullptr;
    // The token that determines the start position of the query. Set this parameter to the value of the NextToken parameter that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the template. Valid values: · System · Custom
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
