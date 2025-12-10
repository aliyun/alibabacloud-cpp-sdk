// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATETYPE_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATATEMPLATETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListTemplatesResponseBodyTemplateDataTemplateType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplateDataTemplateType& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TypeId, typeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplateDataTemplateType& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
    };
    ListTemplatesResponseBodyTemplateDataTemplateType() = default ;
    ListTemplatesResponseBodyTemplateDataTemplateType(const ListTemplatesResponseBodyTemplateDataTemplateType &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateType(ListTemplatesResponseBodyTemplateDataTemplateType &&) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplateDataTemplateType() = default ;
    ListTemplatesResponseBodyTemplateDataTemplateType& operator=(const ListTemplatesResponseBodyTemplateDataTemplateType &) = default ;
    ListTemplatesResponseBodyTemplateDataTemplateType& operator=(ListTemplatesResponseBodyTemplateDataTemplateType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->typeId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplateType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // typeId Field Functions 
    bool hasTypeId() const { return this->typeId_ != nullptr;};
    void deleteTypeId() { this->typeId_ = nullptr;};
    inline string typeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
    inline ListTemplatesResponseBodyTemplateDataTemplateType& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> typeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
