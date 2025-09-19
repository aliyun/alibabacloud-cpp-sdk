// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCUTENUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCUTENUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExcuteNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcuteNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Degree, degree_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcuteNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Degree, degree_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeExcuteNumRequest() = default ;
    DescribeExcuteNumRequest(const DescribeExcuteNumRequest &) = default ;
    DescribeExcuteNumRequest(DescribeExcuteNumRequest &&) = default ;
    DescribeExcuteNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcuteNumRequest() = default ;
    DescribeExcuteNumRequest& operator=(const DescribeExcuteNumRequest &) = default ;
    DescribeExcuteNumRequest& operator=(DescribeExcuteNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->degree_ != nullptr && this->endDate_ != nullptr && this->lang_ != nullptr && this->sourceIp_ != nullptr && this->startDate_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExcuteNumRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // degree Field Functions 
    bool hasDegree() const { return this->degree_ != nullptr;};
    void deleteDegree() { this->degree_ = nullptr;};
    inline string degree() const { DARABONBA_PTR_GET_DEFAULT(degree_, "") };
    inline DescribeExcuteNumRequest& setDegree(string degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeExcuteNumRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeExcuteNumRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeExcuteNumRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeExcuteNumRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Service code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // This field is currently unused and has no query significance.
    std::shared_ptr<string> degree_ = nullptr;
    // End date, format yyyy-MM-dd, e.g., 2025-03-13.
    std::shared_ptr<string> endDate_ = nullptr;
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Request source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // Start date, format yyyy-MM-dd, e.g., 2025-03-10.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
