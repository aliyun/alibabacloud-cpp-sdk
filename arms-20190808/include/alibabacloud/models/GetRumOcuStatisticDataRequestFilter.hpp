// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATAREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATAREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumOcuStatisticDataRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumOcuStatisticDataRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumOcuStatisticDataRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    GetRumOcuStatisticDataRequestFilter() = default ;
    GetRumOcuStatisticDataRequestFilter(const GetRumOcuStatisticDataRequestFilter &) = default ;
    GetRumOcuStatisticDataRequestFilter(GetRumOcuStatisticDataRequestFilter &&) = default ;
    GetRumOcuStatisticDataRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumOcuStatisticDataRequestFilter() = default ;
    GetRumOcuStatisticDataRequestFilter& operator=(const GetRumOcuStatisticDataRequestFilter &) = default ;
    GetRumOcuStatisticDataRequestFilter& operator=(GetRumOcuStatisticDataRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->opType_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetRumOcuStatisticDataRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline GetRumOcuStatisticDataRequestFilter& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline GetRumOcuStatisticDataRequestFilter& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline GetRumOcuStatisticDataRequestFilter& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The key of the filter condition. Three types of filter conditions are provided:
    // 
    // *   Application name: pid (Note that the application name is displayed, but the application ID is actually specified)
    // *   Application type: siteType
    // *   Data type: dataType
    std::shared_ptr<string> key_ = nullptr;
    // The type of the operator. Valid value: in.
    std::shared_ptr<string> opType_ = nullptr;
    // The value of the filter condition. The value is a JSON array of strings.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
