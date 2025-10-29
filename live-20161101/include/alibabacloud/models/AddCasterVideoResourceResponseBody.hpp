// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERVIDEORESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERVIDEORESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterVideoResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterVideoResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterVideoResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    AddCasterVideoResourceResponseBody() = default ;
    AddCasterVideoResourceResponseBody(const AddCasterVideoResourceResponseBody &) = default ;
    AddCasterVideoResourceResponseBody(AddCasterVideoResourceResponseBody &&) = default ;
    AddCasterVideoResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterVideoResourceResponseBody() = default ;
    AddCasterVideoResourceResponseBody& operator=(const AddCasterVideoResourceResponseBody &) = default ;
    AddCasterVideoResourceResponseBody& operator=(AddCasterVideoResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterVideoResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddCasterVideoResourceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource. This parameter can be used as a request parameter in the API operation that you can call to delete the video source in the production studio or modify the video source in the production studio.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
