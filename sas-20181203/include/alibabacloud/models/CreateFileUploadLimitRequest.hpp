// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEUPLOADLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEUPLOADLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileUploadLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileUploadLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileUploadLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
    };
    CreateFileUploadLimitRequest() = default ;
    CreateFileUploadLimitRequest(const CreateFileUploadLimitRequest &) = default ;
    CreateFileUploadLimitRequest(CreateFileUploadLimitRequest &&) = default ;
    CreateFileUploadLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileUploadLimitRequest() = default ;
    CreateFileUploadLimitRequest& operator=(const CreateFileUploadLimitRequest &) = default ;
    CreateFileUploadLimitRequest& operator=(CreateFileUploadLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CreateFileUploadLimitRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    // The QPS limit on the files uploaded from the client. Valid values: 100 to 10000.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
