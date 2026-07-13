// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdListJsonString, instanceIdListJsonString_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NluServiceTypeListJsonString, nluServiceTypeListJsonString_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdListJsonString, instanceIdListJsonString_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NluServiceTypeListJsonString, nluServiceTypeListJsonString_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnionInstanceId, unionInstanceId_);
      DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdListJsonString_ == nullptr
        && this->name_ == nullptr && this->nluServiceTypeListJsonString_ == nullptr && this->number_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->status_ == nullptr && this->unionInstanceId_ == nullptr && this->unionSource_ == nullptr; };
    // instanceIdListJsonString Field Functions 
    bool hasInstanceIdListJsonString() const { return this->instanceIdListJsonString_ != nullptr;};
    void deleteInstanceIdListJsonString() { this->instanceIdListJsonString_ = nullptr;};
    inline string getInstanceIdListJsonString() const { DARABONBA_PTR_GET_DEFAULT(instanceIdListJsonString_, "") };
    inline ListInstancesRequest& setInstanceIdListJsonString(string instanceIdListJsonString) { DARABONBA_PTR_SET_VALUE(instanceIdListJsonString_, instanceIdListJsonString) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nluServiceTypeListJsonString Field Functions 
    bool hasNluServiceTypeListJsonString() const { return this->nluServiceTypeListJsonString_ != nullptr;};
    void deleteNluServiceTypeListJsonString() { this->nluServiceTypeListJsonString_ = nullptr;};
    inline string getNluServiceTypeListJsonString() const { DARABONBA_PTR_GET_DEFAULT(nluServiceTypeListJsonString_, "") };
    inline ListInstancesRequest& setNluServiceTypeListJsonString(string nluServiceTypeListJsonString) { DARABONBA_PTR_SET_VALUE(nluServiceTypeListJsonString_, nluServiceTypeListJsonString) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListInstancesRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unionInstanceId Field Functions 
    bool hasUnionInstanceId() const { return this->unionInstanceId_ != nullptr;};
    void deleteUnionInstanceId() { this->unionInstanceId_ = nullptr;};
    inline string getUnionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unionInstanceId_, "") };
    inline ListInstancesRequest& setUnionInstanceId(string unionInstanceId) { DARABONBA_PTR_SET_VALUE(unionInstanceId_, unionInstanceId) };


    // unionSource Field Functions 
    bool hasUnionSource() const { return this->unionSource_ != nullptr;};
    void deleteUnionSource() { this->unionSource_ = nullptr;};
    inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
    inline ListInstancesRequest& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


  protected:
    // The list of digital employee scenario IDs.
    shared_ptr<string> instanceIdListJsonString_ {};
    // The scenario name used as a filter condition.
    shared_ptr<string> name_ {};
    // The NLU type used to filter by dialog capability source. If this parameter is not specified, all types are selected.
    // 
    //  * MANAGED: managed (deprecated).
    // 
    //  * AUTHORIZED: authorized. In the public cloud, this refers to Chatbot service.
    // 
    //  * PROVIDED: private. Configured by specifying the AccessKey ID, AccessKey Secret, and chatEndpoint in the O&M console.
    // * CCC_AUTHORIZED: uses a Chatbot authorized by Cloud Call Center.
    // 
    // * CCC_FUNCTION: uses Alibaba Cloud Function Compute.
    // 
    // * SSE_FUNCTION: uses a streaming function service. Function Compute that supports SSE, used to connect to third-party large language model chatbots.
    // 
    // 
    // * PROMPTS: connects to Qwen foundation models.
    // 
    // * LOCAL: private cloud, local Chatbot.
    shared_ptr<string> nluServiceTypeListJsonString_ {};
    // The inbound number used as a filter condition.
    shared_ptr<string> number_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The scenario status used as a filter condition. If this parameter is not specified, all statuses are selected.
    // * DISABLED: offline.
    // * PUBLISHED: published.
    shared_ptr<string> status_ {};
    // The instance ID.
    // 
    // > When UnionSource is set to CCC, set UnionInstanceId to the instance ID of Cloud Call Center.
    shared_ptr<string> unionInstanceId_ {};
    // The source.
    // * CCC: Cloud Call Center.
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
