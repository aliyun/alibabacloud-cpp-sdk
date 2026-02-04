// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROADCASTAUDIO_HPP_
#define ALIBABACLOUD_MODELS_BROADCASTAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class BroadcastAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BroadcastAudio& obj) { 
      DARABONBA_PTR_TO_JSON(audioLength, audioLength_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, BroadcastAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(audioLength, audioLength_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    BroadcastAudio() = default ;
    BroadcastAudio(const BroadcastAudio &) = default ;
    BroadcastAudio(BroadcastAudio &&) = default ;
    BroadcastAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BroadcastAudio() = default ;
    BroadcastAudio& operator=(const BroadcastAudio &) = default ;
    BroadcastAudio& operator=(BroadcastAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLength_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
    // audioLength Field Functions 
    bool hasAudioLength() const { return this->audioLength_ != nullptr;};
    void deleteAudioLength() { this->audioLength_ = nullptr;};
    inline int32_t getAudioLength() const { DARABONBA_PTR_GET_DEFAULT(audioLength_, 0) };
    inline BroadcastAudio& setAudioLength(int32_t audioLength) { DARABONBA_PTR_SET_VALUE(audioLength_, audioLength) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BroadcastAudio& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BroadcastAudio& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline BroadcastAudio& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BroadcastAudio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BroadcastAudio& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int32_t> audioLength_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> modifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
