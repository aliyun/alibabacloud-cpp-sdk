// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCommonSwitchConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonSwitchConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonSwitchConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCommonSwitchConfigRequest() = default ;
    GetCommonSwitchConfigRequest(const GetCommonSwitchConfigRequest &) = default ;
    GetCommonSwitchConfigRequest(GetCommonSwitchConfigRequest &&) = default ;
    GetCommonSwitchConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonSwitchConfigRequest() = default ;
    GetCommonSwitchConfigRequest& operator=(const GetCommonSwitchConfigRequest &) = default ;
    GetCommonSwitchConfigRequest& operator=(GetCommonSwitchConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCommonSwitchConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the common switch.
    // 
    // >  You can call the [ListClientUserDefineRules](~~ListClientUserDefineRules~~) or [ListSystemClientRules](~~ListSystemClientRules~~) operation to obtain the switch type from the response parameter SwitchId.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
