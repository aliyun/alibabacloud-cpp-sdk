// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSLSOPENSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSLSOPENSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class GetSlsOpenStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSlsOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsOpenStatus, slsOpenStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetSlsOpenStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsOpenStatus, slsOpenStatus_);
    };
    GetSlsOpenStatusResponseBody() = default ;
    GetSlsOpenStatusResponseBody(const GetSlsOpenStatusResponseBody &) = default ;
    GetSlsOpenStatusResponseBody(GetSlsOpenStatusResponseBody &&) = default ;
    GetSlsOpenStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSlsOpenStatusResponseBody() = default ;
    GetSlsOpenStatusResponseBody& operator=(const GetSlsOpenStatusResponseBody &) = default ;
    GetSlsOpenStatusResponseBody& operator=(GetSlsOpenStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsOpenStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSlsOpenStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsOpenStatus Field Functions 
    bool hasSlsOpenStatus() const { return this->slsOpenStatus_ != nullptr;};
    void deleteSlsOpenStatus() { this->slsOpenStatus_ = nullptr;};
    inline bool getSlsOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(slsOpenStatus_, false) };
    inline GetSlsOpenStatusResponseBody& setSlsOpenStatus(bool slsOpenStatus) { DARABONBA_PTR_SET_VALUE(slsOpenStatus_, slsOpenStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether Simple Log Service was activated. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> slsOpenStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
