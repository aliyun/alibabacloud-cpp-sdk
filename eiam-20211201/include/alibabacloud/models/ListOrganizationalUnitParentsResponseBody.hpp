// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrganizationalUnitParentsResponseBodyParents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitParentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitParentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parents, parents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitParentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parents, parents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOrganizationalUnitParentsResponseBody() = default ;
    ListOrganizationalUnitParentsResponseBody(const ListOrganizationalUnitParentsResponseBody &) = default ;
    ListOrganizationalUnitParentsResponseBody(ListOrganizationalUnitParentsResponseBody &&) = default ;
    ListOrganizationalUnitParentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitParentsResponseBody() = default ;
    ListOrganizationalUnitParentsResponseBody& operator=(const ListOrganizationalUnitParentsResponseBody &) = default ;
    ListOrganizationalUnitParentsResponseBody& operator=(ListOrganizationalUnitParentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parents_ != nullptr
        && this->requestId_ != nullptr; };
    // parents Field Functions 
    bool hasParents() const { return this->parents_ != nullptr;};
    void deleteParents() { this->parents_ = nullptr;};
    inline const vector<ListOrganizationalUnitParentsResponseBodyParents> & parents() const { DARABONBA_PTR_GET_CONST(parents_, vector<ListOrganizationalUnitParentsResponseBodyParents>) };
    inline vector<ListOrganizationalUnitParentsResponseBodyParents> parents() { DARABONBA_PTR_GET(parents_, vector<ListOrganizationalUnitParentsResponseBodyParents>) };
    inline ListOrganizationalUnitParentsResponseBody& setParents(const vector<ListOrganizationalUnitParentsResponseBodyParents> & parents) { DARABONBA_PTR_SET_VALUE(parents_, parents) };
    inline ListOrganizationalUnitParentsResponseBody& setParents(vector<ListOrganizationalUnitParentsResponseBodyParents> && parents) { DARABONBA_PTR_SET_RVALUE(parents_, parents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitParentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parent organizations.
    std::shared_ptr<vector<ListOrganizationalUnitParentsResponseBodyParents>> parents_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
