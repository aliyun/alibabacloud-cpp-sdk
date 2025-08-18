// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODYDEVOBJECTDEPENDENCYLISTOUTPUTCONTEXTPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODYDEVOBJECTDEPENDENCYLISTOUTPUTCONTEXTPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList() = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList(const GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList &) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList(GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList &&) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList() = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& operator=(const GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList &) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& operator=(GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->description_ != nullptr && this->key_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
