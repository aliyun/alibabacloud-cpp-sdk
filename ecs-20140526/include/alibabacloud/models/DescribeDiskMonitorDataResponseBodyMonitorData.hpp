// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskMonitorDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(DiskMonitorData, diskMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskMonitorData, diskMonitorData_);
    };
    DescribeDiskMonitorDataResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(const DescribeDiskMonitorDataResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(DescribeDiskMonitorDataResponseBodyMonitorData &&) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataResponseBodyMonitorData() = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData& operator=(const DescribeDiskMonitorDataResponseBodyMonitorData &) = default ;
    DescribeDiskMonitorDataResponseBodyMonitorData& operator=(DescribeDiskMonitorDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskMonitorData_ == nullptr; };
    // diskMonitorData Field Functions 
    bool hasDiskMonitorData() const { return this->diskMonitorData_ != nullptr;};
    void deleteDiskMonitorData() { this->diskMonitorData_ = nullptr;};
    inline const vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData> & diskMonitorData() const { DARABONBA_PTR_GET_CONST(diskMonitorData_, vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData>) };
    inline vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData> diskMonitorData() { DARABONBA_PTR_GET(diskMonitorData_, vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData>) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setDiskMonitorData(const vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData> & diskMonitorData) { DARABONBA_PTR_SET_VALUE(diskMonitorData_, diskMonitorData) };
    inline DescribeDiskMonitorDataResponseBodyMonitorData& setDiskMonitorData(vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData> && diskMonitorData) { DARABONBA_PTR_SET_RVALUE(diskMonitorData_, diskMonitorData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDiskMonitorDataResponseBodyMonitorDataDiskMonitorData>> diskMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
