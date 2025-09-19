// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPERVISONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPERVISONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSupervisonInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupervisonInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LatestScanTime, latestScanTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupervisonInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestScanTime, latestScanTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSupervisonInfoResponseBody() = default ;
    DescribeSupervisonInfoResponseBody(const DescribeSupervisonInfoResponseBody &) = default ;
    DescribeSupervisonInfoResponseBody(DescribeSupervisonInfoResponseBody &&) = default ;
    DescribeSupervisonInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupervisonInfoResponseBody() = default ;
    DescribeSupervisonInfoResponseBody& operator=(const DescribeSupervisonInfoResponseBody &) = default ;
    DescribeSupervisonInfoResponseBody& operator=(DescribeSupervisonInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->latestScanTime_ != nullptr
        && this->requestId_ != nullptr; };
    // latestScanTime Field Functions 
    bool hasLatestScanTime() const { return this->latestScanTime_ != nullptr;};
    void deleteLatestScanTime() { this->latestScanTime_ = nullptr;};
    inline int64_t latestScanTime() const { DARABONBA_PTR_GET_DEFAULT(latestScanTime_, 0L) };
    inline DescribeSupervisonInfoResponseBody& setLatestScanTime(int64_t latestScanTime) { DARABONBA_PTR_SET_VALUE(latestScanTime_, latestScanTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupervisonInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time of the last system vulnerability scan. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> latestScanTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
