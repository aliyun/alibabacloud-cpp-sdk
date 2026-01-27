// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDirectoriesRequest() = default ;
    DescribeDirectoriesRequest(const DescribeDirectoriesRequest &) = default ;
    DescribeDirectoriesRequest(DescribeDirectoriesRequest &&) = default ;
    DescribeDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesRequest() = default ;
    DescribeDirectoriesRequest& operator=(const DescribeDirectoriesRequest &) = default ;
    DescribeDirectoriesRequest& operator=(DescribeDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->directoryId_ == nullptr && this->regionId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeDirectoriesRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline const vector<string> & getDirectoryId() const { DARABONBA_PTR_GET_CONST(directoryId_, vector<string>) };
    inline vector<string> getDirectoryId() { DARABONBA_PTR_GET(directoryId_, vector<string>) };
    inline DescribeDirectoriesRequest& setDirectoryId(const vector<string> & directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };
    inline DescribeDirectoriesRequest& setDirectoryId(vector<string> && directoryId) { DARABONBA_PTR_SET_RVALUE(directoryId_, directoryId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDirectoriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client ID. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The directory IDs.
    shared_ptr<vector<string>> directoryId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
