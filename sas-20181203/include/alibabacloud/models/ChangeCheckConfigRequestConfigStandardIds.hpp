// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUESTCONFIGSTANDARDIDS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUESTCONFIGSTANDARDIDS_HPP_
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
  class ChangeCheckConfigRequestConfigStandardIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckConfigRequestConfigStandardIds& obj) { 
      DARABONBA_PTR_TO_JSON(AddIds, addIds_);
      DARABONBA_PTR_TO_JSON(RemoveIds, removeIds_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckConfigRequestConfigStandardIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AddIds, addIds_);
      DARABONBA_PTR_FROM_JSON(RemoveIds, removeIds_);
    };
    ChangeCheckConfigRequestConfigStandardIds() = default ;
    ChangeCheckConfigRequestConfigStandardIds(const ChangeCheckConfigRequestConfigStandardIds &) = default ;
    ChangeCheckConfigRequestConfigStandardIds(ChangeCheckConfigRequestConfigStandardIds &&) = default ;
    ChangeCheckConfigRequestConfigStandardIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckConfigRequestConfigStandardIds() = default ;
    ChangeCheckConfigRequestConfigStandardIds& operator=(const ChangeCheckConfigRequestConfigStandardIds &) = default ;
    ChangeCheckConfigRequestConfigStandardIds& operator=(ChangeCheckConfigRequestConfigStandardIds &&) = default ;
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
    inline ChangeCheckConfigRequestConfigStandardIds& setAddIds(const vector<int64_t> & addIds) { DARABONBA_PTR_SET_VALUE(addIds_, addIds) };
    inline ChangeCheckConfigRequestConfigStandardIds& setAddIds(vector<int64_t> && addIds) { DARABONBA_PTR_SET_RVALUE(addIds_, addIds) };


    // removeIds Field Functions 
    bool hasRemoveIds() const { return this->removeIds_ != nullptr;};
    void deleteRemoveIds() { this->removeIds_ = nullptr;};
    inline const vector<int64_t> & removeIds() const { DARABONBA_PTR_GET_CONST(removeIds_, vector<int64_t>) };
    inline vector<int64_t> removeIds() { DARABONBA_PTR_GET(removeIds_, vector<int64_t>) };
    inline ChangeCheckConfigRequestConfigStandardIds& setRemoveIds(const vector<int64_t> & removeIds) { DARABONBA_PTR_SET_VALUE(removeIds_, removeIds) };
    inline ChangeCheckConfigRequestConfigStandardIds& setRemoveIds(vector<int64_t> && removeIds) { DARABONBA_PTR_SET_RVALUE(removeIds_, removeIds) };


  protected:
    // The standard IDs that you want to add to the policy.
    std::shared_ptr<vector<int64_t>> addIds_ = nullptr;
    // The standard IDs that you want to remove from the policy.
    std::shared_ptr<vector<int64_t>> removeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
