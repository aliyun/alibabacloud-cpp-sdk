// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCUSTOMERSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCUSTOMERSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindCustomerSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindCustomerSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InfoType, infoType_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, FindCustomerSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    FindCustomerSnapshotRequest() = default ;
    FindCustomerSnapshotRequest(const FindCustomerSnapshotRequest &) = default ;
    FindCustomerSnapshotRequest(FindCustomerSnapshotRequest &&) = default ;
    FindCustomerSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindCustomerSnapshotRequest() = default ;
    FindCustomerSnapshotRequest& operator=(const FindCustomerSnapshotRequest &) = default ;
    FindCustomerSnapshotRequest& operator=(FindCustomerSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoType_ == nullptr
        && this->pk_ == nullptr && this->versionId_ == nullptr; };
    // infoType Field Functions 
    bool hasInfoType() const { return this->infoType_ != nullptr;};
    void deleteInfoType() { this->infoType_ = nullptr;};
    inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
    inline FindCustomerSnapshotRequest& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline int64_t getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, 0L) };
    inline FindCustomerSnapshotRequest& setPk(int64_t pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline FindCustomerSnapshotRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> infoType_ {};
    // This parameter is required.
    shared_ptr<int64_t> pk_ {};
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
