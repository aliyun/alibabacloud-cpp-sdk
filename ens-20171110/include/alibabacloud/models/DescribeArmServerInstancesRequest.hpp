// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AICSpecs, AICSpecs_);
      DARABONBA_PTR_TO_JSON(DescribeAICInstances, describeAICInstances_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_TO_JSON(ServerSpecs, serverSpecs_);
      DARABONBA_PTR_TO_JSON(States, states_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AICSpecs, AICSpecs_);
      DARABONBA_PTR_FROM_JSON(DescribeAICInstances, describeAICInstances_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_FROM_JSON(ServerSpecs, serverSpecs_);
      DARABONBA_PTR_FROM_JSON(States, states_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeARMServerInstancesRequest() = default ;
    DescribeARMServerInstancesRequest(const DescribeARMServerInstancesRequest &) = default ;
    DescribeARMServerInstancesRequest(DescribeARMServerInstancesRequest &&) = default ;
    DescribeARMServerInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesRequest() = default ;
    DescribeARMServerInstancesRequest& operator=(const DescribeARMServerInstancesRequest &) = default ;
    DescribeARMServerInstancesRequest& operator=(DescribeARMServerInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->AICSpecs_ == nullptr
        && this->describeAICInstances_ == nullptr && this->ensRegionIds_ == nullptr && this->maxDate_ == nullptr && this->minDate_ == nullptr && this->name_ == nullptr
        && this->namespace_ == nullptr && this->orderByParams_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->serverIds_ == nullptr
        && this->serverSpecs_ == nullptr && this->states_ == nullptr && this->tags_ == nullptr; };
    // AICSpecs Field Functions 
    bool hasAICSpecs() const { return this->AICSpecs_ != nullptr;};
    void deleteAICSpecs() { this->AICSpecs_ = nullptr;};
    inline const vector<string> & getAICSpecs() const { DARABONBA_PTR_GET_CONST(AICSpecs_, vector<string>) };
    inline vector<string> getAICSpecs() { DARABONBA_PTR_GET(AICSpecs_, vector<string>) };
    inline DescribeARMServerInstancesRequest& setAICSpecs(const vector<string> & AICSpecs) { DARABONBA_PTR_SET_VALUE(AICSpecs_, AICSpecs) };
    inline DescribeARMServerInstancesRequest& setAICSpecs(vector<string> && AICSpecs) { DARABONBA_PTR_SET_RVALUE(AICSpecs_, AICSpecs) };


    // describeAICInstances Field Functions 
    bool hasDescribeAICInstances() const { return this->describeAICInstances_ != nullptr;};
    void deleteDescribeAICInstances() { this->describeAICInstances_ = nullptr;};
    inline bool getDescribeAICInstances() const { DARABONBA_PTR_GET_DEFAULT(describeAICInstances_, false) };
    inline DescribeARMServerInstancesRequest& setDescribeAICInstances(bool describeAICInstances) { DARABONBA_PTR_SET_VALUE(describeAICInstances_, describeAICInstances) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeARMServerInstancesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeARMServerInstancesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string getMaxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline DescribeARMServerInstancesRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string getMinDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline DescribeARMServerInstancesRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeARMServerInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeARMServerInstancesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string getOrderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeARMServerInstancesRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeARMServerInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeARMServerInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serverIds Field Functions 
    bool hasServerIds() const { return this->serverIds_ != nullptr;};
    void deleteServerIds() { this->serverIds_ = nullptr;};
    inline const vector<string> & getServerIds() const { DARABONBA_PTR_GET_CONST(serverIds_, vector<string>) };
    inline vector<string> getServerIds() { DARABONBA_PTR_GET(serverIds_, vector<string>) };
    inline DescribeARMServerInstancesRequest& setServerIds(const vector<string> & serverIds) { DARABONBA_PTR_SET_VALUE(serverIds_, serverIds) };
    inline DescribeARMServerInstancesRequest& setServerIds(vector<string> && serverIds) { DARABONBA_PTR_SET_RVALUE(serverIds_, serverIds) };


    // serverSpecs Field Functions 
    bool hasServerSpecs() const { return this->serverSpecs_ != nullptr;};
    void deleteServerSpecs() { this->serverSpecs_ = nullptr;};
    inline const vector<string> & getServerSpecs() const { DARABONBA_PTR_GET_CONST(serverSpecs_, vector<string>) };
    inline vector<string> getServerSpecs() { DARABONBA_PTR_GET(serverSpecs_, vector<string>) };
    inline DescribeARMServerInstancesRequest& setServerSpecs(const vector<string> & serverSpecs) { DARABONBA_PTR_SET_VALUE(serverSpecs_, serverSpecs) };
    inline DescribeARMServerInstancesRequest& setServerSpecs(vector<string> && serverSpecs) { DARABONBA_PTR_SET_RVALUE(serverSpecs_, serverSpecs) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<string> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<string>) };
    inline vector<string> getStates() { DARABONBA_PTR_GET(states_, vector<string>) };
    inline DescribeARMServerInstancesRequest& setStates(const vector<string> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline DescribeARMServerInstancesRequest& setStates(vector<string> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeARMServerInstancesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeARMServerInstancesRequest::Tags>) };
    inline vector<DescribeARMServerInstancesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeARMServerInstancesRequest::Tags>) };
    inline DescribeARMServerInstancesRequest& setTags(const vector<DescribeARMServerInstancesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeARMServerInstancesRequest& setTags(vector<DescribeARMServerInstancesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The container specifications.
    shared_ptr<vector<string>> AICSpecs_ {};
    // Spcifies whether the result contains the container information. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> describeAICInstances_ {};
    // The IDs of the Edge Node Service (ENS) nodes.
    shared_ptr<vector<string>> ensRegionIds_ {};
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> maxDate_ {};
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    shared_ptr<string> minDate_ {};
    // The name of the server.
    shared_ptr<string> name_ {};
    // The namespace.
    shared_ptr<string> namespace_ {};
    // The sorting order of the results to return. Valid values: ServerIdSort, ServerNameSort, ExpireTimeSort, CreationTimeSort, and EnsRegionIdSort.
    // 
    // asc: ascending order. desc: descending order.
    shared_ptr<string> orderByParams_ {};
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **100**.
    // 
    // Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of the ARM servers.
    shared_ptr<vector<string>> serverIds_ {};
    // The server specifications.
    shared_ptr<vector<string>> serverSpecs_ {};
    // The operation statuses.
    shared_ptr<vector<string>> states_ {};
    shared_ptr<vector<DescribeARMServerInstancesRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
