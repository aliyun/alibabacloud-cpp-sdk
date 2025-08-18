// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADOMAINSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADOMAINSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataDomainsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDomainsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitIdList, bizUnitIdList_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ParentIdList, parentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDomainsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitIdList, bizUnitIdList_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ParentIdList, parentIdList_);
    };
    ListDataDomainsRequestListQuery() = default ;
    ListDataDomainsRequestListQuery(const ListDataDomainsRequestListQuery &) = default ;
    ListDataDomainsRequestListQuery(ListDataDomainsRequestListQuery &&) = default ;
    ListDataDomainsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDomainsRequestListQuery() = default ;
    ListDataDomainsRequestListQuery& operator=(const ListDataDomainsRequestListQuery &) = default ;
    ListDataDomainsRequestListQuery& operator=(ListDataDomainsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitIdList_ != nullptr
        && this->keyword_ != nullptr && this->parentIdList_ != nullptr; };
    // bizUnitIdList Field Functions 
    bool hasBizUnitIdList() const { return this->bizUnitIdList_ != nullptr;};
    void deleteBizUnitIdList() { this->bizUnitIdList_ = nullptr;};
    inline const vector<int64_t> & bizUnitIdList() const { DARABONBA_PTR_GET_CONST(bizUnitIdList_, vector<int64_t>) };
    inline vector<int64_t> bizUnitIdList() { DARABONBA_PTR_GET(bizUnitIdList_, vector<int64_t>) };
    inline ListDataDomainsRequestListQuery& setBizUnitIdList(const vector<int64_t> & bizUnitIdList) { DARABONBA_PTR_SET_VALUE(bizUnitIdList_, bizUnitIdList) };
    inline ListDataDomainsRequestListQuery& setBizUnitIdList(vector<int64_t> && bizUnitIdList) { DARABONBA_PTR_SET_RVALUE(bizUnitIdList_, bizUnitIdList) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListDataDomainsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // parentIdList Field Functions 
    bool hasParentIdList() const { return this->parentIdList_ != nullptr;};
    void deleteParentIdList() { this->parentIdList_ = nullptr;};
    inline const vector<int64_t> & parentIdList() const { DARABONBA_PTR_GET_CONST(parentIdList_, vector<int64_t>) };
    inline vector<int64_t> parentIdList() { DARABONBA_PTR_GET(parentIdList_, vector<int64_t>) };
    inline ListDataDomainsRequestListQuery& setParentIdList(const vector<int64_t> & parentIdList) { DARABONBA_PTR_SET_VALUE(parentIdList_, parentIdList) };
    inline ListDataDomainsRequestListQuery& setParentIdList(vector<int64_t> && parentIdList) { DARABONBA_PTR_SET_RVALUE(parentIdList_, parentIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> bizUnitIdList_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<vector<int64_t>> parentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
