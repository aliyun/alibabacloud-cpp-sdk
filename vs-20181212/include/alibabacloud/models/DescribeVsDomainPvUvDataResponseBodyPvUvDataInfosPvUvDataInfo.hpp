// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOSPVUVDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVUVDATARESPONSEBODYPVUVDATAINFOSPVUVDATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PV, PV_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(UV, UV_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PV, PV_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(UV, UV_);
    };
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo() = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo(const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo &) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo(DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo &&) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo() = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& operator=(const DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo &) = default ;
    DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& operator=(DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->PV_ == nullptr
        && return this->timeStamp_ == nullptr && return this->UV_ == nullptr; };
    // PV Field Functions 
    bool hasPV() const { return this->PV_ != nullptr;};
    void deletePV() { this->PV_ = nullptr;};
    inline string PV() const { DARABONBA_PTR_GET_DEFAULT(PV_, "") };
    inline DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& setPV(string PV) { DARABONBA_PTR_SET_VALUE(PV_, PV) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // UV Field Functions 
    bool hasUV() const { return this->UV_ != nullptr;};
    void deleteUV() { this->UV_ = nullptr;};
    inline string UV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
    inline DescribeVsDomainPvUvDataResponseBodyPvUvDataInfosPvUvDataInfo& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


  protected:
    std::shared_ptr<string> PV_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> UV_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
