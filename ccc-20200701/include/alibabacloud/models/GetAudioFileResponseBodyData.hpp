// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDIOFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUDIOFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetAudioFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAudioFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAudioFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    GetAudioFileResponseBodyData() = default ;
    GetAudioFileResponseBodyData(const GetAudioFileResponseBodyData &) = default ;
    GetAudioFileResponseBodyData(GetAudioFileResponseBodyData &&) = default ;
    GetAudioFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAudioFileResponseBodyData() = default ;
    GetAudioFileResponseBodyData& operator=(const GetAudioFileResponseBodyData &) = default ;
    GetAudioFileResponseBodyData& operator=(GetAudioFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFileName_ == nullptr
        && return this->audioResourceId_ == nullptr && return this->createdTime_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->ossFileKey_ == nullptr
        && return this->updatedTime_ == nullptr; };
    // audioFileName Field Functions 
    bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
    void deleteAudioFileName() { this->audioFileName_ = nullptr;};
    inline string audioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
    inline GetAudioFileResponseBodyData& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


    // audioResourceId Field Functions 
    bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
    void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
    inline string audioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
    inline GetAudioFileResponseBodyData& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetAudioFileResponseBodyData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAudioFileResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAudioFileResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileKey Field Functions 
    bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
    void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
    inline string ossFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
    inline GetAudioFileResponseBodyData& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline GetAudioFileResponseBodyData& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> audioFileName_ = nullptr;
    std::shared_ptr<string> audioResourceId_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossFileKey_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
