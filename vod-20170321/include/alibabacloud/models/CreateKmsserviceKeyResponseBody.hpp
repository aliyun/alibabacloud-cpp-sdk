// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKMSSERVICEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKMSSERVICEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateKMSServiceKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKMSServiceKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKMSServiceKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKMSServiceKeyResponseBody() = default ;
    CreateKMSServiceKeyResponseBody(const CreateKMSServiceKeyResponseBody &) = default ;
    CreateKMSServiceKeyResponseBody(CreateKMSServiceKeyResponseBody &&) = default ;
    CreateKMSServiceKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKMSServiceKeyResponseBody() = default ;
    CreateKMSServiceKeyResponseBody& operator=(const CreateKMSServiceKeyResponseBody &) = default ;
    CreateKMSServiceKeyResponseBody& operator=(CreateKMSServiceKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKMSServiceKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
