// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSHARINGWITHRESOURCEDIRECTORYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSHARINGWITHRESOURCEDIRECTORYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class CheckSharingWithResourceDirectoryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSharingWithResourceDirectoryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSharingWithRd, enableSharingWithRd_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSharingWithResourceDirectoryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSharingWithRd, enableSharingWithRd_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckSharingWithResourceDirectoryStatusResponseBody() = default ;
    CheckSharingWithResourceDirectoryStatusResponseBody(const CheckSharingWithResourceDirectoryStatusResponseBody &) = default ;
    CheckSharingWithResourceDirectoryStatusResponseBody(CheckSharingWithResourceDirectoryStatusResponseBody &&) = default ;
    CheckSharingWithResourceDirectoryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSharingWithResourceDirectoryStatusResponseBody() = default ;
    CheckSharingWithResourceDirectoryStatusResponseBody& operator=(const CheckSharingWithResourceDirectoryStatusResponseBody &) = default ;
    CheckSharingWithResourceDirectoryStatusResponseBody& operator=(CheckSharingWithResourceDirectoryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableSharingWithRd_ == nullptr
        && this->requestId_ == nullptr; };
    // enableSharingWithRd Field Functions 
    bool hasEnableSharingWithRd() const { return this->enableSharingWithRd_ != nullptr;};
    void deleteEnableSharingWithRd() { this->enableSharingWithRd_ = nullptr;};
    inline bool getEnableSharingWithRd() const { DARABONBA_PTR_GET_DEFAULT(enableSharingWithRd_, false) };
    inline CheckSharingWithResourceDirectoryStatusResponseBody& setEnableSharingWithRd(bool enableSharingWithRd) { DARABONBA_PTR_SET_VALUE(enableSharingWithRd_, enableSharingWithRd) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSharingWithResourceDirectoryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether resource sharing within a resource directory is enabled. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> enableSharingWithRd_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
