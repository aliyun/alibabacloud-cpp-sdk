// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPKEYSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPKEYSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateAppKeyStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppKeyStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppKeyStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAppKeyStateResponseBody() = default ;
    UpdateAppKeyStateResponseBody(const UpdateAppKeyStateResponseBody &) = default ;
    UpdateAppKeyStateResponseBody(UpdateAppKeyStateResponseBody &&) = default ;
    UpdateAppKeyStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppKeyStateResponseBody() = default ;
    UpdateAppKeyStateResponseBody& operator=(const UpdateAppKeyStateResponseBody &) = default ;
    UpdateAppKeyStateResponseBody& operator=(UpdateAppKeyStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAppKeyStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
