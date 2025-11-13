// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUDIOFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUDIOFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyAudioFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAudioFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAudioFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ModifyAudioFileRequest() = default ;
    ModifyAudioFileRequest(const ModifyAudioFileRequest &) = default ;
    ModifyAudioFileRequest(ModifyAudioFileRequest &&) = default ;
    ModifyAudioFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAudioFileRequest() = default ;
    ModifyAudioFileRequest& operator=(const ModifyAudioFileRequest &) = default ;
    ModifyAudioFileRequest& operator=(ModifyAudioFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFileName_ == nullptr
        && return this->audioResourceId_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->ossFileKey_ == nullptr && return this->usage_ == nullptr; };
    // audioFileName Field Functions 
    bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
    void deleteAudioFileName() { this->audioFileName_ = nullptr;};
    inline string audioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
    inline ModifyAudioFileRequest& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


    // audioResourceId Field Functions 
    bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
    void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
    inline string audioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
    inline ModifyAudioFileRequest& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAudioFileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAudioFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileKey Field Functions 
    bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
    void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
    inline string ossFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
    inline ModifyAudioFileRequest& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ModifyAudioFileRequest& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> audioFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> audioResourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossFileKey_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
