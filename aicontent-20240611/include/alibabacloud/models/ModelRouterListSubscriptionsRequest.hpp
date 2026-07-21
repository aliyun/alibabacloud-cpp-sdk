// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERLISTSUBSCRIPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERLISTSUBSCRIPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterListSubscriptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterListSubscriptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterListSubscriptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ModelRouterListSubscriptionsRequest() = default ;
    ModelRouterListSubscriptionsRequest(const ModelRouterListSubscriptionsRequest &) = default ;
    ModelRouterListSubscriptionsRequest(ModelRouterListSubscriptionsRequest &&) = default ;
    ModelRouterListSubscriptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterListSubscriptionsRequest() = default ;
    ModelRouterListSubscriptionsRequest& operator=(const ModelRouterListSubscriptionsRequest &) = default ;
    ModelRouterListSubscriptionsRequest& operator=(ModelRouterListSubscriptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->status_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterListSubscriptionsRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterListSubscriptionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterListSubscriptionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelRouterListSubscriptionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> balanceType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
