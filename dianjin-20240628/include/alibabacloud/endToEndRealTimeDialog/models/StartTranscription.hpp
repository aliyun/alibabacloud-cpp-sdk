// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_STARTTRANSCRIPTION_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_STARTTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class StartTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(playCode, playCode_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(selfDirected, selfDirected_);
    };
    friend void from_json(const Darabonba::Json& j, StartTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(playCode, playCode_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(selfDirected, selfDirected_);
    };
    StartTranscription() = default ;
    StartTranscription(const StartTranscription &) = default ;
    StartTranscription(StartTranscription &&) = default ;
    StartTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTranscription() = default ;
    StartTranscription& operator=(const StartTranscription &) = default ;
    StartTranscription& operator=(StartTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playCode_ == nullptr
        && this->metaData_ == nullptr && this->selfDirected_ == nullptr; };
    // playCode Field Functions 
    bool hasPlayCode() const { return this->playCode_ != nullptr;};
    void deletePlayCode() { this->playCode_ = nullptr;};
    inline string getPlayCode() const { DARABONBA_PTR_GET_DEFAULT(playCode_, "") };
    inline StartTranscription& setPlayCode(string playCode) { DARABONBA_PTR_SET_VALUE(playCode_, playCode) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
    inline StartTranscription& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline StartTranscription& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // selfDirected Field Functions 
    bool hasSelfDirected() const { return this->selfDirected_ != nullptr;};
    void deleteSelfDirected() { this->selfDirected_ = nullptr;};
    inline bool getSelfDirected() const { DARABONBA_PTR_GET_DEFAULT(selfDirected_, false) };
    inline StartTranscription& setSelfDirected(bool selfDirected) { DARABONBA_PTR_SET_VALUE(selfDirected_, selfDirected) };


  protected:
    // This parameter is required.
    shared_ptr<string> playCode_ {};
    Darabonba::Json metaData_ {};
    shared_ptr<bool> selfDirected_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
