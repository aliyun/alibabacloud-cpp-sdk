// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDSTSAK2RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BUILDSTSAK2RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class BuildStsAK2ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildStsAK2ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, BuildStsAK2ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    BuildStsAK2ResponseBodyData() = default ;
    BuildStsAK2ResponseBodyData(const BuildStsAK2ResponseBodyData &) = default ;
    BuildStsAK2ResponseBodyData(BuildStsAK2ResponseBodyData &&) = default ;
    BuildStsAK2ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildStsAK2ResponseBodyData() = default ;
    BuildStsAK2ResponseBodyData& operator=(const BuildStsAK2ResponseBodyData &) = default ;
    BuildStsAK2ResponseBodyData& operator=(BuildStsAK2ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->endpoint_ != nullptr && this->id_ != nullptr && this->path_ != nullptr && this->secret_ != nullptr && this->token_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline BuildStsAK2ResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline BuildStsAK2ResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BuildStsAK2ResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline BuildStsAK2ResponseBodyData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline BuildStsAK2ResponseBodyData& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline BuildStsAK2ResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
