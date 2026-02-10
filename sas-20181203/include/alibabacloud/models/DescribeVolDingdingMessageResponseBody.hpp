// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVOLDINGDINGMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVOLDINGDINGMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVolDingdingMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVolDingdingMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DingdingUrl, dingdingUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVolDingdingMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DingdingUrl, dingdingUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVolDingdingMessageResponseBody() = default ;
    DescribeVolDingdingMessageResponseBody(const DescribeVolDingdingMessageResponseBody &) = default ;
    DescribeVolDingdingMessageResponseBody(DescribeVolDingdingMessageResponseBody &&) = default ;
    DescribeVolDingdingMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVolDingdingMessageResponseBody() = default ;
    DescribeVolDingdingMessageResponseBody& operator=(const DescribeVolDingdingMessageResponseBody &) = default ;
    DescribeVolDingdingMessageResponseBody& operator=(DescribeVolDingdingMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingdingUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // dingdingUrl Field Functions 
    bool hasDingdingUrl() const { return this->dingdingUrl_ != nullptr;};
    void deleteDingdingUrl() { this->dingdingUrl_ = nullptr;};
    inline string getDingdingUrl() const { DARABONBA_PTR_GET_DEFAULT(dingdingUrl_, "") };
    inline DescribeVolDingdingMessageResponseBody& setDingdingUrl(string dingdingUrl) { DARABONBA_PTR_SET_VALUE(dingdingUrl_, dingdingUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVolDingdingMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The QR code address of the DingTalk group.
    shared_ptr<string> dingdingUrl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
