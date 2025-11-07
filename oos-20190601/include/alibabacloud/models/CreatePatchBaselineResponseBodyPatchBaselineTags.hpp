// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODYPATCHBASELINETAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPATCHBASELINERESPONSEBODYPATCHBASELINETAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreatePatchBaselineResponseBodyPatchBaselineTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePatchBaselineResponseBodyPatchBaselineTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePatchBaselineResponseBodyPatchBaselineTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    CreatePatchBaselineResponseBodyPatchBaselineTags() = default ;
    CreatePatchBaselineResponseBodyPatchBaselineTags(const CreatePatchBaselineResponseBodyPatchBaselineTags &) = default ;
    CreatePatchBaselineResponseBodyPatchBaselineTags(CreatePatchBaselineResponseBodyPatchBaselineTags &&) = default ;
    CreatePatchBaselineResponseBodyPatchBaselineTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePatchBaselineResponseBodyPatchBaselineTags() = default ;
    CreatePatchBaselineResponseBodyPatchBaselineTags& operator=(const CreatePatchBaselineResponseBodyPatchBaselineTags &) = default ;
    CreatePatchBaselineResponseBodyPatchBaselineTags& operator=(CreatePatchBaselineResponseBodyPatchBaselineTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaselineTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline CreatePatchBaselineResponseBodyPatchBaselineTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The key of the tag.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
