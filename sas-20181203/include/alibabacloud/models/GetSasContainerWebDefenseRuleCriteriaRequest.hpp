// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULECRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULECRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetSasContainerWebDefenseRuleCriteriaRequest() = default ;
    GetSasContainerWebDefenseRuleCriteriaRequest(const GetSasContainerWebDefenseRuleCriteriaRequest &) = default ;
    GetSasContainerWebDefenseRuleCriteriaRequest(GetSasContainerWebDefenseRuleCriteriaRequest &&) = default ;
    GetSasContainerWebDefenseRuleCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleCriteriaRequest() = default ;
    GetSasContainerWebDefenseRuleCriteriaRequest& operator=(const GetSasContainerWebDefenseRuleCriteriaRequest &) = default ;
    GetSasContainerWebDefenseRuleCriteriaRequest& operator=(GetSasContainerWebDefenseRuleCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetSasContainerWebDefenseRuleCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The value of the search condition. Fuzzy match is supported.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
