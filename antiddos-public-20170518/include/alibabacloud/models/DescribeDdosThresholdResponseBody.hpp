// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDdosThresholdResponseBodyThresholds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosThresholdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
    };
    DescribeDdosThresholdResponseBody() = default ;
    DescribeDdosThresholdResponseBody(const DescribeDdosThresholdResponseBody &) = default ;
    DescribeDdosThresholdResponseBody(DescribeDdosThresholdResponseBody &&) = default ;
    DescribeDdosThresholdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosThresholdResponseBody() = default ;
    DescribeDdosThresholdResponseBody& operator=(const DescribeDdosThresholdResponseBody &) = default ;
    DescribeDdosThresholdResponseBody& operator=(DescribeDdosThresholdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->thresholds_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosThresholdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const DescribeDdosThresholdResponseBodyThresholds & thresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, DescribeDdosThresholdResponseBodyThresholds) };
    inline DescribeDdosThresholdResponseBodyThresholds thresholds() { DARABONBA_PTR_GET(thresholds_, DescribeDdosThresholdResponseBodyThresholds) };
    inline DescribeDdosThresholdResponseBody& setThresholds(const DescribeDdosThresholdResponseBodyThresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline DescribeDdosThresholdResponseBody& setThresholds(DescribeDdosThresholdResponseBodyThresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the details of the threshold.
    std::shared_ptr<DescribeDdosThresholdResponseBodyThresholds> thresholds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
