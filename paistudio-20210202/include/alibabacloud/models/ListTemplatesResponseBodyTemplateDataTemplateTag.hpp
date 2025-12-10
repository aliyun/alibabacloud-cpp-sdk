// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATETAG_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListTemplatesResponseBodyTemplateDataTemplateTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplateDataTemplateTag& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TypeId, typeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplateDataTemplateTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
    };
    ListTemplatesResponseBodyTemplateDataTemplateTag() = default ;
    ListTemplatesResponseBodyTemplateDataTemplateTag(const ListTemplatesResponseBodyTemplateDataTemplateTag &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateTag(ListTemplatesResponseBodyTemplateDataTemplateTag &&) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplateDataTemplateTag() = default ;
    ListTemplatesResponseBodyTemplateDataTemplateTag& operator=(const ListTemplatesResponseBodyTemplateDataTemplateTag &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateTag& operator=(ListTemplatesResponseBodyTemplateDataTemplateTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->tagId_ == nullptr && return this->typeId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplateTag& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplateTag& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // typeId Field Functions 
    bool hasTypeId() const { return this->typeId_ != nullptr;};
    void deleteTypeId() { this->typeId_ = nullptr;};
    inline string typeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplateTag& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
    std::shared_ptr<string> typeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
