// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUESTSTREAMINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODEJOBREQUESTSTREAMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeJobRequestStreamInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeJobRequestStreamInput& obj) { 
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeJobRequestStreamInput& obj) { 
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateLiveTranscodeJobRequestStreamInput() = default ;
    UpdateLiveTranscodeJobRequestStreamInput(const UpdateLiveTranscodeJobRequestStreamInput &) = default ;
    UpdateLiveTranscodeJobRequestStreamInput(UpdateLiveTranscodeJobRequestStreamInput &&) = default ;
    UpdateLiveTranscodeJobRequestStreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeJobRequestStreamInput() = default ;
    UpdateLiveTranscodeJobRequestStreamInput& operator=(const UpdateLiveTranscodeJobRequestStreamInput &) = default ;
    UpdateLiveTranscodeJobRequestStreamInput& operator=(UpdateLiveTranscodeJobRequestStreamInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputUrl_ != nullptr
        && this->type_ != nullptr; };
    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline UpdateLiveTranscodeJobRequestStreamInput& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateLiveTranscodeJobRequestStreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the input stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputUrl_ = nullptr;
    // The type of the input stream. The value can only be rtmp.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
