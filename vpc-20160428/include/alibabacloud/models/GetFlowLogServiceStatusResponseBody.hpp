// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWLOGSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWLOGSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetFlowLogServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowLogServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowLogServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFlowLogServiceStatusResponseBody() = default ;
    GetFlowLogServiceStatusResponseBody(const GetFlowLogServiceStatusResponseBody &) = default ;
    GetFlowLogServiceStatusResponseBody(GetFlowLogServiceStatusResponseBody &&) = default ;
    GetFlowLogServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowLogServiceStatusResponseBody() = default ;
    GetFlowLogServiceStatusResponseBody& operator=(const GetFlowLogServiceStatusResponseBody &) = default ;
    GetFlowLogServiceStatusResponseBody& operator=(GetFlowLogServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->requestId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetFlowLogServiceStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowLogServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the flow log feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no You can call the [OpenFlowLogService](https://help.aliyun.com/document_detail/449637.html) operation to enable the flow log feature.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
