// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListPermissionsRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(FilterRoleIds, filterRoleIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterRoleIds, filterRoleIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListPermissionsRequestOption() = default ;
    ListPermissionsRequestOption(const ListPermissionsRequestOption &) = default ;
    ListPermissionsRequestOption(ListPermissionsRequestOption &&) = default ;
    ListPermissionsRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsRequestOption() = default ;
    ListPermissionsRequestOption& operator=(const ListPermissionsRequestOption &) = default ;
    ListPermissionsRequestOption& operator=(ListPermissionsRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterRoleIds_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // filterRoleIds Field Functions 
    bool hasFilterRoleIds() const { return this->filterRoleIds_ != nullptr;};
    void deleteFilterRoleIds() { this->filterRoleIds_ = nullptr;};
    inline const vector<string> & filterRoleIds() const { DARABONBA_PTR_GET_CONST(filterRoleIds_, vector<string>) };
    inline vector<string> filterRoleIds() { DARABONBA_PTR_GET(filterRoleIds_, vector<string>) };
    inline ListPermissionsRequestOption& setFilterRoleIds(const vector<string> & filterRoleIds) { DARABONBA_PTR_SET_VALUE(filterRoleIds_, filterRoleIds) };
    inline ListPermissionsRequestOption& setFilterRoleIds(vector<string> && filterRoleIds) { DARABONBA_PTR_SET_RVALUE(filterRoleIds_, filterRoleIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPermissionsRequestOption& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPermissionsRequestOption& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<string>> filterRoleIds_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
