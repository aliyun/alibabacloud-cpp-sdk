// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SubmitDetailQuery, submitDetailQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SubmitDetailQuery, submitDetailQueryShrink_);
    };
    GetLatestSubmitDetailShrinkRequest() = default ;
    GetLatestSubmitDetailShrinkRequest(const GetLatestSubmitDetailShrinkRequest &) = default ;
    GetLatestSubmitDetailShrinkRequest(GetLatestSubmitDetailShrinkRequest &&) = default ;
    GetLatestSubmitDetailShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailShrinkRequest() = default ;
    GetLatestSubmitDetailShrinkRequest& operator=(const GetLatestSubmitDetailShrinkRequest &) = default ;
    GetLatestSubmitDetailShrinkRequest& operator=(GetLatestSubmitDetailShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->submitDetailQueryShrink_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetLatestSubmitDetailShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // submitDetailQueryShrink Field Functions 
    bool hasSubmitDetailQueryShrink() const { return this->submitDetailQueryShrink_ != nullptr;};
    void deleteSubmitDetailQueryShrink() { this->submitDetailQueryShrink_ = nullptr;};
    inline string submitDetailQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(submitDetailQueryShrink_, "") };
    inline GetLatestSubmitDetailShrinkRequest& setSubmitDetailQueryShrink(string submitDetailQueryShrink) { DARABONBA_PTR_SET_VALUE(submitDetailQueryShrink_, submitDetailQueryShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> submitDetailQueryShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
