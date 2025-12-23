// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourceTypesRequest() = default ;
    ListResourceTypesRequest(const ListResourceTypesRequest &) = default ;
    ListResourceTypesRequest(ListResourceTypesRequest &&) = default ;
    ListResourceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesRequest() = default ;
    ListResourceTypesRequest& operator=(const ListResourceTypesRequest &) = default ;
    ListResourceTypesRequest& operator=(ListResourceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->query_ == nullptr && return this->resourceType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListResourceTypesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const vector<string> & query() const { DARABONBA_PTR_GET_CONST(query_, vector<string>) };
    inline vector<string> query() { DARABONBA_PTR_GET(query_, vector<string>) };
    inline ListResourceTypesRequest& setQuery(const vector<string> & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline ListResourceTypesRequest& setQuery(vector<string> && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The query conditions.
    std::shared_ptr<vector<string>> query_ = nullptr;
    // The resource type.
    // 
    // For more information about the resource types that are supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
