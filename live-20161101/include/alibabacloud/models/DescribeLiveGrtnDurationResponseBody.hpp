// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveGrtnDurationResponseBodyStreamDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveGrtnDurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveGrtnDurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveGrtnDurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveGrtnDurationResponseBody() = default ;
    DescribeLiveGrtnDurationResponseBody(const DescribeLiveGrtnDurationResponseBody &) = default ;
    DescribeLiveGrtnDurationResponseBody(DescribeLiveGrtnDurationResponseBody &&) = default ;
    DescribeLiveGrtnDurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveGrtnDurationResponseBody() = default ;
    DescribeLiveGrtnDurationResponseBody& operator=(const DescribeLiveGrtnDurationResponseBody &) = default ;
    DescribeLiveGrtnDurationResponseBody& operator=(DescribeLiveGrtnDurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->streamDetailData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveGrtnDurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveGrtnDurationResponseBodyStreamDetailData & streamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveGrtnDurationResponseBodyStreamDetailData) };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailData streamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveGrtnDurationResponseBodyStreamDetailData) };
    inline DescribeLiveGrtnDurationResponseBody& setStreamDetailData(const DescribeLiveGrtnDurationResponseBodyStreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveGrtnDurationResponseBody& setStreamDetailData(DescribeLiveGrtnDurationResponseBodyStreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the co-streaming usage data.
    std::shared_ptr<DescribeLiveGrtnDurationResponseBodyStreamDetailData> streamDetailData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
