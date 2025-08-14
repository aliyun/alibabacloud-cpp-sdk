// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBINPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJobInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJobInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJobInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput(const SubmitMediaInfoJobResponseBodyMediaInfoJobInput &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput(SubmitMediaInfoJobResponseBodyMediaInfoJobInput &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJobInput() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJobInput &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobInput& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJobInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->media_ != nullptr
        && this->type_ != nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The media object. If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported. If Type is set to Media, set this parameter to the ID of a media asset.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the media object. Valid values: OSS and Media. A value of OSS indicates an OSS object. A value of Media indicates a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
