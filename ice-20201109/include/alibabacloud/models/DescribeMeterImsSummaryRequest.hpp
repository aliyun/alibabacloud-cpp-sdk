// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
    };
    DescribeMeterImsSummaryRequest() = default ;
    DescribeMeterImsSummaryRequest(const DescribeMeterImsSummaryRequest &) = default ;
    DescribeMeterImsSummaryRequest(DescribeMeterImsSummaryRequest &&) = default ;
    DescribeMeterImsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsSummaryRequest() = default ;
    DescribeMeterImsSummaryRequest& operator=(const DescribeMeterImsSummaryRequest &) = default ;
    DescribeMeterImsSummaryRequest& operator=(DescribeMeterImsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTs_ != nullptr
        && this->region_ != nullptr && this->startTs_ != nullptr; };
    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeMeterImsSummaryRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMeterImsSummaryRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeMeterImsSummaryRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


  protected:
    // The end of the time range to query. The value is a 10-digit timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // This parameter does not take effect. By default, the usage data of all regions is returned.
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range to query. The value is a 10-digit timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
