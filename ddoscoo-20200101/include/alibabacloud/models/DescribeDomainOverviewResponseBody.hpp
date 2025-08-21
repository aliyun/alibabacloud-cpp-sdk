// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxHttp, maxHttp_);
      DARABONBA_PTR_TO_JSON(MaxHttps, maxHttps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxHttp, maxHttp_);
      DARABONBA_PTR_FROM_JSON(MaxHttps, maxHttps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainOverviewResponseBody() = default ;
    DescribeDomainOverviewResponseBody(const DescribeDomainOverviewResponseBody &) = default ;
    DescribeDomainOverviewResponseBody(DescribeDomainOverviewResponseBody &&) = default ;
    DescribeDomainOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainOverviewResponseBody() = default ;
    DescribeDomainOverviewResponseBody& operator=(const DescribeDomainOverviewResponseBody &) = default ;
    DescribeDomainOverviewResponseBody& operator=(DescribeDomainOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxHttp_ != nullptr
        && this->maxHttps_ != nullptr && this->requestId_ != nullptr; };
    // maxHttp Field Functions 
    bool hasMaxHttp() const { return this->maxHttp_ != nullptr;};
    void deleteMaxHttp() { this->maxHttp_ = nullptr;};
    inline int64_t maxHttp() const { DARABONBA_PTR_GET_DEFAULT(maxHttp_, 0L) };
    inline DescribeDomainOverviewResponseBody& setMaxHttp(int64_t maxHttp) { DARABONBA_PTR_SET_VALUE(maxHttp_, maxHttp) };


    // maxHttps Field Functions 
    bool hasMaxHttps() const { return this->maxHttps_ != nullptr;};
    void deleteMaxHttps() { this->maxHttps_ = nullptr;};
    inline int64_t maxHttps() const { DARABONBA_PTR_GET_DEFAULT(maxHttps_, 0L) };
    inline DescribeDomainOverviewResponseBody& setMaxHttps(int64_t maxHttps) { DARABONBA_PTR_SET_VALUE(maxHttps_, maxHttps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The peak queries per second (QPS) during HTTP traffic scrubbing. Unit: QPS.
    std::shared_ptr<int64_t> maxHttp_ = nullptr;
    // The peak QPS during HTTPS traffic scrubbing. Unit: QPS.
    std::shared_ptr<int64_t> maxHttps_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
