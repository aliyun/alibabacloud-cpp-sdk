// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPDOMAINREDIRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPDOMAINREDIRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppDomainRedirectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppDomainRedirectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppDomainRedirectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    DeleteAppDomainRedirectRequest() = default ;
    DeleteAppDomainRedirectRequest(const DeleteAppDomainRedirectRequest &) = default ;
    DeleteAppDomainRedirectRequest(DeleteAppDomainRedirectRequest &&) = default ;
    DeleteAppDomainRedirectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppDomainRedirectRequest() = default ;
    DeleteAppDomainRedirectRequest& operator=(const DeleteAppDomainRedirectRequest &) = default ;
    DeleteAppDomainRedirectRequest& operator=(DeleteAppDomainRedirectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->recordId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DeleteAppDomainRedirectRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DeleteAppDomainRedirectRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int64_t> recordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
