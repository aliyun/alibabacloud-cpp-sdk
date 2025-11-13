// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDIOFILEUPLOADPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUDIOFILEUPLOADPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetAudioFileUploadParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAudioFileUploadParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAudioFileUploadParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAudioFileUploadParametersRequest() = default ;
    GetAudioFileUploadParametersRequest(const GetAudioFileUploadParametersRequest &) = default ;
    GetAudioFileUploadParametersRequest(GetAudioFileUploadParametersRequest &&) = default ;
    GetAudioFileUploadParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAudioFileUploadParametersRequest() = default ;
    GetAudioFileUploadParametersRequest& operator=(const GetAudioFileUploadParametersRequest &) = default ;
    GetAudioFileUploadParametersRequest& operator=(GetAudioFileUploadParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFileName_ == nullptr
        && return this->instanceId_ == nullptr; };
    // audioFileName Field Functions 
    bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
    void deleteAudioFileName() { this->audioFileName_ = nullptr;};
    inline string audioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
    inline GetAudioFileUploadParametersRequest& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAudioFileUploadParametersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> audioFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
