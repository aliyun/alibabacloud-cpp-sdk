// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSCOMMONSCHEMAREFS_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSCOMMONSCHEMAREFS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddonMetaEnvironmentsCommonSchemaRefs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironmentsCommonSchemaRefs& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironmentsCommonSchemaRefs& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    AddonMetaEnvironmentsCommonSchemaRefs() = default ;
    AddonMetaEnvironmentsCommonSchemaRefs(const AddonMetaEnvironmentsCommonSchemaRefs &) = default ;
    AddonMetaEnvironmentsCommonSchemaRefs(AddonMetaEnvironmentsCommonSchemaRefs &&) = default ;
    AddonMetaEnvironmentsCommonSchemaRefs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironmentsCommonSchemaRefs() = default ;
    AddonMetaEnvironmentsCommonSchemaRefs& operator=(const AddonMetaEnvironmentsCommonSchemaRefs &) = default ;
    AddonMetaEnvironmentsCommonSchemaRefs& operator=(AddonMetaEnvironmentsCommonSchemaRefs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr
        && return this->version_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline AddonMetaEnvironmentsCommonSchemaRefs& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AddonMetaEnvironmentsCommonSchemaRefs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
