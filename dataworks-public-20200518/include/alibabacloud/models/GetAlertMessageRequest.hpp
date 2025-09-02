// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetAlertMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
    };
    GetAlertMessageRequest() = default ;
    GetAlertMessageRequest(const GetAlertMessageRequest &) = default ;
    GetAlertMessageRequest(GetAlertMessageRequest &&) = default ;
    GetAlertMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertMessageRequest() = default ;
    GetAlertMessageRequest& operator=(const GetAlertMessageRequest &) = default ;
    GetAlertMessageRequest& operator=(GetAlertMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline string alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
    inline GetAlertMessageRequest& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


  protected:
    // The alert ID. You can all the [ListAlertMessages](https://help.aliyun.com/document_detail/173961.html) operation to obtain the alert ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> alertId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
