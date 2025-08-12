// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTCMPUEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERTCMPUEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRtcMPUEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
    };
    CreateRtcMPUEventSubResponseBody() = default ;
    CreateRtcMPUEventSubResponseBody(const CreateRtcMPUEventSubResponseBody &) = default ;
    CreateRtcMPUEventSubResponseBody(CreateRtcMPUEventSubResponseBody &&) = default ;
    CreateRtcMPUEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRtcMPUEventSubResponseBody() = default ;
    CreateRtcMPUEventSubResponseBody& operator=(const CreateRtcMPUEventSubResponseBody &) = default ;
    CreateRtcMPUEventSubResponseBody& operator=(CreateRtcMPUEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->subId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRtcMPUEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline CreateRtcMPUEventSubResponseBody& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the subscription.
    std::shared_ptr<string> subId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
