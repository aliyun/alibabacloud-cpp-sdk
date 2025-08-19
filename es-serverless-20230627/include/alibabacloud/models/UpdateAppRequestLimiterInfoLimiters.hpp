// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUESTLIMITERINFOLIMITERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUESTLIMITERINFOLIMITERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateAppRequestLimiterInfoLimiters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequestLimiterInfoLimiters& obj) { 
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequestLimiterInfoLimiters& obj) { 
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    UpdateAppRequestLimiterInfoLimiters() = default ;
    UpdateAppRequestLimiterInfoLimiters(const UpdateAppRequestLimiterInfoLimiters &) = default ;
    UpdateAppRequestLimiterInfoLimiters(UpdateAppRequestLimiterInfoLimiters &&) = default ;
    UpdateAppRequestLimiterInfoLimiters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequestLimiterInfoLimiters() = default ;
    UpdateAppRequestLimiterInfoLimiters& operator=(const UpdateAppRequestLimiterInfoLimiters &) = default ;
    UpdateAppRequestLimiterInfoLimiters& operator=(UpdateAppRequestLimiterInfoLimiters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxValue_ != nullptr
        && this->minValue_ != nullptr && this->type_ != nullptr && this->values_ != nullptr; };
    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline UpdateAppRequestLimiterInfoLimiters& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline UpdateAppRequestLimiterInfoLimiters& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAppRequestLimiterInfoLimiters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline UpdateAppRequestLimiterInfoLimiters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateAppRequestLimiterInfoLimiters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    std::shared_ptr<int32_t> minValue_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
