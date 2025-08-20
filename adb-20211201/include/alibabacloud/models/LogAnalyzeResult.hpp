// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGANALYZERESULT_HPP_
#define ALIBABACLOUD_MODELS_LOGANALYZERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class LogAnalyzeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogAnalyzeResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppErrorAdvice, appErrorAdvice_);
      DARABONBA_PTR_TO_JSON(AppErrorCode, appErrorCode_);
      DARABONBA_PTR_TO_JSON(AppErrorLog, appErrorLog_);
    };
    friend void from_json(const Darabonba::Json& j, LogAnalyzeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppErrorAdvice, appErrorAdvice_);
      DARABONBA_PTR_FROM_JSON(AppErrorCode, appErrorCode_);
      DARABONBA_PTR_FROM_JSON(AppErrorLog, appErrorLog_);
    };
    LogAnalyzeResult() = default ;
    LogAnalyzeResult(const LogAnalyzeResult &) = default ;
    LogAnalyzeResult(LogAnalyzeResult &&) = default ;
    LogAnalyzeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogAnalyzeResult() = default ;
    LogAnalyzeResult& operator=(const LogAnalyzeResult &) = default ;
    LogAnalyzeResult& operator=(LogAnalyzeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appErrorAdvice_ != nullptr
        && this->appErrorCode_ != nullptr && this->appErrorLog_ != nullptr; };
    // appErrorAdvice Field Functions 
    bool hasAppErrorAdvice() const { return this->appErrorAdvice_ != nullptr;};
    void deleteAppErrorAdvice() { this->appErrorAdvice_ = nullptr;};
    inline string appErrorAdvice() const { DARABONBA_PTR_GET_DEFAULT(appErrorAdvice_, "") };
    inline LogAnalyzeResult& setAppErrorAdvice(string appErrorAdvice) { DARABONBA_PTR_SET_VALUE(appErrorAdvice_, appErrorAdvice) };


    // appErrorCode Field Functions 
    bool hasAppErrorCode() const { return this->appErrorCode_ != nullptr;};
    void deleteAppErrorCode() { this->appErrorCode_ = nullptr;};
    inline string appErrorCode() const { DARABONBA_PTR_GET_DEFAULT(appErrorCode_, "") };
    inline LogAnalyzeResult& setAppErrorCode(string appErrorCode) { DARABONBA_PTR_SET_VALUE(appErrorCode_, appErrorCode) };


    // appErrorLog Field Functions 
    bool hasAppErrorLog() const { return this->appErrorLog_ != nullptr;};
    void deleteAppErrorLog() { this->appErrorLog_ = nullptr;};
    inline string appErrorLog() const { DARABONBA_PTR_GET_DEFAULT(appErrorLog_, "") };
    inline LogAnalyzeResult& setAppErrorLog(string appErrorLog) { DARABONBA_PTR_SET_VALUE(appErrorLog_, appErrorLog) };


  protected:
    std::shared_ptr<string> appErrorAdvice_ = nullptr;
    std::shared_ptr<string> appErrorCode_ = nullptr;
    std::shared_ptr<string> appErrorLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
