// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODYDATADETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODYDATADETAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LiveUpstreamQosDataResponseBodyDataDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectDur, connectDur_);
      DARABONBA_PTR_TO_JSON(ConnectFailedCount, connectFailedCount_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FirstDataDur, firstDataDur_);
      DARABONBA_PTR_TO_JSON(FirstDataFailedCount, firstDataFailedCount_);
      DARABONBA_PTR_TO_JSON(FirstFrameDur, firstFrameDur_);
      DARABONBA_PTR_TO_JSON(FirstFrameSuccessCount, firstFrameSuccessCount_);
      DARABONBA_PTR_TO_JSON(StatusCode2Xx, statusCode2Xx_);
      DARABONBA_PTR_TO_JSON(StatusCode3Xx, statusCode3Xx_);
      DARABONBA_PTR_TO_JSON(StatusCode4Xx, statusCode4Xx_);
      DARABONBA_PTR_TO_JSON(StatusCode5Xx, statusCode5Xx_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectDur, connectDur_);
      DARABONBA_PTR_FROM_JSON(ConnectFailedCount, connectFailedCount_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FirstDataDur, firstDataDur_);
      DARABONBA_PTR_FROM_JSON(FirstDataFailedCount, firstDataFailedCount_);
      DARABONBA_PTR_FROM_JSON(FirstFrameDur, firstFrameDur_);
      DARABONBA_PTR_FROM_JSON(FirstFrameSuccessCount, firstFrameSuccessCount_);
      DARABONBA_PTR_FROM_JSON(StatusCode2Xx, statusCode2Xx_);
      DARABONBA_PTR_FROM_JSON(StatusCode3Xx, statusCode3Xx_);
      DARABONBA_PTR_FROM_JSON(StatusCode4Xx, statusCode4Xx_);
      DARABONBA_PTR_FROM_JSON(StatusCode5Xx, statusCode5Xx_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    LiveUpstreamQosDataResponseBodyDataDetailData() = default ;
    LiveUpstreamQosDataResponseBodyDataDetailData(const LiveUpstreamQosDataResponseBodyDataDetailData &) = default ;
    LiveUpstreamQosDataResponseBodyDataDetailData(LiveUpstreamQosDataResponseBodyDataDetailData &&) = default ;
    LiveUpstreamQosDataResponseBodyDataDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataResponseBodyDataDetailData() = default ;
    LiveUpstreamQosDataResponseBodyDataDetailData& operator=(const LiveUpstreamQosDataResponseBodyDataDetailData &) = default ;
    LiveUpstreamQosDataResponseBodyDataDetailData& operator=(LiveUpstreamQosDataResponseBodyDataDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectDur_ != nullptr
        && this->connectFailedCount_ != nullptr && this->count_ != nullptr && this->firstDataDur_ != nullptr && this->firstDataFailedCount_ != nullptr && this->firstFrameDur_ != nullptr
        && this->firstFrameSuccessCount_ != nullptr && this->statusCode2Xx_ != nullptr && this->statusCode3Xx_ != nullptr && this->statusCode4Xx_ != nullptr && this->statusCode5Xx_ != nullptr
        && this->timestamp_ != nullptr; };
    // connectDur Field Functions 
    bool hasConnectDur() const { return this->connectDur_ != nullptr;};
    void deleteConnectDur() { this->connectDur_ = nullptr;};
    inline int64_t connectDur() const { DARABONBA_PTR_GET_DEFAULT(connectDur_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setConnectDur(int64_t connectDur) { DARABONBA_PTR_SET_VALUE(connectDur_, connectDur) };


    // connectFailedCount Field Functions 
    bool hasConnectFailedCount() const { return this->connectFailedCount_ != nullptr;};
    void deleteConnectFailedCount() { this->connectFailedCount_ = nullptr;};
    inline int64_t connectFailedCount() const { DARABONBA_PTR_GET_DEFAULT(connectFailedCount_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setConnectFailedCount(int64_t connectFailedCount) { DARABONBA_PTR_SET_VALUE(connectFailedCount_, connectFailedCount) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // firstDataDur Field Functions 
    bool hasFirstDataDur() const { return this->firstDataDur_ != nullptr;};
    void deleteFirstDataDur() { this->firstDataDur_ = nullptr;};
    inline int64_t firstDataDur() const { DARABONBA_PTR_GET_DEFAULT(firstDataDur_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setFirstDataDur(int64_t firstDataDur) { DARABONBA_PTR_SET_VALUE(firstDataDur_, firstDataDur) };


    // firstDataFailedCount Field Functions 
    bool hasFirstDataFailedCount() const { return this->firstDataFailedCount_ != nullptr;};
    void deleteFirstDataFailedCount() { this->firstDataFailedCount_ = nullptr;};
    inline int64_t firstDataFailedCount() const { DARABONBA_PTR_GET_DEFAULT(firstDataFailedCount_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setFirstDataFailedCount(int64_t firstDataFailedCount) { DARABONBA_PTR_SET_VALUE(firstDataFailedCount_, firstDataFailedCount) };


    // firstFrameDur Field Functions 
    bool hasFirstFrameDur() const { return this->firstFrameDur_ != nullptr;};
    void deleteFirstFrameDur() { this->firstFrameDur_ = nullptr;};
    inline int64_t firstFrameDur() const { DARABONBA_PTR_GET_DEFAULT(firstFrameDur_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setFirstFrameDur(int64_t firstFrameDur) { DARABONBA_PTR_SET_VALUE(firstFrameDur_, firstFrameDur) };


    // firstFrameSuccessCount Field Functions 
    bool hasFirstFrameSuccessCount() const { return this->firstFrameSuccessCount_ != nullptr;};
    void deleteFirstFrameSuccessCount() { this->firstFrameSuccessCount_ = nullptr;};
    inline int64_t firstFrameSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(firstFrameSuccessCount_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setFirstFrameSuccessCount(int64_t firstFrameSuccessCount) { DARABONBA_PTR_SET_VALUE(firstFrameSuccessCount_, firstFrameSuccessCount) };


    // statusCode2Xx Field Functions 
    bool hasStatusCode2Xx() const { return this->statusCode2Xx_ != nullptr;};
    void deleteStatusCode2Xx() { this->statusCode2Xx_ = nullptr;};
    inline int64_t statusCode2Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode2Xx_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setStatusCode2Xx(int64_t statusCode2Xx) { DARABONBA_PTR_SET_VALUE(statusCode2Xx_, statusCode2Xx) };


    // statusCode3Xx Field Functions 
    bool hasStatusCode3Xx() const { return this->statusCode3Xx_ != nullptr;};
    void deleteStatusCode3Xx() { this->statusCode3Xx_ = nullptr;};
    inline int64_t statusCode3Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode3Xx_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setStatusCode3Xx(int64_t statusCode3Xx) { DARABONBA_PTR_SET_VALUE(statusCode3Xx_, statusCode3Xx) };


    // statusCode4Xx Field Functions 
    bool hasStatusCode4Xx() const { return this->statusCode4Xx_ != nullptr;};
    void deleteStatusCode4Xx() { this->statusCode4Xx_ = nullptr;};
    inline int64_t statusCode4Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode4Xx_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setStatusCode4Xx(int64_t statusCode4Xx) { DARABONBA_PTR_SET_VALUE(statusCode4Xx_, statusCode4Xx) };


    // statusCode5Xx Field Functions 
    bool hasStatusCode5Xx() const { return this->statusCode5Xx_ != nullptr;};
    void deleteStatusCode5Xx() { this->statusCode5Xx_ = nullptr;};
    inline int64_t statusCode5Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode5Xx_, 0L) };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setStatusCode5Xx(int64_t statusCode5Xx) { DARABONBA_PTR_SET_VALUE(statusCode5Xx_, statusCode5Xx) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline LiveUpstreamQosDataResponseBodyDataDetailData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<int64_t> connectDur_ = nullptr;
    std::shared_ptr<int64_t> connectFailedCount_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<int64_t> firstDataDur_ = nullptr;
    std::shared_ptr<int64_t> firstDataFailedCount_ = nullptr;
    std::shared_ptr<int64_t> firstFrameDur_ = nullptr;
    std::shared_ptr<int64_t> firstFrameSuccessCount_ = nullptr;
    std::shared_ptr<int64_t> statusCode2Xx_ = nullptr;
    std::shared_ptr<int64_t> statusCode3Xx_ = nullptr;
    std::shared_ptr<int64_t> statusCode4Xx_ = nullptr;
    std::shared_ptr<int64_t> statusCode5Xx_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
