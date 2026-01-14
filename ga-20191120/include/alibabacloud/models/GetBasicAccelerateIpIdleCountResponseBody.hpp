// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICACCELERATEIPIDLECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICACCELERATEIPIDLECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetBasicAccelerateIpIdleCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicAccelerateIpIdleCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicAccelerateIpIdleCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetBasicAccelerateIpIdleCountResponseBody() = default ;
    GetBasicAccelerateIpIdleCountResponseBody(const GetBasicAccelerateIpIdleCountResponseBody &) = default ;
    GetBasicAccelerateIpIdleCountResponseBody(GetBasicAccelerateIpIdleCountResponseBody &&) = default ;
    GetBasicAccelerateIpIdleCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicAccelerateIpIdleCountResponseBody() = default ;
    GetBasicAccelerateIpIdleCountResponseBody& operator=(const GetBasicAccelerateIpIdleCountResponseBody &) = default ;
    GetBasicAccelerateIpIdleCountResponseBody& operator=(GetBasicAccelerateIpIdleCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicAccelerateIpIdleCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetBasicAccelerateIpIdleCountResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned, which indicates the number of idle accelerated IP addresses.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
