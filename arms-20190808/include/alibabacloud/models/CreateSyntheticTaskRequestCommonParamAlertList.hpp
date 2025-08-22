// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTCOMMONPARAMALERTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTCOMMONPARAMALERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestCommonParamAlertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestCommonParamAlertList& obj) { 
      DARABONBA_PTR_TO_JSON(IsCritical, isCritical_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Symbols, symbols_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestCommonParamAlertList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsCritical, isCritical_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Symbols, symbols_);
    };
    CreateSyntheticTaskRequestCommonParamAlertList() = default ;
    CreateSyntheticTaskRequestCommonParamAlertList(const CreateSyntheticTaskRequestCommonParamAlertList &) = default ;
    CreateSyntheticTaskRequestCommonParamAlertList(CreateSyntheticTaskRequestCommonParamAlertList &&) = default ;
    CreateSyntheticTaskRequestCommonParamAlertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestCommonParamAlertList() = default ;
    CreateSyntheticTaskRequestCommonParamAlertList& operator=(const CreateSyntheticTaskRequestCommonParamAlertList &) = default ;
    CreateSyntheticTaskRequestCommonParamAlertList& operator=(CreateSyntheticTaskRequestCommonParamAlertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isCritical_ != nullptr
        && this->name_ != nullptr && this->symbols_ != nullptr; };
    // isCritical Field Functions 
    bool hasIsCritical() const { return this->isCritical_ != nullptr;};
    void deleteIsCritical() { this->isCritical_ = nullptr;};
    inline int64_t isCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, 0L) };
    inline CreateSyntheticTaskRequestCommonParamAlertList& setIsCritical(int64_t isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSyntheticTaskRequestCommonParamAlertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // symbols Field Functions 
    bool hasSymbols() const { return this->symbols_ != nullptr;};
    void deleteSymbols() { this->symbols_ = nullptr;};
    inline int64_t symbols() const { DARABONBA_PTR_GET_DEFAULT(symbols_, 0L) };
    inline CreateSyntheticTaskRequestCommonParamAlertList& setSymbols(int64_t symbols) { DARABONBA_PTR_SET_VALUE(symbols_, symbols) };


  protected:
    // Specifies whether the condition must be met.
    std::shared_ptr<int64_t> isCritical_ = nullptr;
    // The name of the alert rule.
    // 
    // For network synthetic monitoring, use the following names:
    // 
    // *   Latency: PING_SET
    // *   Packet loss rate: PING_LOST_RATE
    // *   Hijacking: HIJACKPER
    std::shared_ptr<string> name_ = nullptr;
    // Specifies how the condition is evaluated. Valid values:
    // 
    // *   1: greater than
    // *   0: less than
    std::shared_ptr<int64_t> symbols_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
