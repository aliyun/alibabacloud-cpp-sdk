// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstanceGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstanceGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayConfigurationInfos, gatewayConfigurationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstanceGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayConfigurationInfos, gatewayConfigurationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingInstanceGatewayResponseBody() = default ;
    ListRenderingInstanceGatewayResponseBody(const ListRenderingInstanceGatewayResponseBody &) = default ;
    ListRenderingInstanceGatewayResponseBody(ListRenderingInstanceGatewayResponseBody &&) = default ;
    ListRenderingInstanceGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstanceGatewayResponseBody() = default ;
    ListRenderingInstanceGatewayResponseBody& operator=(const ListRenderingInstanceGatewayResponseBody &) = default ;
    ListRenderingInstanceGatewayResponseBody& operator=(ListRenderingInstanceGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GatewayConfigurationInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GatewayConfigurationInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(GatewayInstanceId, gatewayInstanceId_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, GatewayConfigurationInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(GatewayInstanceId, gatewayInstanceId_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      GatewayConfigurationInfos() = default ;
      GatewayConfigurationInfos(const GatewayConfigurationInfos &) = default ;
      GatewayConfigurationInfos(GatewayConfigurationInfos &&) = default ;
      GatewayConfigurationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GatewayConfigurationInfos() = default ;
      GatewayConfigurationInfos& operator=(const GatewayConfigurationInfos &) = default ;
      GatewayConfigurationInfos& operator=(GatewayConfigurationInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->gatewayInstanceId_ == nullptr && this->renderingInstanceId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline GatewayConfigurationInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // gatewayInstanceId Field Functions 
      bool hasGatewayInstanceId() const { return this->gatewayInstanceId_ != nullptr;};
      void deleteGatewayInstanceId() { this->gatewayInstanceId_ = nullptr;};
      inline string getGatewayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayInstanceId_, "") };
      inline GatewayConfigurationInfos& setGatewayInstanceId(string gatewayInstanceId) { DARABONBA_PTR_SET_VALUE(gatewayInstanceId_, gatewayInstanceId) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline GatewayConfigurationInfos& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GatewayConfigurationInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline GatewayConfigurationInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> gatewayInstanceId_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->gatewayConfigurationInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // gatewayConfigurationInfos Field Functions 
    bool hasGatewayConfigurationInfos() const { return this->gatewayConfigurationInfos_ != nullptr;};
    void deleteGatewayConfigurationInfos() { this->gatewayConfigurationInfos_ = nullptr;};
    inline const vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos> & getGatewayConfigurationInfos() const { DARABONBA_PTR_GET_CONST(gatewayConfigurationInfos_, vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos>) };
    inline vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos> getGatewayConfigurationInfos() { DARABONBA_PTR_GET(gatewayConfigurationInfos_, vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos>) };
    inline ListRenderingInstanceGatewayResponseBody& setGatewayConfigurationInfos(const vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos> & gatewayConfigurationInfos) { DARABONBA_PTR_SET_VALUE(gatewayConfigurationInfos_, gatewayConfigurationInfos) };
    inline ListRenderingInstanceGatewayResponseBody& setGatewayConfigurationInfos(vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos> && gatewayConfigurationInfos) { DARABONBA_PTR_SET_RVALUE(gatewayConfigurationInfos_, gatewayConfigurationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRenderingInstanceGatewayResponseBody::GatewayConfigurationInfos>> gatewayConfigurationInfos_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
