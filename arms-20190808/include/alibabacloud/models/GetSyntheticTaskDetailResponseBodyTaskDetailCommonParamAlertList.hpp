// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILCOMMONPARAMALERTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILCOMMONPARAMALERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& obj) { 
      DARABONBA_PTR_TO_JSON(GeneralAlert, generalAlert_);
      DARABONBA_PTR_TO_JSON(IsCritical, isCritical_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SeriousAlert, seriousAlert_);
      DARABONBA_PTR_TO_JSON(Symbols, symbols_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& obj) { 
      DARABONBA_PTR_FROM_JSON(GeneralAlert, generalAlert_);
      DARABONBA_PTR_FROM_JSON(IsCritical, isCritical_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SeriousAlert, seriousAlert_);
      DARABONBA_PTR_FROM_JSON(Symbols, symbols_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList(const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList(GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generalAlert_ != nullptr
        && this->isCritical_ != nullptr && this->name_ != nullptr && this->seriousAlert_ != nullptr && this->symbols_ != nullptr; };
    // generalAlert Field Functions 
    bool hasGeneralAlert() const { return this->generalAlert_ != nullptr;};
    void deleteGeneralAlert() { this->generalAlert_ = nullptr;};
    inline string generalAlert() const { DARABONBA_PTR_GET_DEFAULT(generalAlert_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& setGeneralAlert(string generalAlert) { DARABONBA_PTR_SET_VALUE(generalAlert_, generalAlert) };


    // isCritical Field Functions 
    bool hasIsCritical() const { return this->isCritical_ != nullptr;};
    void deleteIsCritical() { this->isCritical_ = nullptr;};
    inline string isCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& setIsCritical(string isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // seriousAlert Field Functions 
    bool hasSeriousAlert() const { return this->seriousAlert_ != nullptr;};
    void deleteSeriousAlert() { this->seriousAlert_ = nullptr;};
    inline string seriousAlert() const { DARABONBA_PTR_GET_DEFAULT(seriousAlert_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& setSeriousAlert(string seriousAlert) { DARABONBA_PTR_SET_VALUE(seriousAlert_, seriousAlert) };


    // symbols Field Functions 
    bool hasSymbols() const { return this->symbols_ != nullptr;};
    void deleteSymbols() { this->symbols_ = nullptr;};
    inline string symbols() const { DARABONBA_PTR_GET_DEFAULT(symbols_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailCommonParamAlertList& setSymbols(string symbols) { DARABONBA_PTR_SET_VALUE(symbols_, symbols) };


  protected:
    // The low-risk alert.
    std::shared_ptr<string> generalAlert_ = nullptr;
    // Indicates whether the condition is essential.
    std::shared_ptr<string> isCritical_ = nullptr;
    // The alert name.
    std::shared_ptr<string> name_ = nullptr;
    // The Critical-level alert.
    std::shared_ptr<string> seriousAlert_ = nullptr;
    // Greater than or less than.
    std::shared_ptr<string> symbols_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
