// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALANSWERMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_MEDICALANSWERMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MedicalAnswerMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalAnswerMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAnswerMessage& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalAnswerMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
    };
    MedicalAnswerMessage() = default ;
    MedicalAnswerMessage(const MedicalAnswerMessage &) = default ;
    MedicalAnswerMessage(MedicalAnswerMessage &&) = default ;
    MedicalAnswerMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAnswerMessage() = default ;
    MedicalAnswerMessage& operator=(const MedicalAnswerMessage &) = default ;
    MedicalAnswerMessage& operator=(MedicalAnswerMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->metaData_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline MedicalAnswerMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const MedicalAnswerMetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, MedicalAnswerMetaData) };
    inline MedicalAnswerMetaData getMetaData() { DARABONBA_PTR_GET(metaData_, MedicalAnswerMetaData) };
    inline MedicalAnswerMessage& setMetaData(const MedicalAnswerMetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline MedicalAnswerMessage& setMetaData(MedicalAnswerMetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<MedicalAnswerMetaData> metaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
