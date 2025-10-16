// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERADORGANIZATIONUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserAdOrganizationUnitsResponseBodyOUNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListUserAdOrganizationUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAdOrganizationUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OUNames, OUNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAdOrganizationUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OUNames, OUNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserAdOrganizationUnitsResponseBody() = default ;
    ListUserAdOrganizationUnitsResponseBody(const ListUserAdOrganizationUnitsResponseBody &) = default ;
    ListUserAdOrganizationUnitsResponseBody(ListUserAdOrganizationUnitsResponseBody &&) = default ;
    ListUserAdOrganizationUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAdOrganizationUnitsResponseBody() = default ;
    ListUserAdOrganizationUnitsResponseBody& operator=(const ListUserAdOrganizationUnitsResponseBody &) = default ;
    ListUserAdOrganizationUnitsResponseBody& operator=(ListUserAdOrganizationUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->OUNames_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAdOrganizationUnitsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OUNames Field Functions 
    bool hasOUNames() const { return this->OUNames_ != nullptr;};
    void deleteOUNames() { this->OUNames_ = nullptr;};
    inline const vector<ListUserAdOrganizationUnitsResponseBodyOUNames> & OUNames() const { DARABONBA_PTR_GET_CONST(OUNames_, vector<ListUserAdOrganizationUnitsResponseBodyOUNames>) };
    inline vector<ListUserAdOrganizationUnitsResponseBodyOUNames> OUNames() { DARABONBA_PTR_GET(OUNames_, vector<ListUserAdOrganizationUnitsResponseBodyOUNames>) };
    inline ListUserAdOrganizationUnitsResponseBody& setOUNames(const vector<ListUserAdOrganizationUnitsResponseBodyOUNames> & OUNames) { DARABONBA_PTR_SET_VALUE(OUNames_, OUNames) };
    inline ListUserAdOrganizationUnitsResponseBody& setOUNames(vector<ListUserAdOrganizationUnitsResponseBodyOUNames> && OUNames) { DARABONBA_PTR_SET_RVALUE(OUNames_, OUNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAdOrganizationUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The OUs of the AD domain.
    std::shared_ptr<vector<ListUserAdOrganizationUnitsResponseBodyOUNames>> OUNames_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
