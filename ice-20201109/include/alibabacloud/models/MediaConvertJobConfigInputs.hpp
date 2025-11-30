// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGINPUTS_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobConfigInputsInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigInputs& obj) { 
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    MediaConvertJobConfigInputs() = default ;
    MediaConvertJobConfigInputs(const MediaConvertJobConfigInputs &) = default ;
    MediaConvertJobConfigInputs(MediaConvertJobConfigInputs &&) = default ;
    MediaConvertJobConfigInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigInputs() = default ;
    MediaConvertJobConfigInputs& operator=(const MediaConvertJobConfigInputs &) = default ;
    MediaConvertJobConfigInputs& operator=(MediaConvertJobConfigInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputFile_ == nullptr
        && return this->name_ == nullptr; };
    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::MediaConvertJobConfigInputsInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::MediaConvertJobConfigInputsInputFile) };
    inline Models::MediaConvertJobConfigInputsInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::MediaConvertJobConfigInputsInputFile) };
    inline MediaConvertJobConfigInputs& setInputFile(const Models::MediaConvertJobConfigInputsInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline MediaConvertJobConfigInputs& setInputFile(Models::MediaConvertJobConfigInputsInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertJobConfigInputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<Models::MediaConvertJobConfigInputsInputFile> inputFile_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
