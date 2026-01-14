// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPAREIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPAREIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetSpareIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpareIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpareIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetSpareIpResponseBody() = default ;
    GetSpareIpResponseBody(const GetSpareIpResponseBody &) = default ;
    GetSpareIpResponseBody(GetSpareIpResponseBody &&) = default ;
    GetSpareIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpareIpResponseBody() = default ;
    GetSpareIpResponseBody& operator=(const GetSpareIpResponseBody &) = default ;
    GetSpareIpResponseBody& operator=(GetSpareIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->state_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpareIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSpareIpResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the secondary IP address. Valid values:
    // 
    // *   **active:** The secondary IP address is available.
    // *   **inuse:** The secondary IP address is in use.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
