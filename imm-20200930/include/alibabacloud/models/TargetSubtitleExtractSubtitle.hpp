// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETSUBTITLEEXTRACTSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_TARGETSUBTITLEEXTRACTSUBTITLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetSubtitleExtractSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetSubtitleExtractSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, TargetSubtitleExtractSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    TargetSubtitleExtractSubtitle() = default ;
    TargetSubtitleExtractSubtitle(const TargetSubtitleExtractSubtitle &) = default ;
    TargetSubtitleExtractSubtitle(TargetSubtitleExtractSubtitle &&) = default ;
    TargetSubtitleExtractSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetSubtitleExtractSubtitle() = default ;
    TargetSubtitleExtractSubtitle& operator=(const TargetSubtitleExtractSubtitle &) = default ;
    TargetSubtitleExtractSubtitle& operator=(TargetSubtitleExtractSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->URI_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline TargetSubtitleExtractSubtitle& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline TargetSubtitleExtractSubtitle& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
