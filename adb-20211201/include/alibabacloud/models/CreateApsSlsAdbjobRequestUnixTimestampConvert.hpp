// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUESTUNIXTIMESTAMPCONVERT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUESTUNIXTIMESTAMPCONVERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsSlsADBJobRequestUnixTimestampConvert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsSlsADBJobRequestUnixTimestampConvert& obj) { 
      DARABONBA_PTR_TO_JSON(Convert, convert_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Transform, transform_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsSlsADBJobRequestUnixTimestampConvert& obj) { 
      DARABONBA_PTR_FROM_JSON(Convert, convert_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Transform, transform_);
    };
    CreateApsSlsADBJobRequestUnixTimestampConvert() = default ;
    CreateApsSlsADBJobRequestUnixTimestampConvert(const CreateApsSlsADBJobRequestUnixTimestampConvert &) = default ;
    CreateApsSlsADBJobRequestUnixTimestampConvert(CreateApsSlsADBJobRequestUnixTimestampConvert &&) = default ;
    CreateApsSlsADBJobRequestUnixTimestampConvert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsSlsADBJobRequestUnixTimestampConvert() = default ;
    CreateApsSlsADBJobRequestUnixTimestampConvert& operator=(const CreateApsSlsADBJobRequestUnixTimestampConvert &) = default ;
    CreateApsSlsADBJobRequestUnixTimestampConvert& operator=(CreateApsSlsADBJobRequestUnixTimestampConvert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->convert_ != nullptr
        && this->format_ != nullptr && this->transform_ != nullptr; };
    // convert Field Functions 
    bool hasConvert() const { return this->convert_ != nullptr;};
    void deleteConvert() { this->convert_ = nullptr;};
    inline string convert() const { DARABONBA_PTR_GET_DEFAULT(convert_, "") };
    inline CreateApsSlsADBJobRequestUnixTimestampConvert& setConvert(string convert) { DARABONBA_PTR_SET_VALUE(convert_, convert) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateApsSlsADBJobRequestUnixTimestampConvert& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline bool transform() const { DARABONBA_PTR_GET_DEFAULT(transform_, false) };
    inline CreateApsSlsADBJobRequestUnixTimestampConvert& setTransform(bool transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


  protected:
    // Specifies whether to enable the conversion of timestamps.
    std::shared_ptr<string> convert_ = nullptr;
    // The format of the timestamp.
    std::shared_ptr<string> format_ = nullptr;
    // Specifies whether to enable the timestamp conversion.
    std::shared_ptr<bool> transform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
