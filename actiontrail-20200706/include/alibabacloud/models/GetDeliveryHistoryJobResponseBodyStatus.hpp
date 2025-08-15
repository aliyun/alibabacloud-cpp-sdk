// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODYSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBRESPONSEBODYSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetDeliveryHistoryJobResponseBodyStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryHistoryJobResponseBodyStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryHistoryJobResponseBodyStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDeliveryHistoryJobResponseBodyStatus() = default ;
    GetDeliveryHistoryJobResponseBodyStatus(const GetDeliveryHistoryJobResponseBodyStatus &) = default ;
    GetDeliveryHistoryJobResponseBodyStatus(GetDeliveryHistoryJobResponseBodyStatus &&) = default ;
    GetDeliveryHistoryJobResponseBodyStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryHistoryJobResponseBodyStatus() = default ;
    GetDeliveryHistoryJobResponseBodyStatus& operator=(const GetDeliveryHistoryJobResponseBodyStatus &) = default ;
    GetDeliveryHistoryJobResponseBodyStatus& operator=(GetDeliveryHistoryJobResponseBodyStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr
        && this->status_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetDeliveryHistoryJobResponseBodyStatus& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDeliveryHistoryJobResponseBodyStatus& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The task status in each region. Valid values:
    // 
    // *   0: The task is initializing.
    // *   1: The task is delivering historical events.
    // *   2: The task is complete.
    // *   3: The task fails.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
