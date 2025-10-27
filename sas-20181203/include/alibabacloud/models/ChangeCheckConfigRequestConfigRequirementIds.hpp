// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUESTCONFIGREQUIREMENTIDS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUESTCONFIGREQUIREMENTIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckConfigRequestConfigRequirementIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckConfigRequestConfigRequirementIds& obj) { 
      DARABONBA_PTR_TO_JSON(AddIds, addIds_);
      DARABONBA_PTR_TO_JSON(RemoveIds, removeIds_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckConfigRequestConfigRequirementIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AddIds, addIds_);
      DARABONBA_PTR_FROM_JSON(RemoveIds, removeIds_);
    };
    ChangeCheckConfigRequestConfigRequirementIds() = default ;
    ChangeCheckConfigRequestConfigRequirementIds(const ChangeCheckConfigRequestConfigRequirementIds &) = default ;
    ChangeCheckConfigRequestConfigRequirementIds(ChangeCheckConfigRequestConfigRequirementIds &&) = default ;
    ChangeCheckConfigRequestConfigRequirementIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckConfigRequestConfigRequirementIds() = default ;
    ChangeCheckConfigRequestConfigRequirementIds& operator=(const ChangeCheckConfigRequestConfigRequirementIds &) = default ;
    ChangeCheckConfigRequestConfigRequirementIds& operator=(ChangeCheckConfigRequestConfigRequirementIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addIds_ == nullptr
        && return this->removeIds_ == nullptr; };
    // addIds Field Functions 
    bool hasAddIds() const { return this->addIds_ != nullptr;};
    void deleteAddIds() { this->addIds_ = nullptr;};
    inline const vector<int64_t> & addIds() const { DARABONBA_PTR_GET_CONST(addIds_, vector<int64_t>) };
    inline vector<int64_t> addIds() { DARABONBA_PTR_GET(addIds_, vector<int64_t>) };
    inline ChangeCheckConfigRequestConfigRequirementIds& setAddIds(const vector<int64_t> & addIds) { DARABONBA_PTR_SET_VALUE(addIds_, addIds) };
    inline ChangeCheckConfigRequestConfigRequirementIds& setAddIds(vector<int64_t> && addIds) { DARABONBA_PTR_SET_RVALUE(addIds_, addIds) };


    // removeIds Field Functions 
    bool hasRemoveIds() const { return this->removeIds_ != nullptr;};
    void deleteRemoveIds() { this->removeIds_ = nullptr;};
    inline const vector<int64_t> & removeIds() const { DARABONBA_PTR_GET_CONST(removeIds_, vector<int64_t>) };
    inline vector<int64_t> removeIds() { DARABONBA_PTR_GET(removeIds_, vector<int64_t>) };
    inline ChangeCheckConfigRequestConfigRequirementIds& setRemoveIds(const vector<int64_t> & removeIds) { DARABONBA_PTR_SET_VALUE(removeIds_, removeIds) };
    inline ChangeCheckConfigRequestConfigRequirementIds& setRemoveIds(vector<int64_t> && removeIds) { DARABONBA_PTR_SET_RVALUE(removeIds_, removeIds) };


  protected:
    // The requirement IDs that you want to add to the policy.
    std::shared_ptr<vector<int64_t>> addIds_ = nullptr;
    // The requirement IDs that you want to remove from the policy.
    std::shared_ptr<vector<int64_t>> removeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
