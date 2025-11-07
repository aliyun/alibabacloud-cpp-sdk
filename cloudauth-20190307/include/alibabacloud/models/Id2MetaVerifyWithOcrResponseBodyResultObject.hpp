// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyWithOCRResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyWithOCRResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CardInfo, cardInfo_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyWithOCRResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CardInfo, cardInfo_);
    };
    Id2MetaVerifyWithOCRResponseBodyResultObject() = default ;
    Id2MetaVerifyWithOCRResponseBodyResultObject(const Id2MetaVerifyWithOCRResponseBodyResultObject &) = default ;
    Id2MetaVerifyWithOCRResponseBodyResultObject(Id2MetaVerifyWithOCRResponseBodyResultObject &&) = default ;
    Id2MetaVerifyWithOCRResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyWithOCRResponseBodyResultObject() = default ;
    Id2MetaVerifyWithOCRResponseBodyResultObject& operator=(const Id2MetaVerifyWithOCRResponseBodyResultObject &) = default ;
    Id2MetaVerifyWithOCRResponseBodyResultObject& operator=(Id2MetaVerifyWithOCRResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->cardInfo_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id2MetaVerifyWithOCRResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // cardInfo Field Functions 
    bool hasCardInfo() const { return this->cardInfo_ != nullptr;};
    void deleteCardInfo() { this->cardInfo_ = nullptr;};
    inline string cardInfo() const { DARABONBA_PTR_GET_DEFAULT(cardInfo_, "") };
    inline Id2MetaVerifyWithOCRResponseBodyResultObject& setCardInfo(string cardInfo) { DARABONBA_PTR_SET_VALUE(cardInfo_, cardInfo) };


  protected:
    // Identity verification result:
    // - 1: Consistent
    // - 2: Inconsistent
    // - 3: No record found
    std::shared_ptr<string> bizCode_ = nullptr;
    // {"address":"Zhejiang Province, Hangzhou City, Yu*****","birthDate":"19901226","certName":"Zhang San","certNo":"1234561990122*****","nationality":"Han","authority":"xxx Public Security Bureau","startDate":"20201130","endDate":"20301130"}
    std::shared_ptr<string> cardInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
