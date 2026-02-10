// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERTCMPUEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERTCMPUEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteRtcMPUEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteRtcMPUEventSubResponseBody() = default ;
    DeleteRtcMPUEventSubResponseBody(const DeleteRtcMPUEventSubResponseBody &) = default ;
    DeleteRtcMPUEventSubResponseBody(DeleteRtcMPUEventSubResponseBody &&) = default ;
    DeleteRtcMPUEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRtcMPUEventSubResponseBody() = default ;
    DeleteRtcMPUEventSubResponseBody& operator=(const DeleteRtcMPUEventSubResponseBody &) = default ;
    DeleteRtcMPUEventSubResponseBody& operator=(DeleteRtcMPUEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRtcMPUEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
