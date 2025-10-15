// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTORGANIZATIONALUNITSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTORGANIZATIONALUNITSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics(const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics(GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& operator=(GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binded_ == nullptr
        && return this->created_ == nullptr && return this->deleted_ == nullptr && return this->pushed_ == nullptr && return this->same_ == nullptr && return this->updated_ == nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setBinded(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setBinded(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setCreated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setCreated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setDeleted(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setDeleted(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setPushed(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setPushed(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setSame(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setSame(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setUpdated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatistics& setUpdated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // The binding result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsBinded> binded_ = nullptr;
    // The creation result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated> created_ = nullptr;
    // The deletion result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsDeleted> deleted_ = nullptr;
    // The notification result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsPushed> pushed_ = nullptr;
    // The result statistics about identical organizations.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsSame> same_ = nullptr;
    // The update result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
