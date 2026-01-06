// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFileContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFileContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFileContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkTemplateFileContentResponseBody() = default ;
    GetSparkTemplateFileContentResponseBody(const GetSparkTemplateFileContentResponseBody &) = default ;
    GetSparkTemplateFileContentResponseBody(GetSparkTemplateFileContentResponseBody &&) = default ;
    GetSparkTemplateFileContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFileContentResponseBody() = default ;
    GetSparkTemplateFileContentResponseBody& operator=(const GetSparkTemplateFileContentResponseBody &) = default ;
    GetSparkTemplateFileContentResponseBody& operator=(GetSparkTemplateFileContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appType_ == nullptr
        && this->content_ == nullptr && this->id_ == nullptr && this->resourceGroupName_ == nullptr && this->type_ == nullptr; };
      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline Data& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The application type. Valid values:
      // 
      // *   **SQL**
      // *   **STREAMING**
      // *   **BATCH**
      shared_ptr<string> appType_ {};
      // The content of the application template.
      shared_ptr<string> content_ {};
      // The application template ID.
      shared_ptr<int64_t> id_ {};
      // The name of the resource group.
      shared_ptr<string> resourceGroupName_ {};
      // The file type. Valid values:
      // 
      // *   **folder**
      // *   **file**
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkTemplateFileContentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkTemplateFileContentResponseBody::Data) };
    inline GetSparkTemplateFileContentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkTemplateFileContentResponseBody::Data) };
    inline GetSparkTemplateFileContentResponseBody& setData(const GetSparkTemplateFileContentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkTemplateFileContentResponseBody& setData(GetSparkTemplateFileContentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkTemplateFileContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetSparkTemplateFileContentResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
