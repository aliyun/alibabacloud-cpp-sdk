// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTINPUT_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertInput& obj) { 
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertInput& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    MediaConvertInput() = default ;
    MediaConvertInput(const MediaConvertInput &) = default ;
    MediaConvertInput(MediaConvertInput &&) = default ;
    MediaConvertInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertInput() = default ;
    MediaConvertInput& operator=(const MediaConvertInput &) = default ;
    MediaConvertInput& operator=(MediaConvertInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputFile_ != nullptr
        && this->name_ != nullptr; };
    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const MediaObject & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, MediaObject) };
    inline MediaObject inputFile() { DARABONBA_PTR_GET(inputFile_, MediaObject) };
    inline MediaConvertInput& setInputFile(const MediaObject & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline MediaConvertInput& setInputFile(MediaObject && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<MediaObject> inputFile_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
