// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCLOUDCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCLOUDCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateExpressCloudConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressCloudConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressCloudConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExpressCloudConnectionResponseBody() = default ;
    CreateExpressCloudConnectionResponseBody(const CreateExpressCloudConnectionResponseBody &) = default ;
    CreateExpressCloudConnectionResponseBody(CreateExpressCloudConnectionResponseBody &&) = default ;
    CreateExpressCloudConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressCloudConnectionResponseBody() = default ;
    CreateExpressCloudConnectionResponseBody& operator=(const CreateExpressCloudConnectionResponseBody &) = default ;
    CreateExpressCloudConnectionResponseBody& operator=(CreateExpressCloudConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eccId_ != nullptr
        && this->requestId_ != nullptr; };
    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline CreateExpressCloudConnectionResponseBody& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExpressCloudConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the ECC instance.
    std::shared_ptr<string> eccId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
