// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFERENCETAG_HPP_
#define ALIBABACLOUD_MODELS_REFERENCETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ReferenceTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReferenceTag& obj) { 
      DARABONBA_PTR_TO_JSON(referenceContent, referenceContent_);
      DARABONBA_PTR_TO_JSON(referenceTitle, referenceTitle_);
    };
    friend void from_json(const Darabonba::Json& j, ReferenceTag& obj) { 
      DARABONBA_PTR_FROM_JSON(referenceContent, referenceContent_);
      DARABONBA_PTR_FROM_JSON(referenceTitle, referenceTitle_);
    };
    ReferenceTag() = default ;
    ReferenceTag(const ReferenceTag &) = default ;
    ReferenceTag(ReferenceTag &&) = default ;
    ReferenceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReferenceTag() = default ;
    ReferenceTag& operator=(const ReferenceTag &) = default ;
    ReferenceTag& operator=(ReferenceTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referenceContent_ == nullptr
        && return this->referenceTitle_ == nullptr; };
    // referenceContent Field Functions 
    bool hasReferenceContent() const { return this->referenceContent_ != nullptr;};
    void deleteReferenceContent() { this->referenceContent_ = nullptr;};
    inline string referenceContent() const { DARABONBA_PTR_GET_DEFAULT(referenceContent_, "") };
    inline ReferenceTag& setReferenceContent(string referenceContent) { DARABONBA_PTR_SET_VALUE(referenceContent_, referenceContent) };


    // referenceTitle Field Functions 
    bool hasReferenceTitle() const { return this->referenceTitle_ != nullptr;};
    void deleteReferenceTitle() { this->referenceTitle_ = nullptr;};
    inline string referenceTitle() const { DARABONBA_PTR_GET_DEFAULT(referenceTitle_, "") };
    inline ReferenceTag& setReferenceTitle(string referenceTitle) { DARABONBA_PTR_SET_VALUE(referenceTitle_, referenceTitle) };


  protected:
    std::shared_ptr<string> referenceContent_ = nullptr;
    std::shared_ptr<string> referenceTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
