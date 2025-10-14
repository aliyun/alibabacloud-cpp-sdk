// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDETECTIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDetectionStatisticResponseBodyDetectionStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDetectionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetectionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionStatistic, detectionStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetectionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionStatistic, detectionStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDetectionStatisticResponseBody() = default ;
    GetDetectionStatisticResponseBody(const GetDetectionStatisticResponseBody &) = default ;
    GetDetectionStatisticResponseBody(GetDetectionStatisticResponseBody &&) = default ;
    GetDetectionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetectionStatisticResponseBody() = default ;
    GetDetectionStatisticResponseBody& operator=(const GetDetectionStatisticResponseBody &) = default ;
    GetDetectionStatisticResponseBody& operator=(GetDetectionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionStatistic_ == nullptr
        && return this->requestId_ == nullptr; };
    // detectionStatistic Field Functions 
    bool hasDetectionStatistic() const { return this->detectionStatistic_ != nullptr;};
    void deleteDetectionStatistic() { this->detectionStatistic_ = nullptr;};
    inline const GetDetectionStatisticResponseBodyDetectionStatistic & detectionStatistic() const { DARABONBA_PTR_GET_CONST(detectionStatistic_, GetDetectionStatisticResponseBodyDetectionStatistic) };
    inline GetDetectionStatisticResponseBodyDetectionStatistic detectionStatistic() { DARABONBA_PTR_GET(detectionStatistic_, GetDetectionStatisticResponseBodyDetectionStatistic) };
    inline GetDetectionStatisticResponseBody& setDetectionStatistic(const GetDetectionStatisticResponseBodyDetectionStatistic & detectionStatistic) { DARABONBA_PTR_SET_VALUE(detectionStatistic_, detectionStatistic) };
    inline GetDetectionStatisticResponseBody& setDetectionStatistic(GetDetectionStatisticResponseBodyDetectionStatistic && detectionStatistic) { DARABONBA_PTR_SET_RVALUE(detectionStatistic_, detectionStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDetectionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetDetectionStatisticResponseBodyDetectionStatistic> detectionStatistic_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
