// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyResourceLogStatusResponseBody() = default ;
    ModifyResourceLogStatusResponseBody(const ModifyResourceLogStatusResponseBody &) = default ;
    ModifyResourceLogStatusResponseBody(ModifyResourceLogStatusResponseBody &&) = default ;
    ModifyResourceLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogStatusResponseBody() = default ;
    ModifyResourceLogStatusResponseBody& operator=(const ModifyResourceLogStatusResponseBody &) = default ;
    ModifyResourceLogStatusResponseBody& operator=(ModifyResourceLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->status_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyResourceLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyResourceLogStatusResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the log collection feature is enabled for the protected object. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
