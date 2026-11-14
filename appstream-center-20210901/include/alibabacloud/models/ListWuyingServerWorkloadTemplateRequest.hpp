// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERWORKLOADTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERWORKLOADTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerWorkloadTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerWorkloadTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(VirtualNodePoolId, virtualNodePoolId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerWorkloadTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(VirtualNodePoolId, virtualNodePoolId_);
    };
    ListWuyingServerWorkloadTemplateRequest() = default ;
    ListWuyingServerWorkloadTemplateRequest(const ListWuyingServerWorkloadTemplateRequest &) = default ;
    ListWuyingServerWorkloadTemplateRequest(ListWuyingServerWorkloadTemplateRequest &&) = default ;
    ListWuyingServerWorkloadTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerWorkloadTemplateRequest() = default ;
    ListWuyingServerWorkloadTemplateRequest& operator=(const ListWuyingServerWorkloadTemplateRequest &) = default ;
    ListWuyingServerWorkloadTemplateRequest& operator=(ListWuyingServerWorkloadTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->virtualNodePoolId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWuyingServerWorkloadTemplateRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWuyingServerWorkloadTemplateRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // virtualNodePoolId Field Functions 
    bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
    void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
    inline string getVirtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
    inline ListWuyingServerWorkloadTemplateRequest& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


  protected:
    // The compatibility field. The current version does not read this parameter. This operation returns a fixed maximum of the first 100 templates.
    shared_ptr<int32_t> maxResults_ {};
    // The compatibility field. The current version does not read this parameter and does not support token-based pagination.
    shared_ptr<string> nextToken_ {};
    // The ID of the virtual node pool. This parameter is **required**. The node pool must belong to the current account. You can call [ListWuyingServer](~~ListWuyingServer~~) to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> virtualNodePoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
