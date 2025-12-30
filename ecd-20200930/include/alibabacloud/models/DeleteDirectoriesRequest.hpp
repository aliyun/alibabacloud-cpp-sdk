// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDirectoriesRequest() = default ;
    DeleteDirectoriesRequest(const DeleteDirectoriesRequest &) = default ;
    DeleteDirectoriesRequest(DeleteDirectoriesRequest &&) = default ;
    DeleteDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDirectoriesRequest() = default ;
    DeleteDirectoriesRequest& operator=(const DeleteDirectoriesRequest &) = default ;
    DeleteDirectoriesRequest& operator=(DeleteDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->regionId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline const vector<string> & getDirectoryId() const { DARABONBA_PTR_GET_CONST(directoryId_, vector<string>) };
    inline vector<string> getDirectoryId() { DARABONBA_PTR_GET(directoryId_, vector<string>) };
    inline DeleteDirectoriesRequest& setDirectoryId(const vector<string> & directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };
    inline DeleteDirectoriesRequest& setDirectoryId(vector<string> && directoryId) { DARABONBA_PTR_SET_RVALUE(directoryId_, directoryId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDirectoriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The directory IDs. You can specify one or more directory IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> directoryId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
