// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ModifyFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
      DARABONBA_PTR_TO_JSON(SpaceCapacity, spaceCapacity_);
      DARABONBA_PTR_TO_JSON(ThroughputMode, throughputMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedThroughputInMiBps, provisionedThroughputInMiBps_);
      DARABONBA_PTR_FROM_JSON(SpaceCapacity, spaceCapacity_);
      DARABONBA_PTR_FROM_JSON(ThroughputMode, throughputMode_);
    };
    ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest(ModifyFileSystemRequest &&) = default ;
    ModifyFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFileSystemRequest() = default ;
    ModifyFileSystemRequest& operator=(const ModifyFileSystemRequest &) = default ;
    ModifyFileSystemRequest& operator=(ModifyFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->fileSystemName_ == nullptr && return this->inputRegionId_ == nullptr && return this->provisionedThroughputInMiBps_ == nullptr && return this->spaceCapacity_ == nullptr
        && return this->throughputMode_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyFileSystemRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string fileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline ModifyFileSystemRequest& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ModifyFileSystemRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // provisionedThroughputInMiBps Field Functions 
    bool hasProvisionedThroughputInMiBps() const { return this->provisionedThroughputInMiBps_ != nullptr;};
    void deleteProvisionedThroughputInMiBps() { this->provisionedThroughputInMiBps_ = nullptr;};
    inline int64_t provisionedThroughputInMiBps() const { DARABONBA_PTR_GET_DEFAULT(provisionedThroughputInMiBps_, 0L) };
    inline ModifyFileSystemRequest& setProvisionedThroughputInMiBps(int64_t provisionedThroughputInMiBps) { DARABONBA_PTR_SET_VALUE(provisionedThroughputInMiBps_, provisionedThroughputInMiBps) };


    // spaceCapacity Field Functions 
    bool hasSpaceCapacity() const { return this->spaceCapacity_ != nullptr;};
    void deleteSpaceCapacity() { this->spaceCapacity_ = nullptr;};
    inline int64_t spaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(spaceCapacity_, 0L) };
    inline ModifyFileSystemRequest& setSpaceCapacity(int64_t spaceCapacity) { DARABONBA_PTR_SET_VALUE(spaceCapacity_, spaceCapacity) };


    // throughputMode Field Functions 
    bool hasThroughputMode() const { return this->throughputMode_ != nullptr;};
    void deleteThroughputMode() { this->throughputMode_ = nullptr;};
    inline string throughputMode() const { DARABONBA_PTR_GET_DEFAULT(throughputMode_, "") };
    inline ModifyFileSystemRequest& setThroughputMode(string throughputMode) { DARABONBA_PTR_SET_VALUE(throughputMode_, throughputMode) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> fileSystemName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int64_t> provisionedThroughputInMiBps_ = nullptr;
    std::shared_ptr<int64_t> spaceCapacity_ = nullptr;
    std::shared_ptr<string> throughputMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
