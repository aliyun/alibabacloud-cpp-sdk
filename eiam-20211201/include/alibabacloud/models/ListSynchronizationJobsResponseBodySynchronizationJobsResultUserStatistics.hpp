// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTUSERSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTUSERSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Exported, exported_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Exported, exported_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics(const ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics(ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binded_ != nullptr
        && this->created_ != nullptr && this->deleted_ != nullptr && this->exported_ != nullptr && this->pushed_ != nullptr && this->same_ != nullptr
        && this->updated_ != nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setBinded(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setBinded(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setCreated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setCreated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setDeleted(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setDeleted(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // exported Field Functions 
    bool hasExported() const { return this->exported_ != nullptr;};
    void deleteExported() { this->exported_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported & exported() const { DARABONBA_PTR_GET_CONST(exported_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported exported() { DARABONBA_PTR_GET(exported_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setExported(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported & exported) { DARABONBA_PTR_SET_VALUE(exported_, exported) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setExported(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported && exported) { DARABONBA_PTR_SET_RVALUE(exported_, exported) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setPushed(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setPushed(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setSame(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setSame(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setUpdated(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatistics& setUpdated(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // 绑定结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsBinded> binded_ = nullptr;
    // 创建结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsCreated> created_ = nullptr;
    // 删除结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsDeleted> deleted_ = nullptr;
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsExported> exported_ = nullptr;
    // 推送结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsPushed> pushed_ = nullptr;
    // 相同结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsSame> same_ = nullptr;
    // 更新结果统计
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResultUserStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
