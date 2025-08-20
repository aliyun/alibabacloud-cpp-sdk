// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateVersionsResponseBodyVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListTemplateVersionsResponseBody() = default ;
    ListTemplateVersionsResponseBody(const ListTemplateVersionsResponseBody &) = default ;
    ListTemplateVersionsResponseBody(ListTemplateVersionsResponseBody &&) = default ;
    ListTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateVersionsResponseBody() = default ;
    ListTemplateVersionsResponseBody& operator=(const ListTemplateVersionsResponseBody &) = default ;
    ListTemplateVersionsResponseBody& operator=(ListTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->versions_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ListTemplateVersionsResponseBodyVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ListTemplateVersionsResponseBodyVersions>) };
    inline vector<ListTemplateVersionsResponseBodyVersions> versions() { DARABONBA_PTR_GET(versions_, vector<ListTemplateVersionsResponseBodyVersions>) };
    inline ListTemplateVersionsResponseBody& setVersions(const vector<ListTemplateVersionsResponseBodyVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListTemplateVersionsResponseBody& setVersions(vector<ListTemplateVersionsResponseBodyVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The versions.
    std::shared_ptr<vector<ListTemplateVersionsResponseBodyVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
