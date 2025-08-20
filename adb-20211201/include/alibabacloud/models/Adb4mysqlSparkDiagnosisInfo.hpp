// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADB4MYSQLSPARKDIAGNOSISINFO_HPP_
#define ALIBABACLOUD_MODELS_ADB4MYSQLSPARKDIAGNOSISINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class Adb4MysqlSparkDiagnosisInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Adb4MysqlSparkDiagnosisInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosisCode, diagnosisCode_);
      DARABONBA_PTR_TO_JSON(DiagnosisCodeLabel, diagnosisCodeLabel_);
      DARABONBA_PTR_TO_JSON(DiagnosisMsg, diagnosisMsg_);
      DARABONBA_PTR_TO_JSON(DiagnosisType, diagnosisType_);
    };
    friend void from_json(const Darabonba::Json& j, Adb4MysqlSparkDiagnosisInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosisCode, diagnosisCode_);
      DARABONBA_PTR_FROM_JSON(DiagnosisCodeLabel, diagnosisCodeLabel_);
      DARABONBA_PTR_FROM_JSON(DiagnosisMsg, diagnosisMsg_);
      DARABONBA_PTR_FROM_JSON(DiagnosisType, diagnosisType_);
    };
    Adb4MysqlSparkDiagnosisInfo() = default ;
    Adb4MysqlSparkDiagnosisInfo(const Adb4MysqlSparkDiagnosisInfo &) = default ;
    Adb4MysqlSparkDiagnosisInfo(Adb4MysqlSparkDiagnosisInfo &&) = default ;
    Adb4MysqlSparkDiagnosisInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Adb4MysqlSparkDiagnosisInfo() = default ;
    Adb4MysqlSparkDiagnosisInfo& operator=(const Adb4MysqlSparkDiagnosisInfo &) = default ;
    Adb4MysqlSparkDiagnosisInfo& operator=(Adb4MysqlSparkDiagnosisInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diagnosisCode_ != nullptr
        && this->diagnosisCodeLabel_ != nullptr && this->diagnosisMsg_ != nullptr && this->diagnosisType_ != nullptr; };
    // diagnosisCode Field Functions 
    bool hasDiagnosisCode() const { return this->diagnosisCode_ != nullptr;};
    void deleteDiagnosisCode() { this->diagnosisCode_ = nullptr;};
    inline string diagnosisCode() const { DARABONBA_PTR_GET_DEFAULT(diagnosisCode_, "") };
    inline Adb4MysqlSparkDiagnosisInfo& setDiagnosisCode(string diagnosisCode) { DARABONBA_PTR_SET_VALUE(diagnosisCode_, diagnosisCode) };


    // diagnosisCodeLabel Field Functions 
    bool hasDiagnosisCodeLabel() const { return this->diagnosisCodeLabel_ != nullptr;};
    void deleteDiagnosisCodeLabel() { this->diagnosisCodeLabel_ = nullptr;};
    inline string diagnosisCodeLabel() const { DARABONBA_PTR_GET_DEFAULT(diagnosisCodeLabel_, "") };
    inline Adb4MysqlSparkDiagnosisInfo& setDiagnosisCodeLabel(string diagnosisCodeLabel) { DARABONBA_PTR_SET_VALUE(diagnosisCodeLabel_, diagnosisCodeLabel) };


    // diagnosisMsg Field Functions 
    bool hasDiagnosisMsg() const { return this->diagnosisMsg_ != nullptr;};
    void deleteDiagnosisMsg() { this->diagnosisMsg_ = nullptr;};
    inline string diagnosisMsg() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMsg_, "") };
    inline Adb4MysqlSparkDiagnosisInfo& setDiagnosisMsg(string diagnosisMsg) { DARABONBA_PTR_SET_VALUE(diagnosisMsg_, diagnosisMsg) };


    // diagnosisType Field Functions 
    bool hasDiagnosisType() const { return this->diagnosisType_ != nullptr;};
    void deleteDiagnosisType() { this->diagnosisType_ = nullptr;};
    inline string diagnosisType() const { DARABONBA_PTR_GET_DEFAULT(diagnosisType_, "") };
    inline Adb4MysqlSparkDiagnosisInfo& setDiagnosisType(string diagnosisType) { DARABONBA_PTR_SET_VALUE(diagnosisType_, diagnosisType) };


  protected:
    std::shared_ptr<string> diagnosisCode_ = nullptr;
    std::shared_ptr<string> diagnosisCodeLabel_ = nullptr;
    std::shared_ptr<string> diagnosisMsg_ = nullptr;
    std::shared_ptr<string> diagnosisType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
