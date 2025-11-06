// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISIONCHILDREN_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISIONCHILDREN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
    };
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren &&) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& operator=(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& operator=(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren>) };
    inline vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren> children() { DARABONBA_PTR_GET(children_, vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren>) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& setChildren(const vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildren& setChildren(vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren>> children_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
