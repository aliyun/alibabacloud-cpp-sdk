// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNamespacesResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListNamespacesResponseBodyDataResults() = default ;
    ListNamespacesResponseBodyDataResults(const ListNamespacesResponseBodyDataResults &) = default ;
    ListNamespacesResponseBodyDataResults(ListNamespacesResponseBodyDataResults &&) = default ;
    ListNamespacesResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBodyDataResults() = default ;
    ListNamespacesResponseBodyDataResults& operator=(const ListNamespacesResponseBodyDataResults &) = default ;
    ListNamespacesResponseBodyDataResults& operator=(ListNamespacesResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCount_ == nullptr
        && return this->createTime_ == nullptr && return this->describe_ == nullptr && return this->instanceCount_ == nullptr && return this->namespace_ == nullptr && return this->region_ == nullptr
        && return this->updateTime_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr; };
    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int32_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
    inline ListNamespacesResponseBodyDataResults& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNamespacesResponseBodyDataResults& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline ListNamespacesResponseBodyDataResults& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ListNamespacesResponseBodyDataResults& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListNamespacesResponseBodyDataResults& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListNamespacesResponseBodyDataResults& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListNamespacesResponseBodyDataResults& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListNamespacesResponseBodyDataResults& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListNamespacesResponseBodyDataResults& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int32_t> appCount_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> describe_ = nullptr;
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
