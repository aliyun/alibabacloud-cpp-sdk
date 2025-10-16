// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTMULTIMEDIAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSERJOBREQUESTMULTIMEDIAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocParserJobRequestMultimediaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParserJobRequestMultimediaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(EnableSynopsisParse, enableSynopsisParse_);
      DARABONBA_PTR_TO_JSON(VlParsePrompt, vlParsePrompt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParserJobRequestMultimediaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableSynopsisParse, enableSynopsisParse_);
      DARABONBA_PTR_FROM_JSON(VlParsePrompt, vlParsePrompt_);
    };
    SubmitDocParserJobRequestMultimediaParameters() = default ;
    SubmitDocParserJobRequestMultimediaParameters(const SubmitDocParserJobRequestMultimediaParameters &) = default ;
    SubmitDocParserJobRequestMultimediaParameters(SubmitDocParserJobRequestMultimediaParameters &&) = default ;
    SubmitDocParserJobRequestMultimediaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParserJobRequestMultimediaParameters() = default ;
    SubmitDocParserJobRequestMultimediaParameters& operator=(const SubmitDocParserJobRequestMultimediaParameters &) = default ;
    SubmitDocParserJobRequestMultimediaParameters& operator=(SubmitDocParserJobRequestMultimediaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableSynopsisParse_ == nullptr
        && return this->vlParsePrompt_ == nullptr; };
    // enableSynopsisParse Field Functions 
    bool hasEnableSynopsisParse() const { return this->enableSynopsisParse_ != nullptr;};
    void deleteEnableSynopsisParse() { this->enableSynopsisParse_ = nullptr;};
    inline bool enableSynopsisParse() const { DARABONBA_PTR_GET_DEFAULT(enableSynopsisParse_, false) };
    inline SubmitDocParserJobRequestMultimediaParameters& setEnableSynopsisParse(bool enableSynopsisParse) { DARABONBA_PTR_SET_VALUE(enableSynopsisParse_, enableSynopsisParse) };


    // vlParsePrompt Field Functions 
    bool hasVlParsePrompt() const { return this->vlParsePrompt_ != nullptr;};
    void deleteVlParsePrompt() { this->vlParsePrompt_ = nullptr;};
    inline string vlParsePrompt() const { DARABONBA_PTR_GET_DEFAULT(vlParsePrompt_, "") };
    inline SubmitDocParserJobRequestMultimediaParameters& setVlParsePrompt(string vlParsePrompt) { DARABONBA_PTR_SET_VALUE(vlParsePrompt_, vlParsePrompt) };


  protected:
    std::shared_ptr<bool> enableSynopsisParse_ = nullptr;
    std::shared_ptr<string> vlParsePrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
