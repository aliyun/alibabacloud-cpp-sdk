// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATACYCLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODYDATACYCLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityResponseBodyDataCycleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityResponseBodyDataCycleList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityResponseBodyDataCycleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList(const GetSavingPlanDeductableCommodityResponseBodyDataCycleList &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList(GetSavingPlanDeductableCommodityResponseBodyDataCycleList &&) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityResponseBodyDataCycleList() = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList& operator=(const GetSavingPlanDeductableCommodityResponseBodyDataCycleList &) = default ;
    GetSavingPlanDeductableCommodityResponseBodyDataCycleList& operator=(GetSavingPlanDeductableCommodityResponseBodyDataCycleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataCycleList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSavingPlanDeductableCommodityResponseBodyDataCycleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
