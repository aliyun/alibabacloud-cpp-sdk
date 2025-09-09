// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKEXPANDSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKEXPANDSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CheckExpandStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckExpandStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsActive, isActive_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
    };
    friend void from_json(const Darabonba::Json& j, CheckExpandStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsActive, isActive_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
    };
    CheckExpandStatusResponseBodyData() = default ;
    CheckExpandStatusResponseBodyData(const CheckExpandStatusResponseBodyData &) = default ;
    CheckExpandStatusResponseBodyData(CheckExpandStatusResponseBodyData &&) = default ;
    CheckExpandStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckExpandStatusResponseBodyData() = default ;
    CheckExpandStatusResponseBodyData& operator=(const CheckExpandStatusResponseBodyData &) = default ;
    CheckExpandStatusResponseBodyData& operator=(CheckExpandStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isActive_ != nullptr
        && this->msg_ != nullptr; };
    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool isActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline CheckExpandStatusResponseBodyData& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CheckExpandStatusResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


  protected:
    // Indicates whether scale-out operations can be performed on the database.
    std::shared_ptr<bool> isActive_ = nullptr;
    // The additional information.
    std::shared_ptr<string> msg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
