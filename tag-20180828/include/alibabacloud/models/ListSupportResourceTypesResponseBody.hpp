// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSupportResourceTypesResponseBodySupportResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListSupportResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResourceTypes, supportResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResourceTypes, supportResourceTypes_);
    };
    ListSupportResourceTypesResponseBody() = default ;
    ListSupportResourceTypesResponseBody(const ListSupportResourceTypesResponseBody &) = default ;
    ListSupportResourceTypesResponseBody(ListSupportResourceTypesResponseBody &&) = default ;
    ListSupportResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportResourceTypesResponseBody() = default ;
    ListSupportResourceTypesResponseBody& operator=(const ListSupportResourceTypesResponseBody &) = default ;
    ListSupportResourceTypesResponseBody& operator=(ListSupportResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->supportResourceTypes_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportResourceTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResourceTypes Field Functions 
    bool hasSupportResourceTypes() const { return this->supportResourceTypes_ != nullptr;};
    void deleteSupportResourceTypes() { this->supportResourceTypes_ = nullptr;};
    inline const vector<ListSupportResourceTypesResponseBodySupportResourceTypes> & supportResourceTypes() const { DARABONBA_PTR_GET_CONST(supportResourceTypes_, vector<ListSupportResourceTypesResponseBodySupportResourceTypes>) };
    inline vector<ListSupportResourceTypesResponseBodySupportResourceTypes> supportResourceTypes() { DARABONBA_PTR_GET(supportResourceTypes_, vector<ListSupportResourceTypesResponseBodySupportResourceTypes>) };
    inline ListSupportResourceTypesResponseBody& setSupportResourceTypes(const vector<ListSupportResourceTypesResponseBodySupportResourceTypes> & supportResourceTypes) { DARABONBA_PTR_SET_VALUE(supportResourceTypes_, supportResourceTypes) };
    inline ListSupportResourceTypesResponseBody& setSupportResourceTypes(vector<ListSupportResourceTypesResponseBodySupportResourceTypes> && supportResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportResourceTypes_, supportResourceTypes) };


  protected:
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty, all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The supported resource types.
    std::shared_ptr<vector<ListSupportResourceTypesResponseBodySupportResourceTypes>> supportResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
