// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODYDATAFAILINFO_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODYDATAFAILINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertAiOutboundPhoneNumsResponseBodyDataFailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
    };
    friend void from_json(const Darabonba::Json& j, InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
    };
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo() = default ;
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo(const InsertAiOutboundPhoneNumsResponseBodyDataFailInfo &) = default ;
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo(InsertAiOutboundPhoneNumsResponseBodyDataFailInfo &&) = default ;
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertAiOutboundPhoneNumsResponseBodyDataFailInfo() = default ;
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& operator=(const InsertAiOutboundPhoneNumsResponseBodyDataFailInfo &) = default ;
    InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& operator=(InsertAiOutboundPhoneNumsResponseBodyDataFailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizData_ == nullptr
        && return this->msg_ == nullptr && return this->phoneNum_ == nullptr; };
    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline InsertAiOutboundPhoneNumsResponseBodyDataFailInfo& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


  protected:
    std::shared_ptr<string> bizData_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> phoneNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
