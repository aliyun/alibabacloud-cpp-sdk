// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfoModel, specInfoModel_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfoModel, specInfoModel_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSpecResponseBody() = default ;
    DescribeSpecResponseBody(const DescribeSpecResponseBody &) = default ;
    DescribeSpecResponseBody(DescribeSpecResponseBody &&) = default ;
    DescribeSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpecResponseBody() = default ;
    DescribeSpecResponseBody& operator=(const DescribeSpecResponseBody &) = default ;
    DescribeSpecResponseBody& operator=(DescribeSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecInfoModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecInfoModel& obj) { 
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(MaxPhoneCount, maxPhoneCount_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MinPhoneCount, minPhoneCount_);
        DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(SpecId, specId_);
        DARABONBA_PTR_TO_JSON(SpecStatus, specStatus_);
        DARABONBA_PTR_TO_JSON(SpecType, specType_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, SpecInfoModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(MaxPhoneCount, maxPhoneCount_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MinPhoneCount, minPhoneCount_);
        DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(SpecId, specId_);
        DARABONBA_PTR_FROM_JSON(SpecStatus, specStatus_);
        DARABONBA_PTR_FROM_JSON(SpecType, specType_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      SpecInfoModel() = default ;
      SpecInfoModel(const SpecInfoModel &) = default ;
      SpecInfoModel(SpecInfoModel &&) = default ;
      SpecInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpecInfoModel() = default ;
      SpecInfoModel& operator=(const SpecInfoModel &) = default ;
      SpecInfoModel& operator=(SpecInfoModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->core_ == nullptr
        && this->maxPhoneCount_ == nullptr && this->memory_ == nullptr && this->minPhoneCount_ == nullptr && this->phoneCount_ == nullptr && this->resolution_ == nullptr
        && this->specId_ == nullptr && this->specStatus_ == nullptr && this->specType_ == nullptr && this->systemDiskSize_ == nullptr; };
      // core Field Functions 
      bool hasCore() const { return this->core_ != nullptr;};
      void deleteCore() { this->core_ = nullptr;};
      inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
      inline SpecInfoModel& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


      // maxPhoneCount Field Functions 
      bool hasMaxPhoneCount() const { return this->maxPhoneCount_ != nullptr;};
      void deleteMaxPhoneCount() { this->maxPhoneCount_ = nullptr;};
      inline string getMaxPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(maxPhoneCount_, "") };
      inline SpecInfoModel& setMaxPhoneCount(string maxPhoneCount) { DARABONBA_PTR_SET_VALUE(maxPhoneCount_, maxPhoneCount) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline SpecInfoModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minPhoneCount Field Functions 
      bool hasMinPhoneCount() const { return this->minPhoneCount_ != nullptr;};
      void deleteMinPhoneCount() { this->minPhoneCount_ = nullptr;};
      inline string getMinPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(minPhoneCount_, "") };
      inline SpecInfoModel& setMinPhoneCount(string minPhoneCount) { DARABONBA_PTR_SET_VALUE(minPhoneCount_, minPhoneCount) };


      // phoneCount Field Functions 
      bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
      void deletePhoneCount() { this->phoneCount_ = nullptr;};
      inline string getPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, "") };
      inline SpecInfoModel& setPhoneCount(string phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline SpecInfoModel& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // specId Field Functions 
      bool hasSpecId() const { return this->specId_ != nullptr;};
      void deleteSpecId() { this->specId_ = nullptr;};
      inline string getSpecId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
      inline SpecInfoModel& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


      // specStatus Field Functions 
      bool hasSpecStatus() const { return this->specStatus_ != nullptr;};
      void deleteSpecStatus() { this->specStatus_ = nullptr;};
      inline string getSpecStatus() const { DARABONBA_PTR_GET_DEFAULT(specStatus_, "") };
      inline SpecInfoModel& setSpecStatus(string specStatus) { DARABONBA_PTR_SET_VALUE(specStatus_, specStatus) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline SpecInfoModel& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline SpecInfoModel& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // Number of CPU cores.
      shared_ptr<int32_t> core_ {};
      // The maximum number of cloud phone instances.
      shared_ptr<string> maxPhoneCount_ {};
      // Memory size.
      shared_ptr<int32_t> memory_ {};
      // The minimum number of cloud phone instances.
      shared_ptr<string> minPhoneCount_ {};
      shared_ptr<string> phoneCount_ {};
      shared_ptr<string> resolution_ {};
      // Specification ID.
      shared_ptr<string> specId_ {};
      // Specification status.
      shared_ptr<string> specStatus_ {};
      // Specification type.
      shared_ptr<string> specType_ {};
      // System disk size, in GB.
      shared_ptr<int32_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->specInfoModel_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSpecResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfoModel Field Functions 
    bool hasSpecInfoModel() const { return this->specInfoModel_ != nullptr;};
    void deleteSpecInfoModel() { this->specInfoModel_ = nullptr;};
    inline const vector<DescribeSpecResponseBody::SpecInfoModel> & getSpecInfoModel() const { DARABONBA_PTR_GET_CONST(specInfoModel_, vector<DescribeSpecResponseBody::SpecInfoModel>) };
    inline vector<DescribeSpecResponseBody::SpecInfoModel> getSpecInfoModel() { DARABONBA_PTR_GET(specInfoModel_, vector<DescribeSpecResponseBody::SpecInfoModel>) };
    inline DescribeSpecResponseBody& setSpecInfoModel(const vector<DescribeSpecResponseBody::SpecInfoModel> & specInfoModel) { DARABONBA_PTR_SET_VALUE(specInfoModel_, specInfoModel) };
    inline DescribeSpecResponseBody& setSpecInfoModel(vector<DescribeSpecResponseBody::SpecInfoModel> && specInfoModel) { DARABONBA_PTR_SET_RVALUE(specInfoModel_, specInfoModel) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSpecResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates the current read position returned by this call. An empty value means that all data has been read.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The specifications.
    shared_ptr<vector<DescribeSpecResponseBody::SpecInfoModel>> specInfoModel_ {};
    // Total number of items.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
