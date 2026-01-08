// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
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
  class DescribeBatchSlsDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ItemList, itemList_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ItemList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
        DARABONBA_PTR_TO_JSON(DispatchName, dispatchName_);
        DARABONBA_PTR_TO_JSON(DispatchValue, dispatchValue_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(FilterKeys, filterKeys_);
        DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      };
      friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
        DARABONBA_PTR_FROM_JSON(DispatchName, dispatchName_);
        DARABONBA_PTR_FROM_JSON(DispatchValue, dispatchValue_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(FilterKeys, filterKeys_);
        DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      };
      ItemList() = default ;
      ItemList(const ItemList &) = default ;
      ItemList(ItemList &&) = default ;
      ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItemList() = default ;
      ItemList& operator=(const ItemList &) = default ;
      ItemList& operator=(ItemList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configStatus_ == nullptr
        && this->dispatchName_ == nullptr && this->dispatchValue_ == nullptr && this->enable_ == nullptr && this->filterKeys_ == nullptr && this->searchName_ == nullptr; };
      // configStatus Field Functions 
      bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
      void deleteConfigStatus() { this->configStatus_ = nullptr;};
      inline string getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, "") };
      inline ItemList& setConfigStatus(string configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


      // dispatchName Field Functions 
      bool hasDispatchName() const { return this->dispatchName_ != nullptr;};
      void deleteDispatchName() { this->dispatchName_ = nullptr;};
      inline string getDispatchName() const { DARABONBA_PTR_GET_DEFAULT(dispatchName_, "") };
      inline ItemList& setDispatchName(string dispatchName) { DARABONBA_PTR_SET_VALUE(dispatchName_, dispatchName) };


      // dispatchValue Field Functions 
      bool hasDispatchValue() const { return this->dispatchValue_ != nullptr;};
      void deleteDispatchValue() { this->dispatchValue_ = nullptr;};
      inline string getDispatchValue() const { DARABONBA_PTR_GET_DEFAULT(dispatchValue_, "") };
      inline ItemList& setDispatchValue(string dispatchValue) { DARABONBA_PTR_SET_VALUE(dispatchValue_, dispatchValue) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline ItemList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // filterKeys Field Functions 
      bool hasFilterKeys() const { return this->filterKeys_ != nullptr;};
      void deleteFilterKeys() { this->filterKeys_ = nullptr;};
      inline const vector<string> & getFilterKeys() const { DARABONBA_PTR_GET_CONST(filterKeys_, vector<string>) };
      inline vector<string> getFilterKeys() { DARABONBA_PTR_GET(filterKeys_, vector<string>) };
      inline ItemList& setFilterKeys(const vector<string> & filterKeys) { DARABONBA_PTR_SET_VALUE(filterKeys_, filterKeys) };
      inline ItemList& setFilterKeys(vector<string> && filterKeys) { DARABONBA_PTR_SET_RVALUE(filterKeys_, filterKeys) };


      // searchName Field Functions 
      bool hasSearchName() const { return this->searchName_ != nullptr;};
      void deleteSearchName() { this->searchName_ = nullptr;};
      inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
      inline ItemList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    protected:
      shared_ptr<string> configStatus_ {};
      shared_ptr<string> dispatchName_ {};
      shared_ptr<string> dispatchValue_ {};
      shared_ptr<bool> enable_ {};
      shared_ptr<vector<string>> filterKeys_ {};
      shared_ptr<string> searchName_ {};
    };

    virtual bool empty() const override { return this->itemList_ == nullptr
        && this->logstoreName_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr; };
    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList>) };
    inline vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList>) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setItemList(const vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setItemList(vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeBatchSlsDispatchStatusResponseBody::ItemList>> itemList_ {};
    shared_ptr<string> logstoreName_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
