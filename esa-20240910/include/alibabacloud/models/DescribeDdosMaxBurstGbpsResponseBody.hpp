// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSMAXBURSTGBPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSMAXBURSTGBPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDdosMaxBurstGbpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosMaxBurstGbpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxBurstGbps, maxBurstGbps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosMaxBurstGbpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxBurstGbps, maxBurstGbps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDdosMaxBurstGbpsResponseBody() = default ;
    DescribeDdosMaxBurstGbpsResponseBody(const DescribeDdosMaxBurstGbpsResponseBody &) = default ;
    DescribeDdosMaxBurstGbpsResponseBody(DescribeDdosMaxBurstGbpsResponseBody &&) = default ;
    DescribeDdosMaxBurstGbpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosMaxBurstGbpsResponseBody() = default ;
    DescribeDdosMaxBurstGbpsResponseBody& operator=(const DescribeDdosMaxBurstGbpsResponseBody &) = default ;
    DescribeDdosMaxBurstGbpsResponseBody& operator=(DescribeDdosMaxBurstGbpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxBurstGbps_ == nullptr && this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDdosMaxBurstGbpsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxBurstGbps Field Functions 
    bool hasMaxBurstGbps() const { return this->maxBurstGbps_ != nullptr;};
    void deleteMaxBurstGbps() { this->maxBurstGbps_ = nullptr;};
    inline string getMaxBurstGbps() const { DARABONBA_PTR_GET_DEFAULT(maxBurstGbps_, "") };
    inline DescribeDdosMaxBurstGbpsResponseBody& setMaxBurstGbps(string maxBurstGbps) { DARABONBA_PTR_SET_VALUE(maxBurstGbps_, maxBurstGbps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosMaxBurstGbpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> maxBurstGbps_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
