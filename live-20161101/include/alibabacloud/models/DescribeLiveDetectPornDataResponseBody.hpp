// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDetectPornDataResponseBodyDetectPornData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectPornDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectPornDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectPornData, detectPornData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectPornDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectPornData, detectPornData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDetectPornDataResponseBody() = default ;
    DescribeLiveDetectPornDataResponseBody(const DescribeLiveDetectPornDataResponseBody &) = default ;
    DescribeLiveDetectPornDataResponseBody(DescribeLiveDetectPornDataResponseBody &&) = default ;
    DescribeLiveDetectPornDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectPornDataResponseBody() = default ;
    DescribeLiveDetectPornDataResponseBody& operator=(const DescribeLiveDetectPornDataResponseBody &) = default ;
    DescribeLiveDetectPornDataResponseBody& operator=(DescribeLiveDetectPornDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectPornData_ == nullptr
        && return this->requestId_ == nullptr; };
    // detectPornData Field Functions 
    bool hasDetectPornData() const { return this->detectPornData_ != nullptr;};
    void deleteDetectPornData() { this->detectPornData_ = nullptr;};
    inline const DescribeLiveDetectPornDataResponseBodyDetectPornData & detectPornData() const { DARABONBA_PTR_GET_CONST(detectPornData_, DescribeLiveDetectPornDataResponseBodyDetectPornData) };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornData detectPornData() { DARABONBA_PTR_GET(detectPornData_, DescribeLiveDetectPornDataResponseBodyDetectPornData) };
    inline DescribeLiveDetectPornDataResponseBody& setDetectPornData(const DescribeLiveDetectPornDataResponseBodyDetectPornData & detectPornData) { DARABONBA_PTR_SET_VALUE(detectPornData_, detectPornData) };
    inline DescribeLiveDetectPornDataResponseBody& setDetectPornData(DescribeLiveDetectPornDataResponseBodyDetectPornData && detectPornData) { DARABONBA_PTR_SET_RVALUE(detectPornData_, detectPornData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDetectPornDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidth data returned at each interval.
    std::shared_ptr<DescribeLiveDetectPornDataResponseBodyDetectPornData> detectPornData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
