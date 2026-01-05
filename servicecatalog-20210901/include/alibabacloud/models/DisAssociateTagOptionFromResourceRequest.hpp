// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATETAGOPTIONFROMRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATETAGOPTIONFROMRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DisAssociateTagOptionFromResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisAssociateTagOptionFromResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisAssociateTagOptionFromResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
    };
    DisAssociateTagOptionFromResourceRequest() = default ;
    DisAssociateTagOptionFromResourceRequest(const DisAssociateTagOptionFromResourceRequest &) = default ;
    DisAssociateTagOptionFromResourceRequest(DisAssociateTagOptionFromResourceRequest &&) = default ;
    DisAssociateTagOptionFromResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisAssociateTagOptionFromResourceRequest() = default ;
    DisAssociateTagOptionFromResourceRequest& operator=(const DisAssociateTagOptionFromResourceRequest &) = default ;
    DisAssociateTagOptionFromResourceRequest& operator=(DisAssociateTagOptionFromResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->tagOptionId_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DisAssociateTagOptionFromResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tagOptionId Field Functions 
    bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
    void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
    inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
    inline DisAssociateTagOptionFromResourceRequest& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


  protected:
    // The ID of the resource with which the tag option is associated.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The ID of the tag option.
    // 
    // This parameter is required.
    shared_ptr<string> tagOptionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
