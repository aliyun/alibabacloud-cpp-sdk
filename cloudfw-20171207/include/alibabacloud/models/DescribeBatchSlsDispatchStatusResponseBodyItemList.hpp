// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODYITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODYITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeBatchSlsDispatchStatusResponseBodyItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBodyItemList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_TO_JSON(DispatchName, dispatchName_);
      DARABONBA_PTR_TO_JSON(DispatchValue, dispatchValue_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBodyItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_FROM_JSON(DispatchName, dispatchName_);
      DARABONBA_PTR_FROM_JSON(DispatchValue, dispatchValue_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    DescribeBatchSlsDispatchStatusResponseBodyItemList() = default ;
    DescribeBatchSlsDispatchStatusResponseBodyItemList(const DescribeBatchSlsDispatchStatusResponseBodyItemList &) = default ;
    DescribeBatchSlsDispatchStatusResponseBodyItemList(DescribeBatchSlsDispatchStatusResponseBodyItemList &&) = default ;
    DescribeBatchSlsDispatchStatusResponseBodyItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchSlsDispatchStatusResponseBodyItemList() = default ;
    DescribeBatchSlsDispatchStatusResponseBodyItemList& operator=(const DescribeBatchSlsDispatchStatusResponseBodyItemList &) = default ;
    DescribeBatchSlsDispatchStatusResponseBodyItemList& operator=(DescribeBatchSlsDispatchStatusResponseBodyItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configStatus_ == nullptr
        && return this->dispatchName_ == nullptr && return this->dispatchValue_ == nullptr && return this->enable_ == nullptr && return this->filterKeys_ == nullptr && return this->searchName_ == nullptr; };
    // configStatus Field Functions 
    bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
    void deleteConfigStatus() { this->configStatus_ = nullptr;};
    inline string configStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setConfigStatus(string configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


    // dispatchName Field Functions 
    bool hasDispatchName() const { return this->dispatchName_ != nullptr;};
    void deleteDispatchName() { this->dispatchName_ = nullptr;};
    inline string dispatchName() const { DARABONBA_PTR_GET_DEFAULT(dispatchName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setDispatchName(string dispatchName) { DARABONBA_PTR_SET_VALUE(dispatchName_, dispatchName) };


    // dispatchValue Field Functions 
    bool hasDispatchValue() const { return this->dispatchValue_ != nullptr;};
    void deleteDispatchValue() { this->dispatchValue_ = nullptr;};
    inline string dispatchValue() const { DARABONBA_PTR_GET_DEFAULT(dispatchValue_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setDispatchValue(string dispatchValue) { DARABONBA_PTR_SET_VALUE(dispatchValue_, dispatchValue) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterKeys Field Functions 
    bool hasFilterKeys() const { return this->filterKeys_ != nullptr;};
    void deleteFilterKeys() { this->filterKeys_ = nullptr;};
    inline const vector<string> & filterKeys() const { DARABONBA_PTR_GET_CONST(filterKeys_, vector<string>) };
    inline vector<string> filterKeys() { DARABONBA_PTR_GET(filterKeys_, vector<string>) };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setFilterKeys(const vector<string> & filterKeys) { DARABONBA_PTR_SET_VALUE(filterKeys_, filterKeys) };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setFilterKeys(vector<string> && filterKeys) { DARABONBA_PTR_SET_RVALUE(filterKeys_, filterKeys) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBodyItemList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    std::shared_ptr<string> configStatus_ = nullptr;
    std::shared_ptr<string> dispatchName_ = nullptr;
    std::shared_ptr<string> dispatchValue_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<vector<string>> filterKeys_ = nullptr;
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
