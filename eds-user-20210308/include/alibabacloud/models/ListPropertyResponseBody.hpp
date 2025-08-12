// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROPERTYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPropertyResponseBodyProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ListPropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPropertyResponseBody() = default ;
    ListPropertyResponseBody(const ListPropertyResponseBody &) = default ;
    ListPropertyResponseBody(ListPropertyResponseBody &&) = default ;
    ListPropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPropertyResponseBody() = default ;
    ListPropertyResponseBody& operator=(const ListPropertyResponseBody &) = default ;
    ListPropertyResponseBody& operator=(ListPropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->properties_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPropertyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<ListPropertyResponseBodyProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<ListPropertyResponseBodyProperties>) };
    inline vector<ListPropertyResponseBodyProperties> properties() { DARABONBA_PTR_GET(properties_, vector<ListPropertyResponseBodyProperties>) };
    inline ListPropertyResponseBody& setProperties(const vector<ListPropertyResponseBodyProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListPropertyResponseBody& setProperties(vector<ListPropertyResponseBodyProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that is used for the next query. If this parameter is empty, all results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the properties.
    std::shared_ptr<vector<ListPropertyResponseBodyProperties>> properties_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
