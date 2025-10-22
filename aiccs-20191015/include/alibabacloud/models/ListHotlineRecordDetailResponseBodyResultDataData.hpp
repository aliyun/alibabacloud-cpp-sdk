// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINERECORDDETAILRESPONSEBODYRESULTDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINERECORDDETAILRESPONSEBODYRESULTDATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListHotlineRecordDetailResponseBodyResultDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineRecordDetailResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineRecordDetailResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListHotlineRecordDetailResponseBodyResultDataData() = default ;
    ListHotlineRecordDetailResponseBodyResultDataData(const ListHotlineRecordDetailResponseBodyResultDataData &) = default ;
    ListHotlineRecordDetailResponseBodyResultDataData(ListHotlineRecordDetailResponseBodyResultDataData &&) = default ;
    ListHotlineRecordDetailResponseBodyResultDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineRecordDetailResponseBodyResultDataData() = default ;
    ListHotlineRecordDetailResponseBodyResultDataData& operator=(const ListHotlineRecordDetailResponseBodyResultDataData &) = default ;
    ListHotlineRecordDetailResponseBodyResultDataData& operator=(ListHotlineRecordDetailResponseBodyResultDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->ossUrl_ == nullptr && return this->servicerName_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListHotlineRecordDetailResponseBodyResultDataData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline ListHotlineRecordDetailResponseBodyResultDataData& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline ListHotlineRecordDetailResponseBodyResultDataData& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListHotlineRecordDetailResponseBodyResultDataData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
