// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTSUBACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTSUBACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentSubAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentSubAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(SubAccountId, subAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentSubAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(SubAccountId, subAccountId_);
    };
    GetDataAgentSubAccountInfoRequest() = default ;
    GetDataAgentSubAccountInfoRequest(const GetDataAgentSubAccountInfoRequest &) = default ;
    GetDataAgentSubAccountInfoRequest(GetDataAgentSubAccountInfoRequest &&) = default ;
    GetDataAgentSubAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentSubAccountInfoRequest() = default ;
    GetDataAgentSubAccountInfoRequest& operator=(const GetDataAgentSubAccountInfoRequest &) = default ;
    GetDataAgentSubAccountInfoRequest& operator=(GetDataAgentSubAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dmsUnit_ == nullptr
        && this->subAccountId_ == nullptr; };
    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline GetDataAgentSubAccountInfoRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // subAccountId Field Functions 
    bool hasSubAccountId() const { return this->subAccountId_ != nullptr;};
    void deleteSubAccountId() { this->subAccountId_ = nullptr;};
    inline string getSubAccountId() const { DARABONBA_PTR_GET_DEFAULT(subAccountId_, "") };
    inline GetDataAgentSubAccountInfoRequest& setSubAccountId(string subAccountId) { DARABONBA_PTR_SET_VALUE(subAccountId_, subAccountId) };


  protected:
    shared_ptr<string> dmsUnit_ {};
    shared_ptr<string> subAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
