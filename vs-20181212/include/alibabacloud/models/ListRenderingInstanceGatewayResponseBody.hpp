// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos.hpp>
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
    virtual bool empty() const override { return this->gatewayConfigurationInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // gatewayConfigurationInfos Field Functions 
    bool hasGatewayConfigurationInfos() const { return this->gatewayConfigurationInfos_ != nullptr;};
    void deleteGatewayConfigurationInfos() { this->gatewayConfigurationInfos_ = nullptr;};
    inline const vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos> & gatewayConfigurationInfos() const { DARABONBA_PTR_GET_CONST(gatewayConfigurationInfos_, vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos>) };
    inline vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos> gatewayConfigurationInfos() { DARABONBA_PTR_GET(gatewayConfigurationInfos_, vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos>) };
    inline ListRenderingInstanceGatewayResponseBody& setGatewayConfigurationInfos(const vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos> & gatewayConfigurationInfos) { DARABONBA_PTR_SET_VALUE(gatewayConfigurationInfos_, gatewayConfigurationInfos) };
    inline ListRenderingInstanceGatewayResponseBody& setGatewayConfigurationInfos(vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos> && gatewayConfigurationInfos) { DARABONBA_PTR_SET_RVALUE(gatewayConfigurationInfos_, gatewayConfigurationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRenderingInstanceGatewayResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos>> gatewayConfigurationInfos_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
