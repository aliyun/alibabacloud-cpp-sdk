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
    // A JSON-formatted string that contains a list of digital worker instance IDs.
    shared_ptr<string> instanceIdListJsonString_ {};
    // The instance name. This parameter is used for filtering.
    shared_ptr<string> name_ {};
    // The NLU service type. This parameter is used to filter instances by the source of their conversational AI capabilities. If you do not set this parameter, instances of all types are returned.
    // 
    // - `MANAGED`: managed. This value is deprecated.
    // 
    // - `AUTHORIZED`: authorized. In the public cloud, this indicates the Chatbot service.
    // 
    // - `PROVIDED`: private. This service is configured in the console with parameters such as `as`, `sk`, and `chatEndpoint`.
    // 
    // - `CCC_AUTHORIZED`: a chatbot authorized by Cloud Connect Center (CCC).
    // 
    // - `CCC_FUNCTION`: Alibaba Cloud Function Compute.
    // 
    // - `SSE_FUNCTION`: a streaming function service. This refers to a Function Compute instance that supports Server-Sent Events (SSE) for integration with third-party large language model (LLM) chatbots.
    // 
    // - `PROMPTS`: integration with foundational models such as Qwen.
    // 
    // - `LOCAL`: a private cloud instance of Chatbot.
    shared_ptr<string> nluServiceTypeListJsonString_ {};
    // The inbound number. This parameter is used for filtering.
    shared_ptr<string> number_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The instance status. This parameter is used for filtering. If you do not set this parameter, instances in all statuses are returned.
    // 
    // - `DISABLED`: disabled
    // 
    // - `PUBLISHED`: published
    shared_ptr<string> status_ {};
    // The instance ID.
    // 
    // > If you set `UnionSource` to `CCC`, set this parameter to the ID of your CCC instance.
    shared_ptr<string> unionInstanceId_ {};
    // The source.
    // 
    // - `CCC`: Cloud Connect Center
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
