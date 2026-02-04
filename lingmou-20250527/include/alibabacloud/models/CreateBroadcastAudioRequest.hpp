// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROADCASTAUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROADCASTAUDIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateBroadcastAudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBroadcastAudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBroadcastAudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
    };
    CreateBroadcastAudioRequest() = default ;
    CreateBroadcastAudioRequest(const CreateBroadcastAudioRequest &) = default ;
    CreateBroadcastAudioRequest(CreateBroadcastAudioRequest &&) = default ;
    CreateBroadcastAudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBroadcastAudioRequest() = default ;
    CreateBroadcastAudioRequest& operator=(const CreateBroadcastAudioRequest &) = default ;
    CreateBroadcastAudioRequest& operator=(CreateBroadcastAudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->ossKey_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateBroadcastAudioRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateBroadcastAudioRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    shared_ptr<string> fileName_ {};
    shared_ptr<string> ossKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
