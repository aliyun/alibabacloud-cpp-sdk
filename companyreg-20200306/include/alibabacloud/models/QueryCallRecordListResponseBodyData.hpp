// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLRECORDLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLRECORDLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryCallRecordListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryCallRecordListResponseBodyData() = default ;
    QueryCallRecordListResponseBodyData(const QueryCallRecordListResponseBodyData &) = default ;
    QueryCallRecordListResponseBodyData(QueryCallRecordListResponseBodyData &&) = default ;
    QueryCallRecordListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallRecordListResponseBodyData() = default ;
    QueryCallRecordListResponseBodyData& operator=(const QueryCallRecordListResponseBodyData &) = default ;
    QueryCallRecordListResponseBodyData& operator=(QueryCallRecordListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->signatureUrl_ != nullptr && this->startTime_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline QueryCallRecordListResponseBodyData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // signatureUrl Field Functions 
    bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
    void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
    inline string signatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
    inline QueryCallRecordListResponseBodyData& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryCallRecordListResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> signatureUrl_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
