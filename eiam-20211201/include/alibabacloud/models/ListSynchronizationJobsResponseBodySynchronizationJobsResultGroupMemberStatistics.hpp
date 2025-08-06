// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTGROUPMEMBERSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTGROUPMEMBERSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics(const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics(ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binded_ != nullptr
        && this->created_ != nullptr && this->deleted_ != nullptr && this->pushed_ != nullptr && this->same_ != nullptr && this->updated_ != nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setBinded(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setBinded(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setCreated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setCreated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setDeleted(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setDeleted(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setPushed(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setPushed(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setSame(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setSame(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setUpdated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatistics& setUpdated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // 绑定结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsBinded> binded_ = nullptr;
    // 创建结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsCreated> created_ = nullptr;
    // 删除结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsDeleted> deleted_ = nullptr;
    // 推送结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsPushed> pushed_ = nullptr;
    // 相同结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsSame> same_ = nullptr;
    // 更新结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultGroupMemberStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
