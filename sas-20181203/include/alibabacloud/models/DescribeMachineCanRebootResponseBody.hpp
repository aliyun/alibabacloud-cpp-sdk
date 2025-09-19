// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINECANREBOOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINECANREBOOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMachineCanRebootResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineCanRebootResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanReboot, canReboot_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineCanRebootResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanReboot, canReboot_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMachineCanRebootResponseBody() = default ;
    DescribeMachineCanRebootResponseBody(const DescribeMachineCanRebootResponseBody &) = default ;
    DescribeMachineCanRebootResponseBody(DescribeMachineCanRebootResponseBody &&) = default ;
    DescribeMachineCanRebootResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineCanRebootResponseBody() = default ;
    DescribeMachineCanRebootResponseBody& operator=(const DescribeMachineCanRebootResponseBody &) = default ;
    DescribeMachineCanRebootResponseBody& operator=(DescribeMachineCanRebootResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canReboot_ != nullptr
        && this->requestId_ != nullptr; };
    // canReboot Field Functions 
    bool hasCanReboot() const { return this->canReboot_ != nullptr;};
    void deleteCanReboot() { this->canReboot_ = nullptr;};
    inline bool canReboot() const { DARABONBA_PTR_GET_DEFAULT(canReboot_, false) };
    inline DescribeMachineCanRebootResponseBody& setCanReboot(bool canReboot) { DARABONBA_PTR_SET_VALUE(canReboot_, canReboot) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMachineCanRebootResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the server can be restarted. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> canReboot_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
