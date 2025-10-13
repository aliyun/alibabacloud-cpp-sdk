// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CACHEINFO_HPP_
#define ALIBABACLOUD_MODELS_CACHEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CacheInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CacheInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoint, mountPoint_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, CacheInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoint, mountPoint_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    CacheInfo() = default ;
    CacheInfo(const CacheInfo &) = default ;
    CacheInfo(CacheInfo &&) = default ;
    CacheInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CacheInfo() = default ;
    CacheInfo& operator=(const CacheInfo &) = default ;
    CacheInfo& operator=(CacheInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoint_ == nullptr
        && return this->port_ == nullptr; };
    // mountPoint Field Functions 
    bool hasMountPoint() const { return this->mountPoint_ != nullptr;};
    void deleteMountPoint() { this->mountPoint_ = nullptr;};
    inline string mountPoint() const { DARABONBA_PTR_GET_DEFAULT(mountPoint_, "") };
    inline CacheInfo& setMountPoint(string mountPoint) { DARABONBA_PTR_SET_VALUE(mountPoint_, mountPoint) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CacheInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> mountPoint_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
