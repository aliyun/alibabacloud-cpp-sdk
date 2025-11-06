// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINGROUPLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainGroupListResponseBodyDataDomainGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainGroupListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainGroupListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroup, domainGroup_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainGroupListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroup, domainGroup_);
    };
    QueryDomainGroupListResponseBodyData() = default ;
    QueryDomainGroupListResponseBodyData(const QueryDomainGroupListResponseBodyData &) = default ;
    QueryDomainGroupListResponseBodyData(QueryDomainGroupListResponseBodyData &&) = default ;
    QueryDomainGroupListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainGroupListResponseBodyData() = default ;
    QueryDomainGroupListResponseBodyData& operator=(const QueryDomainGroupListResponseBodyData &) = default ;
    QueryDomainGroupListResponseBodyData& operator=(QueryDomainGroupListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainGroup_ == nullptr; };
    // domainGroup Field Functions 
    bool hasDomainGroup() const { return this->domainGroup_ != nullptr;};
    void deleteDomainGroup() { this->domainGroup_ = nullptr;};
    inline const vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup> & domainGroup() const { DARABONBA_PTR_GET_CONST(domainGroup_, vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup>) };
    inline vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup> domainGroup() { DARABONBA_PTR_GET(domainGroup_, vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup>) };
    inline QueryDomainGroupListResponseBodyData& setDomainGroup(const vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup> & domainGroup) { DARABONBA_PTR_SET_VALUE(domainGroup_, domainGroup) };
    inline QueryDomainGroupListResponseBodyData& setDomainGroup(vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup> && domainGroup) { DARABONBA_PTR_SET_RVALUE(domainGroup_, domainGroup) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainGroupListResponseBodyDataDomainGroup>> domainGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
