// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLISTWARNINGSTRATEGYLISTRANGE_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATAWARNINGSTRATEGYLISTWARNINGSTRATEGYLISTRANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& obj) { 
      DARABONBA_PTR_TO_JSON(RangeNum, rangeNum_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& obj) { 
      DARABONBA_PTR_FROM_JSON(RangeNum, rangeNum_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange(const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange(GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange &&) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange() = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& operator=(const GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange &) = default ;
    GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& operator=(GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rangeNum_ == nullptr
        && return this->type_ == nullptr; };
    // rangeNum Field Functions 
    bool hasRangeNum() const { return this->rangeNum_ != nullptr;};
    void deleteRangeNum() { this->rangeNum_ = nullptr;};
    inline int64_t rangeNum() const { DARABONBA_PTR_GET_DEFAULT(rangeNum_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& setRangeNum(int64_t rangeNum) { DARABONBA_PTR_SET_VALUE(rangeNum_, rangeNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline GetWarningStrategyConfigResponseBodyDataWarningStrategyListWarningStrategyListRange& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> rangeNum_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
