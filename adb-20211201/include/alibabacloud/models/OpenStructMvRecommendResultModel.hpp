// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDRESULTMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDRESULTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructMvBaseTableDetailModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMVRecommendResultModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMVRecommendResultModel& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratedQueriesCount, acceleratedQueriesCount_);
      DARABONBA_PTR_TO_JSON(BaseTables, baseTables_);
      DARABONBA_PTR_TO_JSON(SavedScanbytes, savedScanbytes_);
      DARABONBA_PTR_TO_JSON(Subquery, subquery_);
      DARABONBA_PTR_TO_JSON(SubqueryId, subqueryId_);
      DARABONBA_PTR_TO_JSON(SupportIncrementalRefresh, supportIncrementalRefresh_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMVRecommendResultModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratedQueriesCount, acceleratedQueriesCount_);
      DARABONBA_PTR_FROM_JSON(BaseTables, baseTables_);
      DARABONBA_PTR_FROM_JSON(SavedScanbytes, savedScanbytes_);
      DARABONBA_PTR_FROM_JSON(Subquery, subquery_);
      DARABONBA_PTR_FROM_JSON(SubqueryId, subqueryId_);
      DARABONBA_PTR_FROM_JSON(SupportIncrementalRefresh, supportIncrementalRefresh_);
    };
    OpenStructMVRecommendResultModel() = default ;
    OpenStructMVRecommendResultModel(const OpenStructMVRecommendResultModel &) = default ;
    OpenStructMVRecommendResultModel(OpenStructMVRecommendResultModel &&) = default ;
    OpenStructMVRecommendResultModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMVRecommendResultModel() = default ;
    OpenStructMVRecommendResultModel& operator=(const OpenStructMVRecommendResultModel &) = default ;
    OpenStructMVRecommendResultModel& operator=(OpenStructMVRecommendResultModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratedQueriesCount_ == nullptr
        && return this->baseTables_ == nullptr && return this->savedScanbytes_ == nullptr && return this->subquery_ == nullptr && return this->subqueryId_ == nullptr && return this->supportIncrementalRefresh_ == nullptr; };
    // acceleratedQueriesCount Field Functions 
    bool hasAcceleratedQueriesCount() const { return this->acceleratedQueriesCount_ != nullptr;};
    void deleteAcceleratedQueriesCount() { this->acceleratedQueriesCount_ = nullptr;};
    inline int64_t acceleratedQueriesCount() const { DARABONBA_PTR_GET_DEFAULT(acceleratedQueriesCount_, 0L) };
    inline OpenStructMVRecommendResultModel& setAcceleratedQueriesCount(int64_t acceleratedQueriesCount) { DARABONBA_PTR_SET_VALUE(acceleratedQueriesCount_, acceleratedQueriesCount) };


    // baseTables Field Functions 
    bool hasBaseTables() const { return this->baseTables_ != nullptr;};
    void deleteBaseTables() { this->baseTables_ = nullptr;};
    inline const vector<OpenStructMvBaseTableDetailModel> & baseTables() const { DARABONBA_PTR_GET_CONST(baseTables_, vector<OpenStructMvBaseTableDetailModel>) };
    inline vector<OpenStructMvBaseTableDetailModel> baseTables() { DARABONBA_PTR_GET(baseTables_, vector<OpenStructMvBaseTableDetailModel>) };
    inline OpenStructMVRecommendResultModel& setBaseTables(const vector<OpenStructMvBaseTableDetailModel> & baseTables) { DARABONBA_PTR_SET_VALUE(baseTables_, baseTables) };
    inline OpenStructMVRecommendResultModel& setBaseTables(vector<OpenStructMvBaseTableDetailModel> && baseTables) { DARABONBA_PTR_SET_RVALUE(baseTables_, baseTables) };


    // savedScanbytes Field Functions 
    bool hasSavedScanbytes() const { return this->savedScanbytes_ != nullptr;};
    void deleteSavedScanbytes() { this->savedScanbytes_ = nullptr;};
    inline int64_t savedScanbytes() const { DARABONBA_PTR_GET_DEFAULT(savedScanbytes_, 0L) };
    inline OpenStructMVRecommendResultModel& setSavedScanbytes(int64_t savedScanbytes) { DARABONBA_PTR_SET_VALUE(savedScanbytes_, savedScanbytes) };


    // subquery Field Functions 
    bool hasSubquery() const { return this->subquery_ != nullptr;};
    void deleteSubquery() { this->subquery_ = nullptr;};
    inline string subquery() const { DARABONBA_PTR_GET_DEFAULT(subquery_, "") };
    inline OpenStructMVRecommendResultModel& setSubquery(string subquery) { DARABONBA_PTR_SET_VALUE(subquery_, subquery) };


    // subqueryId Field Functions 
    bool hasSubqueryId() const { return this->subqueryId_ != nullptr;};
    void deleteSubqueryId() { this->subqueryId_ = nullptr;};
    inline int64_t subqueryId() const { DARABONBA_PTR_GET_DEFAULT(subqueryId_, 0L) };
    inline OpenStructMVRecommendResultModel& setSubqueryId(int64_t subqueryId) { DARABONBA_PTR_SET_VALUE(subqueryId_, subqueryId) };


    // supportIncrementalRefresh Field Functions 
    bool hasSupportIncrementalRefresh() const { return this->supportIncrementalRefresh_ != nullptr;};
    void deleteSupportIncrementalRefresh() { this->supportIncrementalRefresh_ = nullptr;};
    inline bool supportIncrementalRefresh() const { DARABONBA_PTR_GET_DEFAULT(supportIncrementalRefresh_, false) };
    inline OpenStructMVRecommendResultModel& setSupportIncrementalRefresh(bool supportIncrementalRefresh) { DARABONBA_PTR_SET_VALUE(supportIncrementalRefresh_, supportIncrementalRefresh) };


  protected:
    std::shared_ptr<int64_t> acceleratedQueriesCount_ = nullptr;
    std::shared_ptr<vector<OpenStructMvBaseTableDetailModel>> baseTables_ = nullptr;
    std::shared_ptr<int64_t> savedScanbytes_ = nullptr;
    std::shared_ptr<string> subquery_ = nullptr;
    std::shared_ptr<int64_t> subqueryId_ = nullptr;
    std::shared_ptr<bool> supportIncrementalRefresh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
