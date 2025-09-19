// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILBASELINEITEM_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILBASELINEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem(GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem &&) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& operator=(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& operator=(GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The unique identifier of the baseline check item.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the baseline check item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
