// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAgentResponseBody() = default ;
    ListAgentResponseBody(const ListAgentResponseBody &) = default ;
    ListAgentResponseBody(ListAgentResponseBody &&) = default ;
    ListAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentResponseBody() = default ;
    ListAgentResponseBody& operator=(const ListAgentResponseBody &) = default ;
    ListAgentResponseBody& operator=(ListAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_ANY_TO_JSON(InstanceInfos, instanceInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_ANY_FROM_JSON(InstanceInfos, instanceInfos_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->agentName_ == nullptr && this->instanceInfos_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Data& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentKey Field Functions 
      bool hasAgentKey() const { return this->agentKey_ != nullptr;};
      void deleteAgentKey() { this->agentKey_ = nullptr;};
      inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
      inline Data& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // instanceInfos Field Functions 
      bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
      void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
      inline       const Darabonba::Json & getInstanceInfos() const { DARABONBA_GET(instanceInfos_) };
      Darabonba::Json & getInstanceInfos() { DARABONBA_GET(instanceInfos_) };
      inline Data& setInstanceInfos(const Darabonba::Json & instanceInfos) { DARABONBA_SET_VALUE(instanceInfos_, instanceInfos) };
      inline Data& setInstanceInfos(Darabonba::Json && instanceInfos) { DARABONBA_SET_RVALUE(instanceInfos_, instanceInfos) };


    protected:
      // The business space ID.
      shared_ptr<int64_t> agentId_ {};
      // The business space signature, used to identify the business space in Platform-as-a-Service (PaaS) API calls.
      shared_ptr<string> agentKey_ {};
      // The name of the business space.
      shared_ptr<string> agentName_ {};
      // Details of the associated commodity instance. The object keys are commodity codes.
      Darabonba::Json instanceInfos_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentResponseBody::Data>) };
    inline vector<ListAgentResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentResponseBody::Data>) };
    inline ListAgentResponseBody& setData(const vector<ListAgentResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentResponseBody& setData(vector<ListAgentResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAgentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of business spaces.
    shared_ptr<vector<ListAgentResponseBody::Data>> data_ {};
    // The page number of the returned results.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total count of business spaces that match the query.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
