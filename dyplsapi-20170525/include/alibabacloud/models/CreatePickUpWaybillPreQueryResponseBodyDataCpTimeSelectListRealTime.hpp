// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTREALTIME_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATACPTIMESELECTLISTREALTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SelectDisableTip, selectDisableTip_);
      DARABONBA_PTR_TO_JSON(Selectable, selectable_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SelectDisableTip, selectDisableTip_);
      DARABONBA_PTR_FROM_JSON(Selectable, selectable_);
    };
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime &&) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime() = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& operator=(const CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& operator=(CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->selectDisableTip_ == nullptr && return this->selectable_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // selectDisableTip Field Functions 
    bool hasSelectDisableTip() const { return this->selectDisableTip_ != nullptr;};
    void deleteSelectDisableTip() { this->selectDisableTip_ = nullptr;};
    inline string selectDisableTip() const { DARABONBA_PTR_GET_DEFAULT(selectDisableTip_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& setSelectDisableTip(string selectDisableTip) { DARABONBA_PTR_SET_VALUE(selectDisableTip_, selectDisableTip) };


    // selectable Field Functions 
    bool hasSelectable() const { return this->selectable_ != nullptr;};
    void deleteSelectable() { this->selectable_ = nullptr;};
    inline bool selectable() const { DARABONBA_PTR_GET_DEFAULT(selectable_, false) };
    inline CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime& setSelectable(bool selectable) { DARABONBA_PTR_SET_VALUE(selectable_, selectable) };


  protected:
    // The name of the real-time order type.
    std::shared_ptr<string> name_ = nullptr;
    // The tip displayed when the real-time order cannot be placed.
    std::shared_ptr<string> selectDisableTip_ = nullptr;
    // Indicates whether the real-time order can be placed after the deadline for placing a real-time order is reached.
    std::shared_ptr<bool> selectable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
