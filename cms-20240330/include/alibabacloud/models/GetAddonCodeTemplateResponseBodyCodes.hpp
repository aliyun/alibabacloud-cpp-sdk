// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODYCODES_HPP_
#define ALIBABACLOUD_MODELS_GETADDONCODETEMPLATERESPONSEBODYCODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonCodeTemplateResponseBodyCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonCodeTemplateResponseBodyCodes& obj) { 
      DARABONBA_PTR_TO_JSON(codeTemplate, codeTemplate_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonCodeTemplateResponseBodyCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(codeTemplate, codeTemplate_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetAddonCodeTemplateResponseBodyCodes() = default ;
    GetAddonCodeTemplateResponseBodyCodes(const GetAddonCodeTemplateResponseBodyCodes &) = default ;
    GetAddonCodeTemplateResponseBodyCodes(GetAddonCodeTemplateResponseBodyCodes &&) = default ;
    GetAddonCodeTemplateResponseBodyCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonCodeTemplateResponseBodyCodes() = default ;
    GetAddonCodeTemplateResponseBodyCodes& operator=(const GetAddonCodeTemplateResponseBodyCodes &) = default ;
    GetAddonCodeTemplateResponseBodyCodes& operator=(GetAddonCodeTemplateResponseBodyCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeTemplate_ == nullptr
        && return this->name_ == nullptr; };
    // codeTemplate Field Functions 
    bool hasCodeTemplate() const { return this->codeTemplate_ != nullptr;};
    void deleteCodeTemplate() { this->codeTemplate_ = nullptr;};
    inline string codeTemplate() const { DARABONBA_PTR_GET_DEFAULT(codeTemplate_, "") };
    inline GetAddonCodeTemplateResponseBodyCodes& setCodeTemplate(string codeTemplate) { DARABONBA_PTR_SET_VALUE(codeTemplate_, codeTemplate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAddonCodeTemplateResponseBodyCodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> codeTemplate_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
