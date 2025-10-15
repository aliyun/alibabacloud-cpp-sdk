// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrganizationalUnitsResponseBodyOrganizationalUnits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody(ListOrganizationalUnitsResponseBody &&) = default ;
    ListOrganizationalUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody& operator=(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody& operator=(ListOrganizationalUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnits_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits> & organizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits>) };
    inline vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits> organizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits>) };
    inline ListOrganizationalUnitsResponseBody& setOrganizationalUnits(const vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline ListOrganizationalUnitsResponseBody& setOrganizationalUnits(vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrganizationalUnitsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of data objects of organizational units.
    std::shared_ptr<vector<ListOrganizationalUnitsResponseBodyOrganizationalUnits>> organizationalUnits_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries in the list.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
