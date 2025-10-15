// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTUSERSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTUSERSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Binded, binded_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Pushed, pushed_);
      DARABONBA_PTR_TO_JSON(Same, same_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Binded, binded_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Pushed, pushed_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics(const GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics(GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& operator=(GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binded_ == nullptr
        && return this->created_ == nullptr && return this->deleted_ == nullptr && return this->pushed_ == nullptr && return this->same_ == nullptr && return this->updated_ == nullptr; };
    // binded Field Functions 
    bool hasBinded() const { return this->binded_ != nullptr;};
    void deleteBinded() { this->binded_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded & binded() const { DARABONBA_PTR_GET_CONST(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded binded() { DARABONBA_PTR_GET(binded_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setBinded(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded & binded) { DARABONBA_PTR_SET_VALUE(binded_, binded) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setBinded(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded && binded) { DARABONBA_PTR_SET_RVALUE(binded_, binded) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated & created() const { DARABONBA_PTR_GET_CONST(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated created() { DARABONBA_PTR_GET(created_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setCreated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setCreated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted & deleted() const { DARABONBA_PTR_GET_CONST(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted deleted() { DARABONBA_PTR_GET(deleted_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setDeleted(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted & deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setDeleted(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted && deleted) { DARABONBA_PTR_SET_RVALUE(deleted_, deleted) };


    // pushed Field Functions 
    bool hasPushed() const { return this->pushed_ != nullptr;};
    void deletePushed() { this->pushed_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed & pushed() const { DARABONBA_PTR_GET_CONST(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed pushed() { DARABONBA_PTR_GET(pushed_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setPushed(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed & pushed) { DARABONBA_PTR_SET_VALUE(pushed_, pushed) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setPushed(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed && pushed) { DARABONBA_PTR_SET_RVALUE(pushed_, pushed) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame & same() const { DARABONBA_PTR_GET_CONST(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame same() { DARABONBA_PTR_GET(same_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setSame(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame & same) { DARABONBA_PTR_SET_VALUE(same_, same) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setSame(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame && same) { DARABONBA_PTR_SET_RVALUE(same_, same) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated & updated() const { DARABONBA_PTR_GET_CONST(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated updated() { DARABONBA_PTR_GET(updated_, Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setUpdated(const Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultUserStatistics& setUpdated(Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    // The binding result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsBinded> binded_ = nullptr;
    // The creation result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsCreated> created_ = nullptr;
    // The deletion result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsDeleted> deleted_ = nullptr;
    // The notification result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsPushed> pushed_ = nullptr;
    // The result statistics about identical users.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsSame> same_ = nullptr;
    // The update result statistics.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResultUserStatisticsUpdated> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
