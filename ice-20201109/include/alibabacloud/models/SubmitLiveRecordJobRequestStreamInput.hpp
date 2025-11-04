// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUESTSTREAMINPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUESTSTREAMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveRecordJobRequestStreamInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveRecordJobRequestStreamInput& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveRecordJobRequestStreamInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SubmitLiveRecordJobRequestStreamInput() = default ;
    SubmitLiveRecordJobRequestStreamInput(const SubmitLiveRecordJobRequestStreamInput &) = default ;
    SubmitLiveRecordJobRequestStreamInput(SubmitLiveRecordJobRequestStreamInput &&) = default ;
    SubmitLiveRecordJobRequestStreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveRecordJobRequestStreamInput() = default ;
    SubmitLiveRecordJobRequestStreamInput& operator=(const SubmitLiveRecordJobRequestStreamInput &) = default ;
    SubmitLiveRecordJobRequestStreamInput& operator=(SubmitLiveRecordJobRequestStreamInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->url_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitLiveRecordJobRequestStreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitLiveRecordJobRequestStreamInput& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The type of the live stream URL. The value can only be rtmp.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
