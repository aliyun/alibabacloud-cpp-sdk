// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTGROUPSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTGROUPSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics(const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics(ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binded_ != nullptr
        && this->created_ != nullptr && this->deleted_ != nullptr && this->pushed_ != nullptr && this->same_ != nullptr && this->updated_ != nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setBinded(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setBinded(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setCreated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setCreated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setDeleted(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setDeleted(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setPushed(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setPushed(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setSame(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setSame(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setUpdated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatistics& setUpdated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // 绑定结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsBinded> binded_ = nullptr;
    // 创建结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsCreated> created_ = nullptr;
    // 删除结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsDeleted> deleted_ = nullptr;
    // 推送结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsPushed> pushed_ = nullptr;
    // 相同结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsSame> same_ = nullptr;
    // 更新结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
