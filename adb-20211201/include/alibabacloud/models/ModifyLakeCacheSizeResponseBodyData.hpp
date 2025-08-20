// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyLakeCacheSizeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLakeCacheSizeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLakeCacheSizeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    ModifyLakeCacheSizeResponseBodyData() = default ;
    ModifyLakeCacheSizeResponseBodyData(const ModifyLakeCacheSizeResponseBodyData &) = default ;
    ModifyLakeCacheSizeResponseBodyData(ModifyLakeCacheSizeResponseBodyData &&) = default ;
    ModifyLakeCacheSizeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLakeCacheSizeResponseBodyData() = default ;
    ModifyLakeCacheSizeResponseBodyData& operator=(const ModifyLakeCacheSizeResponseBodyData &) = default ;
    ModifyLakeCacheSizeResponseBodyData& operator=(ModifyLakeCacheSizeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->dataSize_ != nullptr && this->instances_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline ModifyLakeCacheSizeResponseBodyData& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline ModifyLakeCacheSizeResponseBodyData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline ModifyLakeCacheSizeResponseBodyData& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyLakeCacheSizeResponseBodyData& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The size of the lake cache space. Unit: GB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The size of the data that occupies the lake cache space. Unit: GB.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The clusters that share the lake cache space.
    std::shared_ptr<vector<string>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
