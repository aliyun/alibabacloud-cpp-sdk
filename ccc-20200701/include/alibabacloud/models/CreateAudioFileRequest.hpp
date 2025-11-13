// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUDIOFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUDIOFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateAudioFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAudioFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAudioFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    CreateAudioFileRequest() = default ;
    CreateAudioFileRequest(const CreateAudioFileRequest &) = default ;
    CreateAudioFileRequest(CreateAudioFileRequest &&) = default ;
    CreateAudioFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAudioFileRequest() = default ;
    CreateAudioFileRequest& operator=(const CreateAudioFileRequest &) = default ;
    CreateAudioFileRequest& operator=(CreateAudioFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFileName_ == nullptr
        && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->ossFileKey_ == nullptr && return this->usage_ == nullptr; };
    // audioFileName Field Functions 
    bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
    void deleteAudioFileName() { this->audioFileName_ = nullptr;};
    inline string audioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
    inline CreateAudioFileRequest& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAudioFileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAudioFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileKey Field Functions 
    bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
    void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
    inline string ossFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
    inline CreateAudioFileRequest& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline CreateAudioFileRequest& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> audioFileName_ = nullptr;
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
