// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIGNASMOUNTDESCS_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIGNASMOUNTDESCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfigNasMountDescs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfigNasMountDescs& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(NasPath, nasPath_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfigNasMountDescs& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(NasPath, nasPath_);
    };
    AppConfigNasMountDescs() = default ;
    AppConfigNasMountDescs(const AppConfigNasMountDescs &) = default ;
    AppConfigNasMountDescs(AppConfigNasMountDescs &&) = default ;
    AppConfigNasMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfigNasMountDescs() = default ;
    AppConfigNasMountDescs& operator=(const AppConfigNasMountDescs &) = default ;
    AppConfigNasMountDescs& operator=(AppConfigNasMountDescs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->nasPath_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline AppConfigNasMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // nasPath Field Functions 
    bool hasNasPath() const { return this->nasPath_ != nullptr;};
    void deleteNasPath() { this->nasPath_ = nullptr;};
    inline string nasPath() const { DARABONBA_PTR_GET_DEFAULT(nasPath_, "") };
    inline AppConfigNasMountDescs& setNasPath(string nasPath) { DARABONBA_PTR_SET_VALUE(nasPath_, nasPath) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> nasPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
