// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AICSpecs, AICSpecsShrink_);
      DARABONBA_PTR_TO_JSON(DescribeAICInstances, describeAICInstances_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIdsShrink_);
      DARABONBA_PTR_TO_JSON(ServerSpecs, serverSpecsShrink_);
      DARABONBA_PTR_TO_JSON(States, statesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AICSpecs, AICSpecsShrink_);
      DARABONBA_PTR_FROM_JSON(DescribeAICInstances, describeAICInstances_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ServerSpecs, serverSpecsShrink_);
      DARABONBA_PTR_FROM_JSON(States, statesShrink_);
    };
    DescribeARMServerInstancesShrinkRequest() = default ;
    DescribeARMServerInstancesShrinkRequest(const DescribeARMServerInstancesShrinkRequest &) = default ;
    DescribeARMServerInstancesShrinkRequest(DescribeARMServerInstancesShrinkRequest &&) = default ;
    DescribeARMServerInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesShrinkRequest() = default ;
    DescribeARMServerInstancesShrinkRequest& operator=(const DescribeARMServerInstancesShrinkRequest &) = default ;
    DescribeARMServerInstancesShrinkRequest& operator=(DescribeARMServerInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AICSpecsShrink_ != nullptr
        && this->describeAICInstances_ != nullptr && this->ensRegionIdsShrink_ != nullptr && this->maxDate_ != nullptr && this->minDate_ != nullptr && this->name_ != nullptr
        && this->namespace_ != nullptr && this->orderByParams_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->serverIdsShrink_ != nullptr
        && this->serverSpecsShrink_ != nullptr && this->statesShrink_ != nullptr; };
    // AICSpecsShrink Field Functions 
    bool hasAICSpecsShrink() const { return this->AICSpecsShrink_ != nullptr;};
    void deleteAICSpecsShrink() { this->AICSpecsShrink_ = nullptr;};
    inline string AICSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(AICSpecsShrink_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setAICSpecsShrink(string AICSpecsShrink) { DARABONBA_PTR_SET_VALUE(AICSpecsShrink_, AICSpecsShrink) };


    // describeAICInstances Field Functions 
    bool hasDescribeAICInstances() const { return this->describeAICInstances_ != nullptr;};
    void deleteDescribeAICInstances() { this->describeAICInstances_ = nullptr;};
    inline bool describeAICInstances() const { DARABONBA_PTR_GET_DEFAULT(describeAICInstances_, false) };
    inline DescribeARMServerInstancesShrinkRequest& setDescribeAICInstances(bool describeAICInstances) { DARABONBA_PTR_SET_VALUE(describeAICInstances_, describeAICInstances) };


    // ensRegionIdsShrink Field Functions 
    bool hasEnsRegionIdsShrink() const { return this->ensRegionIdsShrink_ != nullptr;};
    void deleteEnsRegionIdsShrink() { this->ensRegionIdsShrink_ = nullptr;};
    inline string ensRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdsShrink_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setEnsRegionIdsShrink(string ensRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(ensRegionIdsShrink_, ensRegionIdsShrink) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string maxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string minDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string orderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeARMServerInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeARMServerInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serverIdsShrink Field Functions 
    bool hasServerIdsShrink() const { return this->serverIdsShrink_ != nullptr;};
    void deleteServerIdsShrink() { this->serverIdsShrink_ = nullptr;};
    inline string serverIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(serverIdsShrink_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setServerIdsShrink(string serverIdsShrink) { DARABONBA_PTR_SET_VALUE(serverIdsShrink_, serverIdsShrink) };


    // serverSpecsShrink Field Functions 
    bool hasServerSpecsShrink() const { return this->serverSpecsShrink_ != nullptr;};
    void deleteServerSpecsShrink() { this->serverSpecsShrink_ = nullptr;};
    inline string serverSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(serverSpecsShrink_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setServerSpecsShrink(string serverSpecsShrink) { DARABONBA_PTR_SET_VALUE(serverSpecsShrink_, serverSpecsShrink) };


    // statesShrink Field Functions 
    bool hasStatesShrink() const { return this->statesShrink_ != nullptr;};
    void deleteStatesShrink() { this->statesShrink_ = nullptr;};
    inline string statesShrink() const { DARABONBA_PTR_GET_DEFAULT(statesShrink_, "") };
    inline DescribeARMServerInstancesShrinkRequest& setStatesShrink(string statesShrink) { DARABONBA_PTR_SET_VALUE(statesShrink_, statesShrink) };


  protected:
    // The container specifications.
    std::shared_ptr<string> AICSpecsShrink_ = nullptr;
    // Spcifies whether the result contains the container information. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> describeAICInstances_ = nullptr;
    // The IDs of the Edge Node Service (ENS) nodes.
    std::shared_ptr<string> ensRegionIdsShrink_ = nullptr;
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> maxDate_ = nullptr;
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> minDate_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The sorting order of the results to return. Valid values: ServerIdSort, ServerNameSort, ExpireTimeSort, CreationTimeSort, and EnsRegionIdSort.
    // 
    // asc: ascending order. desc: descending order.
    std::shared_ptr<string> orderByParams_ = nullptr;
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **100**.
    // 
    // Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the ARM servers.
    std::shared_ptr<string> serverIdsShrink_ = nullptr;
    // The server specifications.
    std::shared_ptr<string> serverSpecsShrink_ = nullptr;
    // The operation statuses.
    std::shared_ptr<string> statesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
