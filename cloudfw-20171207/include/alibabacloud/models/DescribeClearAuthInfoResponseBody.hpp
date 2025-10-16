// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLEARAUTHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLEARAUTHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeClearAuthInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClearAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LeftTimes, leftTimes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClearAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LeftTimes, leftTimes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClearAuthInfoResponseBody() = default ;
    DescribeClearAuthInfoResponseBody(const DescribeClearAuthInfoResponseBody &) = default ;
    DescribeClearAuthInfoResponseBody(DescribeClearAuthInfoResponseBody &&) = default ;
    DescribeClearAuthInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClearAuthInfoResponseBody() = default ;
    DescribeClearAuthInfoResponseBody& operator=(const DescribeClearAuthInfoResponseBody &) = default ;
    DescribeClearAuthInfoResponseBody& operator=(DescribeClearAuthInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->leftTimes_ == nullptr && return this->requestId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline DescribeClearAuthInfoResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // leftTimes Field Functions 
    bool hasLeftTimes() const { return this->leftTimes_ != nullptr;};
    void deleteLeftTimes() { this->leftTimes_ = nullptr;};
    inline int32_t leftTimes() const { DARABONBA_PTR_GET_DEFAULT(leftTimes_, 0) };
    inline DescribeClearAuthInfoResponseBody& setLeftTimes(int32_t leftTimes) { DARABONBA_PTR_SET_VALUE(leftTimes_, leftTimes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClearAuthInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> leftTimes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
