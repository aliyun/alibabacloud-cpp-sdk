// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTREADNARRATOROPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTREADNARRATOROPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentReadNarratorOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentReadNarratorOption& obj) { 
      DARABONBA_PTR_TO_JSON(Narrate, narrate_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentReadNarratorOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Narrate, narrate_);
    };
    DocumentReadNarratorOption() = default ;
    DocumentReadNarratorOption(const DocumentReadNarratorOption &) = default ;
    DocumentReadNarratorOption(DocumentReadNarratorOption &&) = default ;
    DocumentReadNarratorOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentReadNarratorOption() = default ;
    DocumentReadNarratorOption& operator=(const DocumentReadNarratorOption &) = default ;
    DocumentReadNarratorOption& operator=(DocumentReadNarratorOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->narrate_ == nullptr; };
    // narrate Field Functions 
    bool hasNarrate() const { return this->narrate_ != nullptr;};
    void deleteNarrate() { this->narrate_ = nullptr;};
    inline bool getNarrate() const { DARABONBA_PTR_GET_DEFAULT(narrate_, false) };
    inline DocumentReadNarratorOption& setNarrate(bool narrate) { DARABONBA_PTR_SET_VALUE(narrate_, narrate) };


  protected:
    // Whether to enable the document narration feature. Set to `true` to enable narration. Defaults to `false`.
    shared_ptr<bool> narrate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
