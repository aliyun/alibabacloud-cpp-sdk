// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODYSDLEVENTSENSITIVEDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODYSDLEVENTSENSITIVEDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveData, sensitiveData_);
      DARABONBA_PTR_TO_JSON(SensitiveDataCnt, sensitiveDataCnt_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveData, sensitiveData_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataCnt, sensitiveDataCnt_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList() = default ;
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList(const DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList &) = default ;
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList(DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList &&) = default ;
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList() = default ;
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& operator=(const DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList &) = default ;
    DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& operator=(DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sensitiveData_ == nullptr
        && return this->sensitiveDataCnt_ == nullptr && return this->sensitiveLevel_ == nullptr && return this->sensitiveType_ == nullptr && return this->srcIp_ == nullptr && return this->startTime_ == nullptr; };
    // sensitiveData Field Functions 
    bool hasSensitiveData() const { return this->sensitiveData_ != nullptr;};
    void deleteSensitiveData() { this->sensitiveData_ = nullptr;};
    inline string sensitiveData() const { DARABONBA_PTR_GET_DEFAULT(sensitiveData_, "") };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setSensitiveData(string sensitiveData) { DARABONBA_PTR_SET_VALUE(sensitiveData_, sensitiveData) };


    // sensitiveDataCnt Field Functions 
    bool hasSensitiveDataCnt() const { return this->sensitiveDataCnt_ != nullptr;};
    void deleteSensitiveDataCnt() { this->sensitiveDataCnt_ = nullptr;};
    inline int64_t sensitiveDataCnt() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCnt_, 0L) };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setSensitiveDataCnt(int64_t sensitiveDataCnt) { DARABONBA_PTR_SET_VALUE(sensitiveDataCnt_, sensitiveDataCnt) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline string sensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> sensitiveData_ = nullptr;
    std::shared_ptr<int64_t> sensitiveDataCnt_ = nullptr;
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    std::shared_ptr<string> sensitiveType_ = nullptr;
    std::shared_ptr<string> srcIp_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
