// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBodyAdminDivisions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBodyAdminDivisions& obj) { 
      DARABONBA_PTR_TO_JSON(AdminDivision, adminDivision_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBodyAdminDivisions& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminDivision, adminDivision_);
    };
    QueryDomainAdminDivisionResponseBodyAdminDivisions() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisions(const QueryDomainAdminDivisionResponseBodyAdminDivisions &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisions(QueryDomainAdminDivisionResponseBodyAdminDivisions &&) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisions() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisions& operator=(const QueryDomainAdminDivisionResponseBodyAdminDivisions &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisions& operator=(QueryDomainAdminDivisionResponseBodyAdminDivisions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminDivision_ == nullptr; };
    // adminDivision Field Functions 
    bool hasAdminDivision() const { return this->adminDivision_ != nullptr;};
    void deleteAdminDivision() { this->adminDivision_ = nullptr;};
    inline const vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision> & adminDivision() const { DARABONBA_PTR_GET_CONST(adminDivision_, vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision>) };
    inline vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision> adminDivision() { DARABONBA_PTR_GET(adminDivision_, vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision>) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisions& setAdminDivision(const vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision> & adminDivision) { DARABONBA_PTR_SET_VALUE(adminDivision_, adminDivision) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisions& setAdminDivision(vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision> && adminDivision) { DARABONBA_PTR_SET_RVALUE(adminDivision_, adminDivision) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision>> adminDivision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
