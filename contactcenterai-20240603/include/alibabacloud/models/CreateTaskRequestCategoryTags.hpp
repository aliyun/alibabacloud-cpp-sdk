// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTCATEGORYTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTCATEGORYTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequestCategoryTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestCategoryTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestCategoryTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagDesc, tagDesc_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    CreateTaskRequestCategoryTags() = default ;
    CreateTaskRequestCategoryTags(const CreateTaskRequestCategoryTags &) = default ;
    CreateTaskRequestCategoryTags(CreateTaskRequestCategoryTags &&) = default ;
    CreateTaskRequestCategoryTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestCategoryTags() = default ;
    CreateTaskRequestCategoryTags& operator=(const CreateTaskRequestCategoryTags &) = default ;
    CreateTaskRequestCategoryTags& operator=(CreateTaskRequestCategoryTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagDesc_ != nullptr
        && this->tagName_ != nullptr; };
    // tagDesc Field Functions 
    bool hasTagDesc() const { return this->tagDesc_ != nullptr;};
    void deleteTagDesc() { this->tagDesc_ = nullptr;};
    inline string tagDesc() const { DARABONBA_PTR_GET_DEFAULT(tagDesc_, "") };
    inline CreateTaskRequestCategoryTags& setTagDesc(string tagDesc) { DARABONBA_PTR_SET_VALUE(tagDesc_, tagDesc) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline CreateTaskRequestCategoryTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagDesc_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
