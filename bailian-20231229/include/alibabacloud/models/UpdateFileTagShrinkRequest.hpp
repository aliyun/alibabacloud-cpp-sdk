// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILETAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILETAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateFileTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    UpdateFileTagShrinkRequest() = default ;
    UpdateFileTagShrinkRequest(const UpdateFileTagShrinkRequest &) = default ;
    UpdateFileTagShrinkRequest(UpdateFileTagShrinkRequest &&) = default ;
    UpdateFileTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileTagShrinkRequest() = default ;
    UpdateFileTagShrinkRequest& operator=(const UpdateFileTagShrinkRequest &) = default ;
    UpdateFileTagShrinkRequest& operator=(UpdateFileTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagsShrink_ == nullptr; };
    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateFileTagShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
