// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
    };
    CreateCommandResponseBody() = default ;
    CreateCommandResponseBody(const CreateCommandResponseBody &) = default ;
    CreateCommandResponseBody(CreateCommandResponseBody &&) = default ;
    CreateCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommandResponseBody() = default ;
    CreateCommandResponseBody& operator=(const CreateCommandResponseBody &) = default ;
    CreateCommandResponseBody& operator=(CreateCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainCode_ != nullptr
        && this->requestId_ != nullptr && this->toolId_ != nullptr; };
    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline CreateCommandResponseBody& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline CreateCommandResponseBody& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


  protected:
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
