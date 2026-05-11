// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListChatbotInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatbotInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_TO_JSON(NluServiceType, nluServiceType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatbotInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_FROM_JSON(NluServiceType, nluServiceType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
    };
    ListChatbotInstancesRequest() = default ;
    ListChatbotInstancesRequest(const ListChatbotInstancesRequest &) = default ;
    ListChatbotInstancesRequest(ListChatbotInstancesRequest &&) = default ;
    ListChatbotInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatbotInstancesRequest() = default ;
    ListChatbotInstancesRequest& operator=(const ListChatbotInstancesRequest &) = default ;
    ListChatbotInstancesRequest& operator=(ListChatbotInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nluServiceParamsJson_ == nullptr && this->nluServiceType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->unionSource_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChatbotInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nluServiceParamsJson Field Functions 
    bool hasNluServiceParamsJson() const { return this->nluServiceParamsJson_ != nullptr;};
    void deleteNluServiceParamsJson() { this->nluServiceParamsJson_ = nullptr;};
    inline string getNluServiceParamsJson() const { DARABONBA_PTR_GET_DEFAULT(nluServiceParamsJson_, "") };
    inline ListChatbotInstancesRequest& setNluServiceParamsJson(string nluServiceParamsJson) { DARABONBA_PTR_SET_VALUE(nluServiceParamsJson_, nluServiceParamsJson) };


    // nluServiceType Field Functions 
    bool hasNluServiceType() const { return this->nluServiceType_ != nullptr;};
    void deleteNluServiceType() { this->nluServiceType_ = nullptr;};
    inline string getNluServiceType() const { DARABONBA_PTR_GET_DEFAULT(nluServiceType_, "") };
    inline ListChatbotInstancesRequest& setNluServiceType(string nluServiceType) { DARABONBA_PTR_SET_VALUE(nluServiceType_, nluServiceType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListChatbotInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChatbotInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // unionSource Field Functions 
    bool hasUnionSource() const { return this->unionSource_ != nullptr;};
    void deleteUnionSource() { this->unionSource_ = nullptr;};
    inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
    inline ListChatbotInstancesRequest& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nluServiceParamsJson_ {};
    shared_ptr<string> nluServiceType_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
