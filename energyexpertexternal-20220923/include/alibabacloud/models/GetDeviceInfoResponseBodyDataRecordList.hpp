// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODYDATARECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEINFORESPONSEBODYDATARECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceInfoResponseBodyDataRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceInfoResponseBodyDataRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(paramName, paramName_);
      DARABONBA_PTR_TO_JSON(statisticsDate, statisticsDate_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceInfoResponseBodyDataRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(paramName, paramName_);
      DARABONBA_PTR_FROM_JSON(statisticsDate, statisticsDate_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetDeviceInfoResponseBodyDataRecordList() = default ;
    GetDeviceInfoResponseBodyDataRecordList(const GetDeviceInfoResponseBodyDataRecordList &) = default ;
    GetDeviceInfoResponseBodyDataRecordList(GetDeviceInfoResponseBodyDataRecordList &&) = default ;
    GetDeviceInfoResponseBodyDataRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceInfoResponseBodyDataRecordList() = default ;
    GetDeviceInfoResponseBodyDataRecordList& operator=(const GetDeviceInfoResponseBodyDataRecordList &) = default ;
    GetDeviceInfoResponseBodyDataRecordList& operator=(GetDeviceInfoResponseBodyDataRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && return this->paramName_ == nullptr && return this->statisticsDate_ == nullptr && return this->type_ == nullptr && return this->unit_ == nullptr && return this->value_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetDeviceInfoResponseBodyDataRecordList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline GetDeviceInfoResponseBodyDataRecordList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // statisticsDate Field Functions 
    bool hasStatisticsDate() const { return this->statisticsDate_ != nullptr;};
    void deleteStatisticsDate() { this->statisticsDate_ = nullptr;};
    inline string statisticsDate() const { DARABONBA_PTR_GET_DEFAULT(statisticsDate_, "") };
    inline GetDeviceInfoResponseBodyDataRecordList& setStatisticsDate(string statisticsDate) { DARABONBA_PTR_SET_VALUE(statisticsDate_, statisticsDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDeviceInfoResponseBodyDataRecordList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetDeviceInfoResponseBodyDataRecordList& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetDeviceInfoResponseBodyDataRecordList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The device identifier.
    std::shared_ptr<string> identifier_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> paramName_ = nullptr;
    // The date on which the statistics were collected.
    std::shared_ptr<string> statisticsDate_ = nullptr;
    // The type of the measuring point.
    std::shared_ptr<string> type_ = nullptr;
    // The unit of the parameter value.
    std::shared_ptr<string> unit_ = nullptr;
    // The value of the measuring point.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
