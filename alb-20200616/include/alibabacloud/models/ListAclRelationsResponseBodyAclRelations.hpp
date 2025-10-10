// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODYACLRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTACLRELATIONSRESPONSEBODYACLRELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAclRelationsResponseBodyAclRelationsRelatedListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclRelationsResponseBodyAclRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclRelationsResponseBodyAclRelations& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclRelationsResponseBodyAclRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
    };
    ListAclRelationsResponseBodyAclRelations() = default ;
    ListAclRelationsResponseBodyAclRelations(const ListAclRelationsResponseBodyAclRelations &) = default ;
    ListAclRelationsResponseBodyAclRelations(ListAclRelationsResponseBodyAclRelations &&) = default ;
    ListAclRelationsResponseBodyAclRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclRelationsResponseBodyAclRelations() = default ;
    ListAclRelationsResponseBodyAclRelations& operator=(const ListAclRelationsResponseBodyAclRelations &) = default ;
    ListAclRelationsResponseBodyAclRelations& operator=(ListAclRelationsResponseBodyAclRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->relatedListeners_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline ListAclRelationsResponseBodyAclRelations& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners> & relatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners>) };
    inline vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners> relatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners>) };
    inline ListAclRelationsResponseBodyAclRelations& setRelatedListeners(const vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline ListAclRelationsResponseBodyAclRelations& setRelatedListeners(vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


  protected:
    // ACL ID
    std::shared_ptr<string> aclId_ = nullptr;
    // The listeners that are associated with the ACL.
    std::shared_ptr<vector<Models::ListAclRelationsResponseBodyAclRelationsRelatedListeners>> relatedListeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
