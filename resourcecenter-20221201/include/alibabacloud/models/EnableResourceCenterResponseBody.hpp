// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERESOURCECENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLERESOURCECENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class EnableResourceCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableResourceCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, EnableResourceCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    EnableResourceCenterResponseBody() = default ;
    EnableResourceCenterResponseBody(const EnableResourceCenterResponseBody &) = default ;
    EnableResourceCenterResponseBody(EnableResourceCenterResponseBody &&) = default ;
    EnableResourceCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableResourceCenterResponseBody() = default ;
    EnableResourceCenterResponseBody& operator=(const EnableResourceCenterResponseBody &) = default ;
    EnableResourceCenterResponseBody& operator=(EnableResourceCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableResourceCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline EnableResourceCenterResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The activation status of the service. Valid values:
    // 
    // *   Pending: The service is being activated.
    // *   Enabled: The service is activated.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
