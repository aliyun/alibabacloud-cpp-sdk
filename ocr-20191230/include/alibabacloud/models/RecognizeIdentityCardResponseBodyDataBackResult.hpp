// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATABACKRESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEIDENTITYCARDRESPONSEBODYDATABACKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeIdentityCardResponseBodyDataBackResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIdentityCardResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Issue, issue_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIdentityCardResponseBodyDataBackResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Issue, issue_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    RecognizeIdentityCardResponseBodyDataBackResult() = default ;
    RecognizeIdentityCardResponseBodyDataBackResult(const RecognizeIdentityCardResponseBodyDataBackResult &) = default ;
    RecognizeIdentityCardResponseBodyDataBackResult(RecognizeIdentityCardResponseBodyDataBackResult &&) = default ;
    RecognizeIdentityCardResponseBodyDataBackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIdentityCardResponseBodyDataBackResult() = default ;
    RecognizeIdentityCardResponseBodyDataBackResult& operator=(const RecognizeIdentityCardResponseBodyDataBackResult &) = default ;
    RecognizeIdentityCardResponseBodyDataBackResult& operator=(RecognizeIdentityCardResponseBodyDataBackResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->issue_ != nullptr && this->startDate_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline RecognizeIdentityCardResponseBodyDataBackResult& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // issue Field Functions 
    bool hasIssue() const { return this->issue_ != nullptr;};
    void deleteIssue() { this->issue_ = nullptr;};
    inline string issue() const { DARABONBA_PTR_GET_DEFAULT(issue_, "") };
    inline RecognizeIdentityCardResponseBodyDataBackResult& setIssue(string issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline RecognizeIdentityCardResponseBodyDataBackResult& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> issue_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
