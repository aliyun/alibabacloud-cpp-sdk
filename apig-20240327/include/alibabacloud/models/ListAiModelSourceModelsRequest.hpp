// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIMODELSOURCEMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIMODELSOURCEMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListAiModelSourceModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiModelSourceModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiModelSourceModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListAiModelSourceModelsRequest() = default ;
    ListAiModelSourceModelsRequest(const ListAiModelSourceModelsRequest &) = default ;
    ListAiModelSourceModelsRequest(ListAiModelSourceModelsRequest &&) = default ;
    ListAiModelSourceModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiModelSourceModelsRequest() = default ;
    ListAiModelSourceModelsRequest& operator=(const ListAiModelSourceModelsRequest &) = default ;
    ListAiModelSourceModelsRequest& operator=(ListAiModelSourceModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->modelSourceId_ == nullptr && this->nextToken_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListAiModelSourceModelsRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAiModelSourceModelsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAiModelSourceModelsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelSourceId Field Functions 
    bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
    void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
    inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
    inline ListAiModelSourceModelsRequest& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAiModelSourceModelsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the AI gateway instance to which the resource belongs.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // The query keyword used to match resources by name or identifier.
    shared_ptr<string> keyword_ {};
    // The maximum number of results to return per page. Valid values: 1 to 100. This parameter is required. Token-based pagination does not use pageNumber or pageSize.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxResults_ {};
    // The ID of the model source. Use the modelSourceId returned by CreateAiModelSource.
    shared_ptr<string> modelSourceId_ {};
    // The pagination token returned from the previous page. Omit this parameter for the first page. For the last page, this parameter is empty or omitted.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
