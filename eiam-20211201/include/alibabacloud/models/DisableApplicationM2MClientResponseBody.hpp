// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAPPLICATIONM2MCLIENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAPPLICATIONM2MCLIENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableApplicationM2MClientResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableApplicationM2MClientResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableApplicationM2MClientResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableApplicationM2MClientResponseBody() = default ;
    DisableApplicationM2MClientResponseBody(const DisableApplicationM2MClientResponseBody &) = default ;
    DisableApplicationM2MClientResponseBody(DisableApplicationM2MClientResponseBody &&) = default ;
    DisableApplicationM2MClientResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableApplicationM2MClientResponseBody() = default ;
    DisableApplicationM2MClientResponseBody& operator=(const DisableApplicationM2MClientResponseBody &) = default ;
    DisableApplicationM2MClientResponseBody& operator=(DisableApplicationM2MClientResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableApplicationM2MClientResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
