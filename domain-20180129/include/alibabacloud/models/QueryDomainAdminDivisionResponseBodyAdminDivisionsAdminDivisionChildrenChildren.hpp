// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISIONCHILDRENCHILDREN_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODYADMINDIVISIONSADMINDIVISIONCHILDRENCHILDREN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren& obj) { 
      DARABONBA_PTR_TO_JSON(ChildDivisionName, childDivisionName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildDivisionName, childDivisionName_);
    };
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren &&) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren() = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren& operator=(const QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren &) = default ;
    QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren& operator=(QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childDivisionName_ == nullptr; };
    // childDivisionName Field Functions 
    bool hasChildDivisionName() const { return this->childDivisionName_ != nullptr;};
    void deleteChildDivisionName() { this->childDivisionName_ = nullptr;};
    inline string childDivisionName() const { DARABONBA_PTR_GET_DEFAULT(childDivisionName_, "") };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisionsAdminDivisionChildrenChildren& setChildDivisionName(string childDivisionName) { DARABONBA_PTR_SET_VALUE(childDivisionName_, childDivisionName) };


  protected:
    std::shared_ptr<string> childDivisionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
