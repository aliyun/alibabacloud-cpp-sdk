// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEUPLOADLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEUPLOADLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateFileUploadLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileUploadLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileUploadLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
    };
    UpdateFileUploadLimitRequest() = default ;
    UpdateFileUploadLimitRequest(const UpdateFileUploadLimitRequest &) = default ;
    UpdateFileUploadLimitRequest(UpdateFileUploadLimitRequest &&) = default ;
    UpdateFileUploadLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileUploadLimitRequest() = default ;
    UpdateFileUploadLimitRequest& operator=(const UpdateFileUploadLimitRequest &) = default ;
    UpdateFileUploadLimitRequest& operator=(UpdateFileUploadLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline UpdateFileUploadLimitRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    // The QPS limit on the files uploaded from the client. Valid values: 100 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
