// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATADEPLOYEDITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTPACKAGERESPONSEBODYDATADEPLOYEDITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDeploymentPackageResponseBodyDataDeployedItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentPackageResponseBodyDataDeployedItems& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentPackageResponseBodyDataDeployedItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDeploymentPackageResponseBodyDataDeployedItems() = default ;
    GetDeploymentPackageResponseBodyDataDeployedItems(const GetDeploymentPackageResponseBodyDataDeployedItems &) = default ;
    GetDeploymentPackageResponseBodyDataDeployedItems(GetDeploymentPackageResponseBodyDataDeployedItems &&) = default ;
    GetDeploymentPackageResponseBodyDataDeployedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentPackageResponseBodyDataDeployedItems() = default ;
    GetDeploymentPackageResponseBodyDataDeployedItems& operator=(const GetDeploymentPackageResponseBodyDataDeployedItems &) = default ;
    GetDeploymentPackageResponseBodyDataDeployedItems& operator=(GetDeploymentPackageResponseBodyDataDeployedItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->fileVersion_ != nullptr && this->status_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetDeploymentPackageResponseBodyDataDeployedItems& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int64_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0L) };
    inline GetDeploymentPackageResponseBodyDataDeployedItems& setFileVersion(int64_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDeploymentPackageResponseBodyDataDeployedItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> fileId_ = nullptr;
    std::shared_ptr<int64_t> fileVersion_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
