// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEENTITYTAGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEENTITYTAGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RemoveEntityTagsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveEntityTagsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveEntityTagsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeysShrink_);
    };
    RemoveEntityTagsShrinkRequest() = default ;
    RemoveEntityTagsShrinkRequest(const RemoveEntityTagsShrinkRequest &) = default ;
    RemoveEntityTagsShrinkRequest(RemoveEntityTagsShrinkRequest &&) = default ;
    RemoveEntityTagsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveEntityTagsShrinkRequest() = default ;
    RemoveEntityTagsShrinkRequest& operator=(const RemoveEntityTagsShrinkRequest &) = default ;
    RemoveEntityTagsShrinkRequest& operator=(RemoveEntityTagsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifiedName_ != nullptr
        && this->tagKeysShrink_ != nullptr; };
    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline RemoveEntityTagsShrinkRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // tagKeysShrink Field Functions 
    bool hasTagKeysShrink() const { return this->tagKeysShrink_ != nullptr;};
    void deleteTagKeysShrink() { this->tagKeysShrink_ = nullptr;};
    inline string tagKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeysShrink_, "") };
    inline RemoveEntityTagsShrinkRequest& setTagKeysShrink(string tagKeysShrink) { DARABONBA_PTR_SET_VALUE(tagKeysShrink_, tagKeysShrink) };


  protected:
    // The unique identifier of the entity. Example: maxcompute-table.projectA.tableA.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
    // The tag keys.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagKeysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
