// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPESPREDEFINEDSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONDELEGATEDSCOPEPREDEFINEDSCOPESPREDEFINEDSCOPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default ;
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope &) = default ;
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope &&) = default ;
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default ;
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& operator=(const GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope &) = default ;
    GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& operator=(GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->required_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // The description of the permission.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the permission is automatically selected by default when you install the application. Valid values:
    // 
    // *   true
    // *   false
    // 
    // `openid` is required by default.
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
