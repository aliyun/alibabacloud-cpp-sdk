// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetZookeeperDataImportUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetZookeeperDataImportUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetZookeeperDataImportUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetZookeeperDataImportUrlRequest() = default ;
    GetZookeeperDataImportUrlRequest(const GetZookeeperDataImportUrlRequest &) = default ;
    GetZookeeperDataImportUrlRequest(GetZookeeperDataImportUrlRequest &&) = default ;
    GetZookeeperDataImportUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetZookeeperDataImportUrlRequest() = default ;
    GetZookeeperDataImportUrlRequest& operator=(const GetZookeeperDataImportUrlRequest &) = default ;
    GetZookeeperDataImportUrlRequest& operator=(GetZookeeperDataImportUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->contentType_ == nullptr && this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetZookeeperDataImportUrlRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetZookeeperDataImportUrlRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetZookeeperDataImportUrlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // RestResult
    shared_ptr<string> acceptLanguage_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> contentType_ {};
    // The type of the file.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
