// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDIOFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDIOFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetAudioFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAudioFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAudioFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAudioFileRequest() = default ;
    GetAudioFileRequest(const GetAudioFileRequest &) = default ;
    GetAudioFileRequest(GetAudioFileRequest &&) = default ;
    GetAudioFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAudioFileRequest() = default ;
    GetAudioFileRequest& operator=(const GetAudioFileRequest &) = default ;
    GetAudioFileRequest& operator=(GetAudioFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioResourceId_ != nullptr
        && this->instanceId_ != nullptr; };
    // audioResourceId Field Functions 
    bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
    void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
    inline string audioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
    inline GetAudioFileRequest& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAudioFileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> audioResourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
