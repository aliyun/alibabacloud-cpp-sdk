// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODYDATASHARETIMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODYDATASHARETIMELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanShareAccountsResponseBodyDataShareTimeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanShareAccountsResponseBodyDataShareTimeList& obj) { 
      DARABONBA_PTR_TO_JSON(ShareEndTime, shareEndTime_);
      DARABONBA_PTR_TO_JSON(ShareStartTime, shareStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanShareAccountsResponseBodyDataShareTimeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ShareEndTime, shareEndTime_);
      DARABONBA_PTR_FROM_JSON(ShareStartTime, shareStartTime_);
    };
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList() = default ;
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList(const GetSavingPlanShareAccountsResponseBodyDataShareTimeList &) = default ;
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList(GetSavingPlanShareAccountsResponseBodyDataShareTimeList &&) = default ;
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanShareAccountsResponseBodyDataShareTimeList() = default ;
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList& operator=(const GetSavingPlanShareAccountsResponseBodyDataShareTimeList &) = default ;
    GetSavingPlanShareAccountsResponseBodyDataShareTimeList& operator=(GetSavingPlanShareAccountsResponseBodyDataShareTimeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shareEndTime_ != nullptr
        && this->shareStartTime_ != nullptr; };
    // shareEndTime Field Functions 
    bool hasShareEndTime() const { return this->shareEndTime_ != nullptr;};
    void deleteShareEndTime() { this->shareEndTime_ = nullptr;};
    inline string shareEndTime() const { DARABONBA_PTR_GET_DEFAULT(shareEndTime_, "") };
    inline GetSavingPlanShareAccountsResponseBodyDataShareTimeList& setShareEndTime(string shareEndTime) { DARABONBA_PTR_SET_VALUE(shareEndTime_, shareEndTime) };


    // shareStartTime Field Functions 
    bool hasShareStartTime() const { return this->shareStartTime_ != nullptr;};
    void deleteShareStartTime() { this->shareStartTime_ = nullptr;};
    inline string shareStartTime() const { DARABONBA_PTR_GET_DEFAULT(shareStartTime_, "") };
    inline GetSavingPlanShareAccountsResponseBodyDataShareTimeList& setShareStartTime(string shareStartTime) { DARABONBA_PTR_SET_VALUE(shareStartTime_, shareStartTime) };


  protected:
    std::shared_ptr<string> shareEndTime_ = nullptr;
    std::shared_ptr<string> shareStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
