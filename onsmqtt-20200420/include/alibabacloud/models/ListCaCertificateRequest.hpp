// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ListCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListCaCertificateRequest() = default ;
    ListCaCertificateRequest(const ListCaCertificateRequest &) = default ;
    ListCaCertificateRequest(ListCaCertificateRequest &&) = default ;
    ListCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCaCertificateRequest() = default ;
    ListCaCertificateRequest& operator=(const ListCaCertificateRequest &) = default ;
    ListCaCertificateRequest& operator=(ListCaCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqttInstanceId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline ListCaCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline ListCaCertificateRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListCaCertificateRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The instance ID of the Cloud Message Queue MQTT version, indicating which instance\\"s CA certificates need to be viewed.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // Indicates the page number of the returned results. The starting page is counted from 1.
    // 
    // This parameter is required.
    shared_ptr<string> pageNo_ {};
    // The maximum number of query records to display per page. Value range: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
