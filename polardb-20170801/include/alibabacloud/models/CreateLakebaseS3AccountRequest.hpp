// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKEBASES3ACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKEBASES3ACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateLakebaseS3AccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakebaseS3AccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_TO_JSON(UserAccPolicy, userAccPolicy_);
      DARABONBA_PTR_TO_JSON(UserAccSk, userAccSk_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakebaseS3AccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_FROM_JSON(UserAccPolicy, userAccPolicy_);
      DARABONBA_PTR_FROM_JSON(UserAccSk, userAccSk_);
    };
    CreateLakebaseS3AccountRequest() = default ;
    CreateLakebaseS3AccountRequest(const CreateLakebaseS3AccountRequest &) = default ;
    CreateLakebaseS3AccountRequest(CreateLakebaseS3AccountRequest &&) = default ;
    CreateLakebaseS3AccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakebaseS3AccountRequest() = default ;
    CreateLakebaseS3AccountRequest& operator=(const CreateLakebaseS3AccountRequest &) = default ;
    CreateLakebaseS3AccountRequest& operator=(CreateLakebaseS3AccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pfsInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->userAccAk_ == nullptr && this->userAccPolicy_ == nullptr && this->userAccSk_ == nullptr; };
    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline CreateLakebaseS3AccountRequest& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLakebaseS3AccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userAccAk Field Functions 
    bool hasUserAccAk() const { return this->userAccAk_ != nullptr;};
    void deleteUserAccAk() { this->userAccAk_ = nullptr;};
    inline string getUserAccAk() const { DARABONBA_PTR_GET_DEFAULT(userAccAk_, "") };
    inline CreateLakebaseS3AccountRequest& setUserAccAk(string userAccAk) { DARABONBA_PTR_SET_VALUE(userAccAk_, userAccAk) };


    // userAccPolicy Field Functions 
    bool hasUserAccPolicy() const { return this->userAccPolicy_ != nullptr;};
    void deleteUserAccPolicy() { this->userAccPolicy_ = nullptr;};
    inline string getUserAccPolicy() const { DARABONBA_PTR_GET_DEFAULT(userAccPolicy_, "") };
    inline CreateLakebaseS3AccountRequest& setUserAccPolicy(string userAccPolicy) { DARABONBA_PTR_SET_VALUE(userAccPolicy_, userAccPolicy) };


    // userAccSk Field Functions 
    bool hasUserAccSk() const { return this->userAccSk_ != nullptr;};
    void deleteUserAccSk() { this->userAccSk_ = nullptr;};
    inline string getUserAccSk() const { DARABONBA_PTR_GET_DEFAULT(userAccSk_, "") };
    inline CreateLakebaseS3AccountRequest& setUserAccSk(string userAccSk) { DARABONBA_PTR_SET_VALUE(userAccSk_, userAccSk) };


  protected:
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> pfsInstanceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The Access Key of the S3 account.
    // 
    // > The account name can contain only uppercase letters, lowercase letters, and digits, and cannot exceed 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> userAccAk_ {};
    // A policy document in JSON format that defines the permissions of the S3 account. If this parameter is not specified, the default policy is used.
    shared_ptr<string> userAccPolicy_ {};
    // The Secret Key of the S3 account (@sensitive, encryption in transit).
    // 
    // > The key must contain uppercase letters, lowercase letters, and digits, and must be greater than 18 and no more than 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> userAccSk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
