// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISION_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
    };
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision &&) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& operator=(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& operator=(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && return this->divisionName_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren & children() const { DARABONBA_PTR_GET_CONST(children_, Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren) };
    inline Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren children() { DARABONBA_PTR_GET(children_, Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& setChildren(const Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& setChildren(Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // divisionName Field Functions 
    bool hasDivisionName() const { return this->divisionName_ != nullptr;};
    void deleteDivisionName() { this->divisionName_ = nullptr;};
    inline string divisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


  protected:
    std::shared_ptr<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren> children_ = nullptr;
    std::shared_ptr<string> divisionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
