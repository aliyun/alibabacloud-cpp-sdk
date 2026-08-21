// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROHIBITEDTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROHIBITEDTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateProhibitedTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProhibitedTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProhibitedTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    UpdateProhibitedTagRequest() = default ;
    UpdateProhibitedTagRequest(const UpdateProhibitedTagRequest &) = default ;
    UpdateProhibitedTagRequest(UpdateProhibitedTagRequest &&) = default ;
    UpdateProhibitedTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProhibitedTagRequest() = default ;
    UpdateProhibitedTagRequest& operator=(const UpdateProhibitedTagRequest &) = default ;
    UpdateProhibitedTagRequest& operator=(UpdateProhibitedTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->tagId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProhibitedTagRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProhibitedTagRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline UpdateProhibitedTagRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The description of the prohibited software tag. The description can contain letters, digits, Chinese characters, spaces, periods (.), underscores (_), and hyphens (-), and cannot exceed 128 characters in length.
    shared_ptr<string> description_ {};
    // The name of the prohibited software tag. The name must be 1 to 128 characters in length and can contain letters, digits, Chinese characters, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> name_ {};
    // The ID of the custom prohibited software tag. Only custom tags under the current Alibaba Cloud account can be modified. Built-in system tags cannot be modified. You can obtain the value from the following operations:
    // - [ListProhibitedTags](~~ListProhibitedTags~~): Lists prohibited software tags.
    // - [CreateProhibitedTag](~~CreateProhibitedTag~~): Creates a custom prohibited software tag.
    // 
    // This parameter is required.
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
