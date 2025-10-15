// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTGROUPMEMBERSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTGROUPMEMBERSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics(const GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics(GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& operator=(GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binded_ == nullptr
        && return this->created_ == nullptr && return this->deleted_ == nullptr && return this->pushed_ == nullptr && return this->same_ == nullptr && return this->updated_ == nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setBinded(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setBinded(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setCreated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setCreated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setDeleted(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setDeleted(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setPushed(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setPushed(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setSame(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setSame(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setUpdated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatistics& setUpdated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // The binding result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsBinded> binded_ = nullptr;
    // The creation result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsCreated> created_ = nullptr;
    // The deletion result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsDeleted> deleted_ = nullptr;
    // The notification result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsPushed> pushed_ = nullptr;
    // The result statistics about identical group members.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsSame> same_ = nullptr;
    // The update result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupMemberStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
