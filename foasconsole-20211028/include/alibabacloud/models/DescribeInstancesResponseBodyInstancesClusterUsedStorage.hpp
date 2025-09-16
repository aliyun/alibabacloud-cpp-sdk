// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERUSEDSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERUSEDSTORAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterUsedStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterUsedStorage& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(UsedStorage, usedStorage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterUsedStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(UsedStorage, usedStorage_);
    };
    DescribeInstancesResponseBodyInstancesClusterUsedStorage() = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedStorage(const DescribeInstancesResponseBodyInstancesClusterUsedStorage &) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedStorage(DescribeInstancesResponseBodyInstancesClusterUsedStorage &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterUsedStorage() = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedStorage& operator=(const DescribeInstancesResponseBodyInstancesClusterUsedStorage &) = default ;
    DescribeInstancesResponseBodyInstancesClusterUsedStorage& operator=(DescribeInstancesResponseBodyInstancesClusterUsedStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->usedStorage_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterUsedStorage& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // usedStorage Field Functions 
    bool hasUsedStorage() const { return this->usedStorage_ != nullptr;};
    void deleteUsedStorage() { this->usedStorage_ = nullptr;};
    inline float usedStorage() const { DARABONBA_PTR_GET_DEFAULT(usedStorage_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesClusterUsedStorage& setUsedStorage(float usedStorage) { DARABONBA_PTR_SET_VALUE(usedStorage_, usedStorage) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<float> usedStorage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
