// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAclRelationsResponseBodyAclRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAclRelationsResponseBody() = default ;
    ListAclRelationsResponseBody(const ListAclRelationsResponseBody &) = default ;
    ListAclRelationsResponseBody(ListAclRelationsResponseBody &&) = default ;
    ListAclRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclRelationsResponseBody() = default ;
    ListAclRelationsResponseBody& operator=(const ListAclRelationsResponseBody &) = default ;
    ListAclRelationsResponseBody& operator=(ListAclRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclRelations_ != nullptr
        && this->requestId_ != nullptr; };
    // aclRelations Field Functions 
    bool hasAclRelations() const { return this->aclRelations_ != nullptr;};
    void deleteAclRelations() { this->aclRelations_ = nullptr;};
    inline const vector<ListAclRelationsResponseBodyAclRelations> & aclRelations() const { DARABONBA_PTR_GET_CONST(aclRelations_, vector<ListAclRelationsResponseBodyAclRelations>) };
    inline vector<ListAclRelationsResponseBodyAclRelations> aclRelations() { DARABONBA_PTR_GET(aclRelations_, vector<ListAclRelationsResponseBodyAclRelations>) };
    inline ListAclRelationsResponseBody& setAclRelations(const vector<ListAclRelationsResponseBodyAclRelations> & aclRelations) { DARABONBA_PTR_SET_VALUE(aclRelations_, aclRelations) };
    inline ListAclRelationsResponseBody& setAclRelations(vector<ListAclRelationsResponseBodyAclRelations> && aclRelations) { DARABONBA_PTR_SET_RVALUE(aclRelations_, aclRelations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAclRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The relations between the specified ACL and the listeners.
    std::shared_ptr<vector<ListAclRelationsResponseBodyAclRelations>> aclRelations_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
