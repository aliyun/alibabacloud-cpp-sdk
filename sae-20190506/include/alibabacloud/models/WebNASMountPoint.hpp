// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBNASMOUNTPOINT_HPP_
#define ALIBABACLOUD_MODELS_WEBNASMOUNTPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebNASMountPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebNASMountPoint& obj) { 
      DARABONBA_PTR_TO_JSON(MountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(NasAddr, nasAddr_);
      DARABONBA_PTR_TO_JSON(NasPath, nasPath_);
    };
    friend void from_json(const Darabonba::Json& j, WebNASMountPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(MountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(NasAddr, nasAddr_);
      DARABONBA_PTR_FROM_JSON(NasPath, nasPath_);
    };
    WebNASMountPoint() = default ;
    WebNASMountPoint(const WebNASMountPoint &) = default ;
    WebNASMountPoint(WebNASMountPoint &&) = default ;
    WebNASMountPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebNASMountPoint() = default ;
    WebNASMountPoint& operator=(const WebNASMountPoint &) = default ;
    WebNASMountPoint& operator=(WebNASMountPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountDir_ == nullptr
        && this->nasAddr_ == nullptr && this->nasPath_ == nullptr; };
    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline WebNASMountPoint& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // nasAddr Field Functions 
    bool hasNasAddr() const { return this->nasAddr_ != nullptr;};
    void deleteNasAddr() { this->nasAddr_ = nullptr;};
    inline string getNasAddr() const { DARABONBA_PTR_GET_DEFAULT(nasAddr_, "") };
    inline WebNASMountPoint& setNasAddr(string nasAddr) { DARABONBA_PTR_SET_VALUE(nasAddr_, nasAddr) };


    // nasPath Field Functions 
    bool hasNasPath() const { return this->nasPath_ != nullptr;};
    void deleteNasPath() { this->nasPath_ = nullptr;};
    inline string getNasPath() const { DARABONBA_PTR_GET_DEFAULT(nasPath_, "") };
    inline WebNASMountPoint& setNasPath(string nasPath) { DARABONBA_PTR_SET_VALUE(nasPath_, nasPath) };


  protected:
    shared_ptr<string> mountDir_ {};
    shared_ptr<string> nasAddr_ {};
    shared_ptr<string> nasPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
