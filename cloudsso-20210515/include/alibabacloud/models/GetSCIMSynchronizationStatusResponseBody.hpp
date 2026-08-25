// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCIMSYNCHRONIZATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCIMSYNCHRONIZATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetSCIMSynchronizationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSCIMSynchronizationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SCIMSynchronizationStatus, SCIMSynchronizationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetSCIMSynchronizationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SCIMSynchronizationStatus, SCIMSynchronizationStatus_);
    };
    GetSCIMSynchronizationStatusResponseBody() = default ;
    GetSCIMSynchronizationStatusResponseBody(const GetSCIMSynchronizationStatusResponseBody &) = default ;
    GetSCIMSynchronizationStatusResponseBody(GetSCIMSynchronizationStatusResponseBody &&) = default ;
    GetSCIMSynchronizationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSCIMSynchronizationStatusResponseBody() = default ;
    GetSCIMSynchronizationStatusResponseBody& operator=(const GetSCIMSynchronizationStatusResponseBody &) = default ;
    GetSCIMSynchronizationStatusResponseBody& operator=(GetSCIMSynchronizationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SCIMSynchronizationStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSCIMSynchronizationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SCIMSynchronizationStatus Field Functions 
    bool hasSCIMSynchronizationStatus() const { return this->SCIMSynchronizationStatus_ != nullptr;};
    void deleteSCIMSynchronizationStatus() { this->SCIMSynchronizationStatus_ = nullptr;};
    inline string getSCIMSynchronizationStatus() const { DARABONBA_PTR_GET_DEFAULT(SCIMSynchronizationStatus_, "") };
    inline GetSCIMSynchronizationStatusResponseBody& setSCIMSynchronizationStatus(string SCIMSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(SCIMSynchronizationStatus_, SCIMSynchronizationStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of SCIM synchronization. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    shared_ptr<string> SCIMSynchronizationStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
