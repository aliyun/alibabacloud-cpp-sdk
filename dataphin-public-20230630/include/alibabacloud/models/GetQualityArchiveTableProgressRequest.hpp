// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYARCHIVETABLEPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYARCHIVETABLEPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityArchiveTableProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityArchiveTableProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProgressId, progressId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityArchiveTableProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProgressId, progressId_);
    };
    GetQualityArchiveTableProgressRequest() = default ;
    GetQualityArchiveTableProgressRequest(const GetQualityArchiveTableProgressRequest &) = default ;
    GetQualityArchiveTableProgressRequest(GetQualityArchiveTableProgressRequest &&) = default ;
    GetQualityArchiveTableProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityArchiveTableProgressRequest() = default ;
    GetQualityArchiveTableProgressRequest& operator=(const GetQualityArchiveTableProgressRequest &) = default ;
    GetQualityArchiveTableProgressRequest& operator=(GetQualityArchiveTableProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->progressId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetQualityArchiveTableProgressRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetQualityArchiveTableProgressRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // progressId Field Functions 
    bool hasProgressId() const { return this->progressId_ != nullptr;};
    void deleteProgressId() { this->progressId_ = nullptr;};
    inline string getProgressId() const { DARABONBA_PTR_GET_DEFAULT(progressId_, "") };
    inline GetQualityArchiveTableProgressRequest& setProgressId(string progressId) { DARABONBA_PTR_SET_VALUE(progressId_, progressId) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The asynchronous task progress ID returned by the UpsertQualityArchiveTable operation.
    // 
    // This parameter is required.
    shared_ptr<string> progressId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
