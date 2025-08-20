// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKTEMPLATEBYRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKTEMPLATEBYRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackTemplateByResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackTemplateByResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NewTemplateBody, newTemplateBody_);
      DARABONBA_PTR_TO_JSON(OldTemplateBody, oldTemplateBody_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackTemplateByResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NewTemplateBody, newTemplateBody_);
      DARABONBA_PTR_FROM_JSON(OldTemplateBody, oldTemplateBody_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateStackTemplateByResourcesResponseBody() = default ;
    UpdateStackTemplateByResourcesResponseBody(const UpdateStackTemplateByResourcesResponseBody &) = default ;
    UpdateStackTemplateByResourcesResponseBody(UpdateStackTemplateByResourcesResponseBody &&) = default ;
    UpdateStackTemplateByResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackTemplateByResourcesResponseBody() = default ;
    UpdateStackTemplateByResourcesResponseBody& operator=(const UpdateStackTemplateByResourcesResponseBody &) = default ;
    UpdateStackTemplateByResourcesResponseBody& operator=(UpdateStackTemplateByResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newTemplateBody_ != nullptr
        && this->oldTemplateBody_ != nullptr && this->requestId_ != nullptr; };
    // newTemplateBody Field Functions 
    bool hasNewTemplateBody() const { return this->newTemplateBody_ != nullptr;};
    void deleteNewTemplateBody() { this->newTemplateBody_ = nullptr;};
    inline string newTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(newTemplateBody_, "") };
    inline UpdateStackTemplateByResourcesResponseBody& setNewTemplateBody(string newTemplateBody) { DARABONBA_PTR_SET_VALUE(newTemplateBody_, newTemplateBody) };


    // oldTemplateBody Field Functions 
    bool hasOldTemplateBody() const { return this->oldTemplateBody_ != nullptr;};
    void deleteOldTemplateBody() { this->oldTemplateBody_ = nullptr;};
    inline string oldTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(oldTemplateBody_, "") };
    inline UpdateStackTemplateByResourcesResponseBody& setOldTemplateBody(string oldTemplateBody) { DARABONBA_PTR_SET_VALUE(oldTemplateBody_, oldTemplateBody) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateStackTemplateByResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The template content after correction.
    std::shared_ptr<string> newTemplateBody_ = nullptr;
    // The template content before correction.
    std::shared_ptr<string> oldTemplateBody_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
