// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDSDKSTREAMMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDSDKSTREAMMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SendSdkStreamMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendSdkStreamMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(operationName, operationName_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SendSdkStreamMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(operationName, operationName_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    SendSdkStreamMessageRequest() = default ;
    SendSdkStreamMessageRequest(const SendSdkStreamMessageRequest &) = default ;
    SendSdkStreamMessageRequest(SendSdkStreamMessageRequest &&) = default ;
    SendSdkStreamMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendSdkStreamMessageRequest() = default ;
    SendSdkStreamMessageRequest& operator=(const SendSdkStreamMessageRequest &) = default ;
    SendSdkStreamMessageRequest& operator=(SendSdkStreamMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->header_ == nullptr && this->moduleName_ == nullptr && this->operationName_ == nullptr && this->userId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SendSdkStreamMessageRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline string getHeader() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
    inline SendSdkStreamMessageRequest& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline SendSdkStreamMessageRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline SendSdkStreamMessageRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SendSdkStreamMessageRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> data_ {};
    // header
    shared_ptr<string> header_ {};
    shared_ptr<string> moduleName_ {};
    shared_ptr<string> operationName_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
