// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWILDCARDBYTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWILDCARDBYTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryWildcardByTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWildcardByTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirstTopic, firstTopic_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWildcardByTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstTopic, firstTopic_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryWildcardByTopicRequest() = default ;
    QueryWildcardByTopicRequest(const QueryWildcardByTopicRequest &) = default ;
    QueryWildcardByTopicRequest(QueryWildcardByTopicRequest &&) = default ;
    QueryWildcardByTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWildcardByTopicRequest() = default ;
    QueryWildcardByTopicRequest& operator=(const QueryWildcardByTopicRequest &) = default ;
    QueryWildcardByTopicRequest& operator=(QueryWildcardByTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstTopic_ == nullptr
        && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // firstTopic Field Functions 
    bool hasFirstTopic() const { return this->firstTopic_ != nullptr;};
    void deleteFirstTopic() { this->firstTopic_ = nullptr;};
    inline string getFirstTopic() const { DARABONBA_PTR_GET_DEFAULT(firstTopic_, "") };
    inline QueryWildcardByTopicRequest& setFirstTopic(string firstTopic) { DARABONBA_PTR_SET_VALUE(firstTopic_, firstTopic) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryWildcardByTopicRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryWildcardByTopicRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryWildcardByTopicRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The parent topic.
    // 
    // This parameter is required.
    shared_ptr<string> firstTopic_ {};
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number of the results to return. Pages start from page 1.
    shared_ptr<int32_t> pageNo_ {};
    // The maximum number of records to display per page.
    // 
    // Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
