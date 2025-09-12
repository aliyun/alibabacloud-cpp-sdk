// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDSTSAKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETYZDSTSAKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdStsAKResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdStsAKResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(internalKnowledgeId, internalKnowledgeId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdStsAKResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(internalKnowledgeId, internalKnowledgeId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    GetYzdStsAKResponseBodyData() = default ;
    GetYzdStsAKResponseBodyData(const GetYzdStsAKResponseBodyData &) = default ;
    GetYzdStsAKResponseBodyData(GetYzdStsAKResponseBodyData &&) = default ;
    GetYzdStsAKResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdStsAKResponseBodyData() = default ;
    GetYzdStsAKResponseBodyData& operator=(const GetYzdStsAKResponseBodyData &) = default ;
    GetYzdStsAKResponseBodyData& operator=(GetYzdStsAKResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bucket_ != nullptr && this->endpoint_ != nullptr && this->id_ != nullptr && this->internalKnowledgeId_ != nullptr && this->path_ != nullptr
        && this->secret_ != nullptr && this->token_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetYzdStsAKResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetYzdStsAKResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetYzdStsAKResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetYzdStsAKResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // internalKnowledgeId Field Functions 
    bool hasInternalKnowledgeId() const { return this->internalKnowledgeId_ != nullptr;};
    void deleteInternalKnowledgeId() { this->internalKnowledgeId_ = nullptr;};
    inline string internalKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(internalKnowledgeId_, "") };
    inline GetYzdStsAKResponseBodyData& setInternalKnowledgeId(string internalKnowledgeId) { DARABONBA_PTR_SET_VALUE(internalKnowledgeId_, internalKnowledgeId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetYzdStsAKResponseBodyData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline GetYzdStsAKResponseBodyData& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetYzdStsAKResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> internalKnowledgeId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
