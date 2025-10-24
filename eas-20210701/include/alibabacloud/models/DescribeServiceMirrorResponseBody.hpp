// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMIRRORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMIRRORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceMirrorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMirrorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMirrorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DescribeServiceMirrorResponseBody() = default ;
    DescribeServiceMirrorResponseBody(const DescribeServiceMirrorResponseBody &) = default ;
    DescribeServiceMirrorResponseBody(DescribeServiceMirrorResponseBody &&) = default ;
    DescribeServiceMirrorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMirrorResponseBody() = default ;
    DescribeServiceMirrorResponseBody& operator=(const DescribeServiceMirrorResponseBody &) = default ;
    DescribeServiceMirrorResponseBody& operator=(DescribeServiceMirrorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ratio_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceName_ == nullptr && return this->target_ == nullptr; };
    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline DescribeServiceMirrorResponseBody& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMirrorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceMirrorResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeServiceMirrorResponseBody& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The percentage of traffic that you want to mirror. Valid values: 0 to 100.
    std::shared_ptr<string> ratio_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The destination services to which you want to mirror traffic.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
