// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateInstanceResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CreateInstanceResourceResponseBody() = default ;
    CreateInstanceResourceResponseBody(const CreateInstanceResourceResponseBody &) = default ;
    CreateInstanceResourceResponseBody(CreateInstanceResourceResponseBody &&) = default ;
    CreateInstanceResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResourceResponseBody() = default ;
    CreateInstanceResourceResponseBody& operator=(const CreateInstanceResourceResponseBody &) = default ;
    CreateInstanceResourceResponseBody& operator=(CreateInstanceResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateInstanceResourceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
