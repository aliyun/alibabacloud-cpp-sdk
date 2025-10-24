// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEFENSERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEFENSERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDefenseResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    CreateDefenseResourceResponseBody() = default ;
    CreateDefenseResourceResponseBody(const CreateDefenseResourceResponseBody &) = default ;
    CreateDefenseResourceResponseBody(CreateDefenseResourceResponseBody &&) = default ;
    CreateDefenseResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDefenseResourceResponseBody() = default ;
    CreateDefenseResourceResponseBody& operator=(const CreateDefenseResourceResponseBody &) = default ;
    CreateDefenseResourceResponseBody& operator=(CreateDefenseResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDefenseResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateDefenseResourceResponseBody& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
