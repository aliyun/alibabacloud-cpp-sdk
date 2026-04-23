// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYCLIENTTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYCLIENTTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryClientTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryClientTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryClientTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ModelRouterQueryClientTreeRequest() = default ;
    ModelRouterQueryClientTreeRequest(const ModelRouterQueryClientTreeRequest &) = default ;
    ModelRouterQueryClientTreeRequest(ModelRouterQueryClientTreeRequest &&) = default ;
    ModelRouterQueryClientTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryClientTreeRequest() = default ;
    ModelRouterQueryClientTreeRequest& operator=(const ModelRouterQueryClientTreeRequest &) = default ;
    ModelRouterQueryClientTreeRequest& operator=(ModelRouterQueryClientTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryClientTreeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryClientTreeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
