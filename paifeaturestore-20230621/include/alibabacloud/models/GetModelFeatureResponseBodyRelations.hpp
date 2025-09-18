// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYRELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelFeatureResponseBodyRelationsDomains.hpp>
#include <alibabacloud/models/GetModelFeatureResponseBodyRelationsLinks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureResponseBodyRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBodyRelations& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Links, links_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBodyRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Links, links_);
    };
    GetModelFeatureResponseBodyRelations() = default ;
    GetModelFeatureResponseBodyRelations(const GetModelFeatureResponseBodyRelations &) = default ;
    GetModelFeatureResponseBodyRelations(GetModelFeatureResponseBodyRelations &&) = default ;
    GetModelFeatureResponseBodyRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBodyRelations() = default ;
    GetModelFeatureResponseBodyRelations& operator=(const GetModelFeatureResponseBodyRelations &) = default ;
    GetModelFeatureResponseBodyRelations& operator=(GetModelFeatureResponseBodyRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr
        && this->links_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::GetModelFeatureResponseBodyRelationsDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::GetModelFeatureResponseBodyRelationsDomains>) };
    inline vector<Models::GetModelFeatureResponseBodyRelationsDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::GetModelFeatureResponseBodyRelationsDomains>) };
    inline GetModelFeatureResponseBodyRelations& setDomains(const vector<Models::GetModelFeatureResponseBodyRelationsDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline GetModelFeatureResponseBodyRelations& setDomains(vector<Models::GetModelFeatureResponseBodyRelationsDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const vector<Models::GetModelFeatureResponseBodyRelationsLinks> & links() const { DARABONBA_PTR_GET_CONST(links_, vector<Models::GetModelFeatureResponseBodyRelationsLinks>) };
    inline vector<Models::GetModelFeatureResponseBodyRelationsLinks> links() { DARABONBA_PTR_GET(links_, vector<Models::GetModelFeatureResponseBodyRelationsLinks>) };
    inline GetModelFeatureResponseBodyRelations& setLinks(const vector<Models::GetModelFeatureResponseBodyRelationsLinks> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline GetModelFeatureResponseBodyRelations& setLinks(vector<Models::GetModelFeatureResponseBodyRelationsLinks> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


  protected:
    std::shared_ptr<vector<Models::GetModelFeatureResponseBodyRelationsDomains>> domains_ = nullptr;
    std::shared_ptr<vector<Models::GetModelFeatureResponseBodyRelationsLinks>> links_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
