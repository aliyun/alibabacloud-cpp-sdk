// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateOrgHonorTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrgHonorTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrgHonorTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateOrgHonorTemplateResponseBody() = default ;
    CreateOrgHonorTemplateResponseBody(const CreateOrgHonorTemplateResponseBody &) = default ;
    CreateOrgHonorTemplateResponseBody(CreateOrgHonorTemplateResponseBody &&) = default ;
    CreateOrgHonorTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrgHonorTemplateResponseBody() = default ;
    CreateOrgHonorTemplateResponseBody& operator=(const CreateOrgHonorTemplateResponseBody &) = default ;
    CreateOrgHonorTemplateResponseBody& operator=(CreateOrgHonorTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->honorId_ != nullptr
        && this->requestId_ != nullptr; };
    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string honorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline CreateOrgHonorTemplateResponseBody& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrgHonorTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> honorId_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
