// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JUICEFSMOUNTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JUICEFSMOUNTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class JuiceFsMountConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JuiceFsMountConfig& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
      DARABONBA_PTR_TO_JSON(remoteDir, remoteDir_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, JuiceFsMountConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
      DARABONBA_PTR_FROM_JSON(remoteDir, remoteDir_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
    };
    JuiceFsMountConfig() = default ;
    JuiceFsMountConfig(const JuiceFsMountConfig &) = default ;
    JuiceFsMountConfig(JuiceFsMountConfig &&) = default ;
    JuiceFsMountConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JuiceFsMountConfig() = default ;
    JuiceFsMountConfig& operator=(const JuiceFsMountConfig &) = default ;
    JuiceFsMountConfig& operator=(JuiceFsMountConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->mountDir_ == nullptr && this->remoteDir_ == nullptr && this->token_ == nullptr && this->volumeName_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline JuiceFsMountConfig& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline JuiceFsMountConfig& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // mountDir Field Functions 
    bool hasMountDir() const { return this->mountDir_ != nullptr;};
    void deleteMountDir() { this->mountDir_ = nullptr;};
    inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
    inline JuiceFsMountConfig& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


    // remoteDir Field Functions 
    bool hasRemoteDir() const { return this->remoteDir_ != nullptr;};
    void deleteRemoteDir() { this->remoteDir_ = nullptr;};
    inline string getRemoteDir() const { DARABONBA_PTR_GET_DEFAULT(remoteDir_, "") };
    inline JuiceFsMountConfig& setRemoteDir(string remoteDir) { DARABONBA_PTR_SET_VALUE(remoteDir_, remoteDir) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline JuiceFsMountConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline JuiceFsMountConfig& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    shared_ptr<vector<string>> args_ {};
    shared_ptr<string> mountDir_ {};
    shared_ptr<string> remoteDir_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
