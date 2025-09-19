// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLPARTITIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_DLPARTITIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DLStorageDescriptor.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLPartitionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLPartitionInput& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(StorageDescriptor, storageDescriptor_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DLPartitionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(StorageDescriptor, storageDescriptor_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DLPartitionInput() = default ;
    DLPartitionInput(const DLPartitionInput &) = default ;
    DLPartitionInput(DLPartitionInput &&) = default ;
    DLPartitionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLPartitionInput() = default ;
    DLPartitionInput& operator=(const DLPartitionInput &) = default ;
    DLPartitionInput& operator=(DLPartitionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->lastAccessTime_ != nullptr && this->parameters_ != nullptr && this->storageDescriptor_ != nullptr && this->values_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline DLPartitionInput& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int32_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0) };
    inline DLPartitionInput& setLastAccessTime(int32_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline DLPartitionInput& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DLPartitionInput& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // storageDescriptor Field Functions 
    bool hasStorageDescriptor() const { return this->storageDescriptor_ != nullptr;};
    void deleteStorageDescriptor() { this->storageDescriptor_ = nullptr;};
    inline const DLStorageDescriptor & storageDescriptor() const { DARABONBA_PTR_GET_CONST(storageDescriptor_, DLStorageDescriptor) };
    inline DLStorageDescriptor storageDescriptor() { DARABONBA_PTR_GET(storageDescriptor_, DLStorageDescriptor) };
    inline DLPartitionInput& setStorageDescriptor(const DLStorageDescriptor & storageDescriptor) { DARABONBA_PTR_SET_VALUE(storageDescriptor_, storageDescriptor) };
    inline DLPartitionInput& setStorageDescriptor(DLStorageDescriptor && storageDescriptor) { DARABONBA_PTR_SET_RVALUE(storageDescriptor_, storageDescriptor) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DLPartitionInput& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DLPartitionInput& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<int32_t> lastAccessTime_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<DLStorageDescriptor> storageDescriptor_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
