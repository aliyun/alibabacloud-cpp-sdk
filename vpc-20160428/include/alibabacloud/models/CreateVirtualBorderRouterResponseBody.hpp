// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALBORDERROUTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALBORDERROUTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVirtualBorderRouterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualBorderRouterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualBorderRouterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
    };
    CreateVirtualBorderRouterResponseBody() = default ;
    CreateVirtualBorderRouterResponseBody(const CreateVirtualBorderRouterResponseBody &) = default ;
    CreateVirtualBorderRouterResponseBody(CreateVirtualBorderRouterResponseBody &&) = default ;
    CreateVirtualBorderRouterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualBorderRouterResponseBody() = default ;
    CreateVirtualBorderRouterResponseBody& operator=(const CreateVirtualBorderRouterResponseBody &) = default ;
    CreateVirtualBorderRouterResponseBody& operator=(CreateVirtualBorderRouterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vbrId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVirtualBorderRouterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline CreateVirtualBorderRouterResponseBody& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the VBR.
    std::shared_ptr<string> vbrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
