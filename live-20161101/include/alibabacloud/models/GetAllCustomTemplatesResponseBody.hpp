// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLCUSTOMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLCUSTOMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetAllCustomTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplates, customTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplates, customTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAllCustomTemplatesResponseBody() = default ;
    GetAllCustomTemplatesResponseBody(const GetAllCustomTemplatesResponseBody &) = default ;
    GetAllCustomTemplatesResponseBody(GetAllCustomTemplatesResponseBody &&) = default ;
    GetAllCustomTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllCustomTemplatesResponseBody() = default ;
    GetAllCustomTemplatesResponseBody& operator=(const GetAllCustomTemplatesResponseBody &) = default ;
    GetAllCustomTemplatesResponseBody& operator=(GetAllCustomTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customTemplates_ != nullptr
        && this->requestId_ != nullptr; };
    // customTemplates Field Functions 
    bool hasCustomTemplates() const { return this->customTemplates_ != nullptr;};
    void deleteCustomTemplates() { this->customTemplates_ = nullptr;};
    inline string customTemplates() const { DARABONBA_PTR_GET_DEFAULT(customTemplates_, "") };
    inline GetAllCustomTemplatesResponseBody& setCustomTemplates(string customTemplates) { DARABONBA_PTR_SET_VALUE(customTemplates_, customTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllCustomTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The template names and template configurations returned.
    std::shared_ptr<string> customTemplates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
