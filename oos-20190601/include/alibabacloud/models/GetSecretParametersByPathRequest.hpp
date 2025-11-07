// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERSBYPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERSBYPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParametersByPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParametersByPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Recursive, recursive_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WithDecryption, withDecryption_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParametersByPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WithDecryption, withDecryption_);
    };
    GetSecretParametersByPathRequest() = default ;
    GetSecretParametersByPathRequest(const GetSecretParametersByPathRequest &) = default ;
    GetSecretParametersByPathRequest(GetSecretParametersByPathRequest &&) = default ;
    GetSecretParametersByPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParametersByPathRequest() = default ;
    GetSecretParametersByPathRequest& operator=(const GetSecretParametersByPathRequest &) = default ;
    GetSecretParametersByPathRequest& operator=(GetSecretParametersByPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->path_ == nullptr && return this->recursive_ == nullptr && return this->regionId_ == nullptr && return this->withDecryption_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetSecretParametersByPathRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetSecretParametersByPathRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetSecretParametersByPathRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // recursive Field Functions 
    bool hasRecursive() const { return this->recursive_ != nullptr;};
    void deleteRecursive() { this->recursive_ = nullptr;};
    inline bool recursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
    inline GetSecretParametersByPathRequest& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSecretParametersByPathRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // withDecryption Field Functions 
    bool hasWithDecryption() const { return this->withDecryption_ != nullptr;};
    void deleteWithDecryption() { this->withDecryption_ = nullptr;};
    inline bool withDecryption() const { DARABONBA_PTR_GET_DEFAULT(withDecryption_, false) };
    inline GetSecretParametersByPathRequest& setWithDecryption(bool withDecryption) { DARABONBA_PTR_SET_VALUE(withDecryption_, withDecryption) };


  protected:
    // The number of entries per page. Valid values: 1 to 10. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The path of the encryption parameter. The path must be 1 to 200 characters in length. For example, if the name of an encryption parameter is /secretParameter/mySecretParameter, the path of the encryption parameter is /secretParameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // Specifies whether to recursively query encryption parameters from all levels of directories in the specified path. Valid values: true and false. For example, if you want to query the /secretParameter/mySecretParameter and /secretParameter/secretParameter 1/mySecretParameter parameters, the valid values specify the parameters to be returned.
    // 
    // *   true: returns both of the /secretParameter/mySecretParameter and /secretParameter/secretParameter1/mySecretParameter parameters.
    // *   false: returns only the /secretParameter/mySecretParameter parameter.
    std::shared_ptr<bool> recursive_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to decrypt the parameter value. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> withDecryption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
