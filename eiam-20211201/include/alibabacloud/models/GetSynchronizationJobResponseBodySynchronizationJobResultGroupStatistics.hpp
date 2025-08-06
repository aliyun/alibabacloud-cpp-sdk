// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTGROUPSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTGROUPSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics(const GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics(GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& operator=(GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binded_ != nullptr
        && this->created_ != nullptr && this->deleted_ != nullptr && this->pushed_ != nullptr && this->same_ != nullptr && this->updated_ != nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setBinded(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setBinded(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setCreated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setCreated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setDeleted(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setDeleted(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setPushed(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setPushed(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setSame(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setSame(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setUpdated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatistics& setUpdated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // The binding result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsBinded> binded_ = nullptr;
    // The creation result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsCreated> created_ = nullptr;
    // The deletion result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsDeleted> deleted_ = nullptr;
    // The notification result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsPushed> pushed_ = nullptr;
    // The result statistics about identical groups.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsSame> same_ = nullptr;
    // The update result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultGroupStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
