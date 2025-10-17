// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDEVENTDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFACTORLISTRELATEDEVENTDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& obj) { 
      DARABONBA_PTR_TO_JSON(EventDataItems, eventDataItems_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDataItems, eventDataItems_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& operator=(DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventDataItems_ == nullptr
        && return this->role_ == nullptr && return this->userId_ == nullptr; };
    // eventDataItems Field Functions 
    bool hasEventDataItems() const { return this->eventDataItems_ != nullptr;};
    void deleteEventDataItems() { this->eventDataItems_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> & eventDataItems() const { DARABONBA_PTR_GET_CONST(eventDataItems_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> eventDataItems() { DARABONBA_PTR_GET(eventDataItems_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& setEventDataItems(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> & eventDataItems) { DARABONBA_PTR_SET_VALUE(eventDataItems_, eventDataItems) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& setEventDataItems(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> && eventDataItems) { DARABONBA_PTR_SET_RVALUE(eventDataItems_, eventDataItems) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>> eventDataItems_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
