// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLELEVELRESPONSEBODYTABLELEVELINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLELEVELRESPONSEBODYTABLELEVELINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTableLevelResponseBodyTableLevelInfoLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTableLevelResponseBodyTableLevelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableLevelResponseBodyTableLevelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LevelList, levelList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableLevelResponseBodyTableLevelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTableLevelResponseBodyTableLevelInfo() = default ;
    ListTableLevelResponseBodyTableLevelInfo(const ListTableLevelResponseBodyTableLevelInfo &) = default ;
    ListTableLevelResponseBodyTableLevelInfo(ListTableLevelResponseBodyTableLevelInfo &&) = default ;
    ListTableLevelResponseBodyTableLevelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableLevelResponseBodyTableLevelInfo() = default ;
    ListTableLevelResponseBodyTableLevelInfo& operator=(const ListTableLevelResponseBodyTableLevelInfo &) = default ;
    ListTableLevelResponseBodyTableLevelInfo& operator=(ListTableLevelResponseBodyTableLevelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levelList_ != nullptr
        && this->totalCount_ != nullptr; };
    // levelList Field Functions 
    bool hasLevelList() const { return this->levelList_ != nullptr;};
    void deleteLevelList() { this->levelList_ = nullptr;};
    inline const vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList> & levelList() const { DARABONBA_PTR_GET_CONST(levelList_, vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList>) };
    inline vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList> levelList() { DARABONBA_PTR_GET(levelList_, vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList>) };
    inline ListTableLevelResponseBodyTableLevelInfo& setLevelList(const vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList> & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
    inline ListTableLevelResponseBodyTableLevelInfo& setLevelList(vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList> && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTableLevelResponseBodyTableLevelInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of table levels.
    std::shared_ptr<vector<Models::ListTableLevelResponseBodyTableLevelInfoLevelList>> levelList_ = nullptr;
    // The total number of table levels returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
