// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODYATTACKSINPUTPARAMITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODYATTACKSINPUTPARAMITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttacksResponseBodyAttacksInputParamItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttacksResponseBodyAttacksInputParamItemList& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessedKey, processedKey_);
      DARABONBA_PTR_TO_JSON(RawKey, rawKey_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttacksResponseBodyAttacksInputParamItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessedKey, processedKey_);
      DARABONBA_PTR_FROM_JSON(RawKey, rawKey_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAttacksResponseBodyAttacksInputParamItemList() = default ;
    DescribeAttacksResponseBodyAttacksInputParamItemList(const DescribeAttacksResponseBodyAttacksInputParamItemList &) = default ;
    DescribeAttacksResponseBodyAttacksInputParamItemList(DescribeAttacksResponseBodyAttacksInputParamItemList &&) = default ;
    DescribeAttacksResponseBodyAttacksInputParamItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttacksResponseBodyAttacksInputParamItemList() = default ;
    DescribeAttacksResponseBodyAttacksInputParamItemList& operator=(const DescribeAttacksResponseBodyAttacksInputParamItemList &) = default ;
    DescribeAttacksResponseBodyAttacksInputParamItemList& operator=(DescribeAttacksResponseBodyAttacksInputParamItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processedKey_ == nullptr
        && return this->rawKey_ == nullptr && return this->value_ == nullptr; };
    // processedKey Field Functions 
    bool hasProcessedKey() const { return this->processedKey_ != nullptr;};
    void deleteProcessedKey() { this->processedKey_ = nullptr;};
    inline string processedKey() const { DARABONBA_PTR_GET_DEFAULT(processedKey_, "") };
    inline DescribeAttacksResponseBodyAttacksInputParamItemList& setProcessedKey(string processedKey) { DARABONBA_PTR_SET_VALUE(processedKey_, processedKey) };


    // rawKey Field Functions 
    bool hasRawKey() const { return this->rawKey_ != nullptr;};
    void deleteRawKey() { this->rawKey_ = nullptr;};
    inline string rawKey() const { DARABONBA_PTR_GET_DEFAULT(rawKey_, "") };
    inline DescribeAttacksResponseBodyAttacksInputParamItemList& setRawKey(string rawKey) { DARABONBA_PTR_SET_VALUE(rawKey_, rawKey) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAttacksResponseBodyAttacksInputParamItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> processedKey_ = nullptr;
    std::shared_ptr<string> rawKey_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
