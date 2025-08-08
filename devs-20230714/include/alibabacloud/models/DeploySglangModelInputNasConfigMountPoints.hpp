// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTNASCONFIGMOUNTPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTNASCONFIGMOUNTPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInputNasConfigMountPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInputNasConfigMountPoints& obj) { 
      DARABONBA_PTR_TO_JSON(enableTLS, enableTLS_);
      DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(serverAddr, serverAddr_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInputNasConfigMountPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(enableTLS, enableTLS_);
      DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(serverAddr, serverAddr_);
    };
    DeploySGLangModelInputNasConfigMountPoints() = default ;
    DeploySGLangModelInputNasConfigMountPoints(const DeploySGLangModelInputNasConfigMountPoints &) = default ;
    DeploySGLangModelInputNasConfigMountPoints(DeploySGLangModelInputNasConfigMountPoints &&) = default ;
    DeploySGLangModelInputNasConfigMountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInputNasConfigMountPoints() = default ;
    DeploySGLangModelInputNasConfigMountPoints& operator=(const DeploySGLangModelInputNasConfigMountPoints &) = default ;
    DeploySGLangModelInputNasConfigMountPoints& operator=(DeploySGLangModelInputNasConfigMountPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableTLS_ != nullptr
        && this->mountDir_ != nullptr && this->serverAddr_ != nullptr; };
    // enableTLS Field Functions 
    bool hasEnableTLS() const { return this->enableTLS_ != nullptr;};
    void deleteEnableTLS() { this->enableTLS_ = nullptr;};
    inline bool enableTLS() const { DARABONBA_PTR_GET_DEFAULT(enableTLS_, false) };
    inline DeploySGLangModelInputNasConfigMountPoints& setEnableTLS(bool enableTLS) { DARABONBA_PTR_SET_VALUE(enableTLS_, enableTLS) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string mountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline DeploySGLangModelInputNasConfigMountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // serverAddr Field Functions 
    bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
    void deleteServerAddr() { this->serverAddr_ = nullptr;};
    inline string serverAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
    inline DeploySGLangModelInputNasConfigMountPoints& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


  protected:
    std::shared_ptr<bool> enableTLS_ = nullptr;
    std::shared_ptr<string> mountDir_ = nullptr;
    std::shared_ptr<string> serverAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
