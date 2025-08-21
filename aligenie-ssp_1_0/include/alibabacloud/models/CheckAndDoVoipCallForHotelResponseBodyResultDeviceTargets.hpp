// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTDEVICETARGETS_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTDEVICETARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
    };
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets(const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets(CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets &&) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& operator=(const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& operator=(CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->msg_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData>) };
    inline vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData> data() { DARABONBA_PTR_GET(data_, vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData>) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& setData(const vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& setData(vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<vector<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData>> data_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
