// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAKEBASES3ACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELAKEBASES3ACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteLakebaseS3AccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLakebaseS3AccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserAccAk, userAccAk_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLakebaseS3AccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserAccAk, userAccAk_);
    };
    DeleteLakebaseS3AccountRequest() = default ;
    DeleteLakebaseS3AccountRequest(const DeleteLakebaseS3AccountRequest &) = default ;
    DeleteLakebaseS3AccountRequest(DeleteLakebaseS3AccountRequest &&) = default ;
    DeleteLakebaseS3AccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLakebaseS3AccountRequest() = default ;
    DeleteLakebaseS3AccountRequest& operator=(const DeleteLakebaseS3AccountRequest &) = default ;
    DeleteLakebaseS3AccountRequest& operator=(DeleteLakebaseS3AccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pfsInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->userAccAk_ == nullptr; };
    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline DeleteLakebaseS3AccountRequest& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLakebaseS3AccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userAccAk Field Functions 
    bool hasUserAccAk() const { return this->userAccAk_ != nullptr;};
    void deleteUserAccAk() { this->userAccAk_ = nullptr;};
    inline string getUserAccAk() const { DARABONBA_PTR_GET_DEFAULT(userAccAk_, "") };
    inline DeleteLakebaseS3AccountRequest& setUserAccAk(string userAccAk) { DARABONBA_PTR_SET_VALUE(userAccAk_, userAccAk) };


  protected:
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> pfsInstanceId_ {};
    // The region ID.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The access key of the S3 account to delete.
    // 
    // > The default account cannot be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> userAccAk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
