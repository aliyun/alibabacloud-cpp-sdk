// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGCONFIGMOUNTDESCSMOUNTITEMS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGCONFIGMOUNTDESCSMOUNTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigConfigMountDescsMountItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigConfigMountDescsMountItems& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigConfigMountDescsMountItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AppConfigConfigMountDescsMountItems() = default ;
    AppConfigConfigMountDescsMountItems(const AppConfigConfigMountDescsMountItems &) = default ;
    AppConfigConfigMountDescsMountItems(AppConfigConfigMountDescsMountItems &&) = default ;
    AppConfigConfigMountDescsMountItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigConfigMountDescsMountItems() = default ;
    AppConfigConfigMountDescsMountItems& operator=(const AppConfigConfigMountDescsMountItems &) = default ;
    AppConfigConfigMountDescsMountItems& operator=(AppConfigConfigMountDescsMountItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->path_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline AppConfigConfigMountDescsMountItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AppConfigConfigMountDescsMountItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
