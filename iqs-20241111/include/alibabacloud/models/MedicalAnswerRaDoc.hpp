// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALANSWERRADOC_HPP_
#define ALIBABACLOUD_MODELS_MEDICALANSWERRADOC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalAnswerRaDoc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAnswerRaDoc& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(rawUrl, rawUrl_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalAnswerRaDoc& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(rawUrl, rawUrl_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    MedicalAnswerRaDoc() = default ;
    MedicalAnswerRaDoc(const MedicalAnswerRaDoc &) = default ;
    MedicalAnswerRaDoc(MedicalAnswerRaDoc &&) = default ;
    MedicalAnswerRaDoc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAnswerRaDoc() = default ;
    MedicalAnswerRaDoc& operator=(const MedicalAnswerRaDoc &) = default ;
    MedicalAnswerRaDoc& operator=(MedicalAnswerRaDoc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->rawUrl_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline MedicalAnswerRaDoc& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // rawUrl Field Functions 
    bool hasRawUrl() const { return this->rawUrl_ != nullptr;};
    void deleteRawUrl() { this->rawUrl_ = nullptr;};
    inline string getRawUrl() const { DARABONBA_PTR_GET_DEFAULT(rawUrl_, "") };
    inline MedicalAnswerRaDoc& setRawUrl(string rawUrl) { DARABONBA_PTR_SET_VALUE(rawUrl_, rawUrl) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline MedicalAnswerRaDoc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MedicalAnswerRaDoc& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> rawUrl_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
