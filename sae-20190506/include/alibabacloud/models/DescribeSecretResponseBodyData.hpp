// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecretResponseBodyDataRelateApps.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSecretResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_TO_JSON(SecretData, secretData_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_FROM_JSON(SecretData, secretData_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSecretResponseBodyData() = default ;
    DescribeSecretResponseBodyData(const DescribeSecretResponseBodyData &) = default ;
    DescribeSecretResponseBodyData(DescribeSecretResponseBodyData &&) = default ;
    DescribeSecretResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretResponseBodyData() = default ;
    DescribeSecretResponseBodyData& operator=(const DescribeSecretResponseBodyData &) = default ;
    DescribeSecretResponseBodyData& operator=(DescribeSecretResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->namespaceId_ != nullptr && this->relateApps_ != nullptr && this->secretData_ != nullptr && this->secretId_ != nullptr && this->secretName_ != nullptr
        && this->secretType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSecretResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeSecretResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // relateApps Field Functions 
    bool hasRelateApps() const { return this->relateApps_ != nullptr;};
    void deleteRelateApps() { this->relateApps_ = nullptr;};
    inline const vector<Models::DescribeSecretResponseBodyDataRelateApps> & relateApps() const { DARABONBA_PTR_GET_CONST(relateApps_, vector<Models::DescribeSecretResponseBodyDataRelateApps>) };
    inline vector<Models::DescribeSecretResponseBodyDataRelateApps> relateApps() { DARABONBA_PTR_GET(relateApps_, vector<Models::DescribeSecretResponseBodyDataRelateApps>) };
    inline DescribeSecretResponseBodyData& setRelateApps(const vector<Models::DescribeSecretResponseBodyDataRelateApps> & relateApps) { DARABONBA_PTR_SET_VALUE(relateApps_, relateApps) };
    inline DescribeSecretResponseBodyData& setRelateApps(vector<Models::DescribeSecretResponseBodyDataRelateApps> && relateApps) { DARABONBA_PTR_SET_RVALUE(relateApps_, relateApps) };


    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline const map<string, string> & secretData() const { DARABONBA_PTR_GET_CONST(secretData_, map<string, string>) };
    inline map<string, string> secretData() { DARABONBA_PTR_GET(secretData_, map<string, string>) };
    inline DescribeSecretResponseBodyData& setSecretData(const map<string, string> & secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };
    inline DescribeSecretResponseBodyData& setSecretData(map<string, string> && secretData) { DARABONBA_PTR_SET_RVALUE(secretData_, secretData) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline DescribeSecretResponseBodyData& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DescribeSecretResponseBodyData& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline DescribeSecretResponseBodyData& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeSecretResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The associated application.
    std::shared_ptr<vector<Models::DescribeSecretResponseBodyDataRelateApps>> relateApps_ = nullptr;
    // Secret key-value pair data.
    std::shared_ptr<map<string, string>> secretData_ = nullptr;
    // The ID of the Secret instance.
    std::shared_ptr<int64_t> secretId_ = nullptr;
    // The name of the Secret instance.
    std::shared_ptr<string> secretName_ = nullptr;
    // The type of the Secret instance.
    std::shared_ptr<string> secretType_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
