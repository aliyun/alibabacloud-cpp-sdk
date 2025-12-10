// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDCREATECLOUDACCOUNTEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESENDCREATECLOUDACCOUNTEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ResendCreateCloudAccountEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendCreateCloudAccountEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, ResendCreateCloudAccountEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    ResendCreateCloudAccountEmailRequest() = default ;
    ResendCreateCloudAccountEmailRequest(const ResendCreateCloudAccountEmailRequest &) = default ;
    ResendCreateCloudAccountEmailRequest(ResendCreateCloudAccountEmailRequest &&) = default ;
    ResendCreateCloudAccountEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendCreateCloudAccountEmailRequest() = default ;
    ResendCreateCloudAccountEmailRequest& operator=(const ResendCreateCloudAccountEmailRequest &) = default ;
    ResendCreateCloudAccountEmailRequest& operator=(ResendCreateCloudAccountEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ResendCreateCloudAccountEmailRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    // The account record ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
