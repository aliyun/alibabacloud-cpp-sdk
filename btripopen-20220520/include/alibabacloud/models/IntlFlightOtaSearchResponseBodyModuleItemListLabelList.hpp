// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTLABELLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTLABELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleItemListLabelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleItemListLabelList& obj) { 
      DARABONBA_PTR_TO_JSON(labelCode, labelCode_);
      DARABONBA_PTR_TO_JSON(labelName, labelName_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleItemListLabelList& obj) { 
      DARABONBA_PTR_FROM_JSON(labelCode, labelCode_);
      DARABONBA_PTR_FROM_JSON(labelName, labelName_);
    };
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList(const IntlFlightOtaSearchResponseBodyModuleItemListLabelList &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList(IntlFlightOtaSearchResponseBodyModuleItemListLabelList &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleItemListLabelList() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList& operator=(const IntlFlightOtaSearchResponseBodyModuleItemListLabelList &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListLabelList& operator=(IntlFlightOtaSearchResponseBodyModuleItemListLabelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelCode_ != nullptr
        && this->labelName_ != nullptr; };
    // labelCode Field Functions 
    bool hasLabelCode() const { return this->labelCode_ != nullptr;};
    void deleteLabelCode() { this->labelCode_ = nullptr;};
    inline int32_t labelCode() const { DARABONBA_PTR_GET_DEFAULT(labelCode_, 0) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListLabelList& setLabelCode(int32_t labelCode) { DARABONBA_PTR_SET_VALUE(labelCode_, labelCode) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemListLabelList& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


  protected:
    std::shared_ptr<int32_t> labelCode_ = nullptr;
    std::shared_ptr<string> labelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
