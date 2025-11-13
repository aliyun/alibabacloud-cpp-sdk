// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATACHATBOTBUSINESSUNIT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATACHATBOTBUSINESSUNIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceResponseBodyDataChatbotBusinessUnit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataChatbotBusinessUnit& obj) { 
      DARABONBA_PTR_TO_JSON(UnitId, unitId_);
      DARABONBA_PTR_TO_JSON(UnitKey, unitKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataChatbotBusinessUnit& obj) { 
      DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
      DARABONBA_PTR_FROM_JSON(UnitKey, unitKey_);
    };
    GetInstanceResponseBodyDataChatbotBusinessUnit() = default ;
    GetInstanceResponseBodyDataChatbotBusinessUnit(const GetInstanceResponseBodyDataChatbotBusinessUnit &) = default ;
    GetInstanceResponseBodyDataChatbotBusinessUnit(GetInstanceResponseBodyDataChatbotBusinessUnit &&) = default ;
    GetInstanceResponseBodyDataChatbotBusinessUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataChatbotBusinessUnit() = default ;
    GetInstanceResponseBodyDataChatbotBusinessUnit& operator=(const GetInstanceResponseBodyDataChatbotBusinessUnit &) = default ;
    GetInstanceResponseBodyDataChatbotBusinessUnit& operator=(GetInstanceResponseBodyDataChatbotBusinessUnit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->unitId_ == nullptr
        && return this->unitKey_ == nullptr; };
    // unitId Field Functions 
    bool hasUnitId() const { return this->unitId_ != nullptr;};
    void deleteUnitId() { this->unitId_ = nullptr;};
    inline int64_t unitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
    inline GetInstanceResponseBodyDataChatbotBusinessUnit& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


    // unitKey Field Functions 
    bool hasUnitKey() const { return this->unitKey_ != nullptr;};
    void deleteUnitKey() { this->unitKey_ = nullptr;};
    inline string unitKey() const { DARABONBA_PTR_GET_DEFAULT(unitKey_, "") };
    inline GetInstanceResponseBodyDataChatbotBusinessUnit& setUnitKey(string unitKey) { DARABONBA_PTR_SET_VALUE(unitKey_, unitKey) };


  protected:
    std::shared_ptr<int64_t> unitId_ = nullptr;
    std::shared_ptr<string> unitKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
