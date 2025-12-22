// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATABACKRESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSERESPONSEBODYDATABACKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDriverLicenseResponseBodyDataBackResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDriverLicenseResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveNumber, archiveNumber_);
      DARABONBA_PTR_TO_JSON(CardNumber, cardNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Record, record_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDriverLicenseResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveNumber, archiveNumber_);
      DARABONBA_PTR_FROM_JSON(CardNumber, cardNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Record, record_);
    };
    RecognizeDriverLicenseResponseBodyDataBackResult() = default ;
    RecognizeDriverLicenseResponseBodyDataBackResult(const RecognizeDriverLicenseResponseBodyDataBackResult &) = default ;
    RecognizeDriverLicenseResponseBodyDataBackResult(RecognizeDriverLicenseResponseBodyDataBackResult &&) = default ;
    RecognizeDriverLicenseResponseBodyDataBackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDriverLicenseResponseBodyDataBackResult() = default ;
    RecognizeDriverLicenseResponseBodyDataBackResult& operator=(const RecognizeDriverLicenseResponseBodyDataBackResult &) = default ;
    RecognizeDriverLicenseResponseBodyDataBackResult& operator=(RecognizeDriverLicenseResponseBodyDataBackResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveNumber_ == nullptr
        && return this->cardNumber_ == nullptr && return this->name_ == nullptr && return this->record_ == nullptr; };
    // archiveNumber Field Functions 
    bool hasArchiveNumber() const { return this->archiveNumber_ != nullptr;};
    void deleteArchiveNumber() { this->archiveNumber_ = nullptr;};
    inline string archiveNumber() const { DARABONBA_PTR_GET_DEFAULT(archiveNumber_, "") };
    inline RecognizeDriverLicenseResponseBodyDataBackResult& setArchiveNumber(string archiveNumber) { DARABONBA_PTR_SET_VALUE(archiveNumber_, archiveNumber) };


    // cardNumber Field Functions 
    bool hasCardNumber() const { return this->cardNumber_ != nullptr;};
    void deleteCardNumber() { this->cardNumber_ = nullptr;};
    inline string cardNumber() const { DARABONBA_PTR_GET_DEFAULT(cardNumber_, "") };
    inline RecognizeDriverLicenseResponseBodyDataBackResult& setCardNumber(string cardNumber) { DARABONBA_PTR_SET_VALUE(cardNumber_, cardNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RecognizeDriverLicenseResponseBodyDataBackResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline string record() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
    inline RecognizeDriverLicenseResponseBodyDataBackResult& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


  protected:
    std::shared_ptr<string> archiveNumber_ = nullptr;
    std::shared_ptr<string> cardNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> record_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
