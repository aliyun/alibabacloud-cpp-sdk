// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FetchTags, fetchTags_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FetchTags, fetchTags_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    DescribeSecretRequest() = default ;
    DescribeSecretRequest(const DescribeSecretRequest &) = default ;
    DescribeSecretRequest(DescribeSecretRequest &&) = default ;
    DescribeSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretRequest() = default ;
    DescribeSecretRequest& operator=(const DescribeSecretRequest &) = default ;
    DescribeSecretRequest& operator=(DescribeSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fetchTags_ == nullptr
        && return this->secretName_ == nullptr; };
    // fetchTags Field Functions 
    bool hasFetchTags() const { return this->fetchTags_ != nullptr;};
    void deleteFetchTags() { this->fetchTags_ = nullptr;};
    inline string fetchTags() const { DARABONBA_PTR_GET_DEFAULT(fetchTags_, "") };
    inline DescribeSecretRequest& setFetchTags(string fetchTags) { DARABONBA_PTR_SET_VALUE(fetchTags_, fetchTags) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DescribeSecretRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Specifies whether to return the resource tags of the secret. Valid values:
    // 
    // *   true: The resource tags are returned.
    // *   false: The resource tags are not returned. This is the default value.
    std::shared_ptr<string> fetchTags_ = nullptr;
    // The name of the secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
