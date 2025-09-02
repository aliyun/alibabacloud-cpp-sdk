// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTableThemeResponseBodyDataThemeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTableThemeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableThemeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ThemeList, themeList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableThemeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ThemeList, themeList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTableThemeResponseBodyData() = default ;
    ListTableThemeResponseBodyData(const ListTableThemeResponseBodyData &) = default ;
    ListTableThemeResponseBodyData(ListTableThemeResponseBodyData &&) = default ;
    ListTableThemeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableThemeResponseBodyData() = default ;
    ListTableThemeResponseBodyData& operator=(const ListTableThemeResponseBodyData &) = default ;
    ListTableThemeResponseBodyData& operator=(ListTableThemeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->themeList_ != nullptr
        && this->totalCount_ != nullptr; };
    // themeList Field Functions 
    bool hasThemeList() const { return this->themeList_ != nullptr;};
    void deleteThemeList() { this->themeList_ = nullptr;};
    inline const vector<Models::ListTableThemeResponseBodyDataThemeList> & themeList() const { DARABONBA_PTR_GET_CONST(themeList_, vector<Models::ListTableThemeResponseBodyDataThemeList>) };
    inline vector<Models::ListTableThemeResponseBodyDataThemeList> themeList() { DARABONBA_PTR_GET(themeList_, vector<Models::ListTableThemeResponseBodyDataThemeList>) };
    inline ListTableThemeResponseBodyData& setThemeList(const vector<Models::ListTableThemeResponseBodyDataThemeList> & themeList) { DARABONBA_PTR_SET_VALUE(themeList_, themeList) };
    inline ListTableThemeResponseBodyData& setThemeList(vector<Models::ListTableThemeResponseBodyDataThemeList> && themeList) { DARABONBA_PTR_SET_RVALUE(themeList_, themeList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTableThemeResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of table levels.
    std::shared_ptr<vector<Models::ListTableThemeResponseBodyDataThemeList>> themeList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
