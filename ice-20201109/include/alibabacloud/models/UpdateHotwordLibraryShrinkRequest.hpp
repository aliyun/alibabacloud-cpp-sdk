// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTWORDLIBRARYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTWORDLIBRARYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateHotwordLibraryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotwordLibraryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_TO_JSON(Hotwords, hotwordsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotwordLibraryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_FROM_JSON(Hotwords, hotwordsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateHotwordLibraryShrinkRequest() = default ;
    UpdateHotwordLibraryShrinkRequest(const UpdateHotwordLibraryShrinkRequest &) = default ;
    UpdateHotwordLibraryShrinkRequest(UpdateHotwordLibraryShrinkRequest &&) = default ;
    UpdateHotwordLibraryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotwordLibraryShrinkRequest() = default ;
    UpdateHotwordLibraryShrinkRequest& operator=(const UpdateHotwordLibraryShrinkRequest &) = default ;
    UpdateHotwordLibraryShrinkRequest& operator=(UpdateHotwordLibraryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->hotwordLibraryId_ != nullptr && this->hotwordsShrink_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateHotwordLibraryShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string hotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline UpdateHotwordLibraryShrinkRequest& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


    // hotwordsShrink Field Functions 
    bool hasHotwordsShrink() const { return this->hotwordsShrink_ != nullptr;};
    void deleteHotwordsShrink() { this->hotwordsShrink_ = nullptr;};
    inline string hotwordsShrink() const { DARABONBA_PTR_GET_DEFAULT(hotwordsShrink_, "") };
    inline UpdateHotwordLibraryShrinkRequest& setHotwordsShrink(string hotwordsShrink) { DARABONBA_PTR_SET_VALUE(hotwordsShrink_, hotwordsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHotwordLibraryShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> hotwordLibraryId_ = nullptr;
    std::shared_ptr<string> hotwordsShrink_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
