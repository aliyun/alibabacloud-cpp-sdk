// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUESTFILTERLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEECDREPORTTASKREQUESTFILTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateEcdReportTaskRequestFilterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEcdReportTaskRequestFilterList& obj) { 
      DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEcdReportTaskRequestFilterList& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
    };
    CreateEcdReportTaskRequestFilterList() = default ;
    CreateEcdReportTaskRequestFilterList(const CreateEcdReportTaskRequestFilterList &) = default ;
    CreateEcdReportTaskRequestFilterList(CreateEcdReportTaskRequestFilterList &&) = default ;
    CreateEcdReportTaskRequestFilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEcdReportTaskRequestFilterList() = default ;
    CreateEcdReportTaskRequestFilterList& operator=(const CreateEcdReportTaskRequestFilterList &) = default ;
    CreateEcdReportTaskRequestFilterList& operator=(CreateEcdReportTaskRequestFilterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterKey_ == nullptr
        && return this->filterValues_ == nullptr; };
    // filterKey Field Functions 
    bool hasFilterKey() const { return this->filterKey_ != nullptr;};
    void deleteFilterKey() { this->filterKey_ = nullptr;};
    inline string filterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
    inline CreateEcdReportTaskRequestFilterList& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const vector<string> & filterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<string>) };
    inline vector<string> filterValues() { DARABONBA_PTR_GET(filterValues_, vector<string>) };
    inline CreateEcdReportTaskRequestFilterList& setFilterValues(const vector<string> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline CreateEcdReportTaskRequestFilterList& setFilterValues(vector<string> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


  protected:
    // The key of the filter condition for filtering query results. When SubType is set to:
    // 
    // 1.  DESKTOP (indicating a cloud computer report), the following filter conditions are available:
    // 
    // *   KeyWord: cloud computer keyword (supports automatic recognition)
    // *   RegionId: region ID
    // *   DesktopId: cloud computer ID
    // *   DesktopName: cloud computer name (supports fuzzy matching)
    // *   OfficeSiteId: office network ID
    // *   OfficeSiteName: office network name (supports fuzzy matching)
    // *   Status: cloud computer status
    // *   DesktopType: desktop type
    // *   DesktopIP: cloud computer IP address
    // *   SubPayType: billing method
    // *   EndUserId: user name (supports fuzzy matching)
    // *   ExpireTime: expiration date and time, in the yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\" format
    // *   IncludeAssignedUser: indicates whether the cloud computer is assigned to users or not
    // *   ResourceGroupId: resource group ID
    // *   PolicyId: policy ID
    // *   Tag:{Tag Key value}: cloud computer tag (To filter data using multiple tags, specify multiple filter condition objects.)
    std::shared_ptr<string> filterKey_ = nullptr;
    // The value of the filter condition. Only the first value of the FilterValues parameter is used, if FilterKey is set to one of the following values:
    // 
    // *   KeyWord
    // *   DesktopName
    // *   OfficeSiteName
    // *   DesktopIP
    // *   EndUserId
    // *   ExpireTime
    // *   IncludeAssignedUser
    std::shared_ptr<vector<string>> filterValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
