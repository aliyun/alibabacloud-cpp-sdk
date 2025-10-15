// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTORGANIZATIONALUNITSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTORGANIZATIONALUNITSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics(const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics(ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binded_ == nullptr
        && return this->created_ == nullptr && return this->deleted_ == nullptr && return this->pushed_ == nullptr && return this->same_ == nullptr && return this->updated_ == nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setBinded(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setBinded(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setCreated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setCreated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setDeleted(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setDeleted(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setPushed(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setPushed(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setSame(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setSame(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setUpdated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatistics& setUpdated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // 绑定结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsBinded> binded_ = nullptr;
    // 创建结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsCreated> created_ = nullptr;
    // 删除结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsDeleted> deleted_ = nullptr;
    // 推送结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed> pushed_ = nullptr;
    // 相同结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsSame> same_ = nullptr;
    // 更新结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
