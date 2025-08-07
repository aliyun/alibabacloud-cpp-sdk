// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateServiceUsageResponseBody() = default ;
    UpdateServiceUsageResponseBody(const UpdateServiceUsageResponseBody &) = default ;
    UpdateServiceUsageResponseBody(UpdateServiceUsageResponseBody &&) = default ;
    UpdateServiceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceUsageResponseBody() = default ;
    UpdateServiceUsageResponseBody& operator=(const UpdateServiceUsageResponseBody &) = default ;
    UpdateServiceUsageResponseBody& operator=(UpdateServiceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateServiceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
