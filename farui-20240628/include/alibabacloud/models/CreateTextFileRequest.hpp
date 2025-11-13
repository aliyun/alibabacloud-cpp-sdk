// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class CreateTextFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContractId, contractId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(TextFileName, textFileName_);
      DARABONBA_PTR_TO_JSON(TextFileUrl, textFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContractId, contractId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(TextFileName, textFileName_);
      DARABONBA_PTR_FROM_JSON(TextFileUrl, textFileUrl_);
    };
    CreateTextFileRequest() = default ;
    CreateTextFileRequest(const CreateTextFileRequest &) = default ;
    CreateTextFileRequest(CreateTextFileRequest &&) = default ;
    CreateTextFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextFileRequest() = default ;
    CreateTextFileRequest& operator=(const CreateTextFileRequest &) = default ;
    CreateTextFileRequest& operator=(CreateTextFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->contractId_ == nullptr && return this->createTime_ == nullptr && return this->textFileName_ == nullptr && return this->textFileUrl_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTextFileRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contractId Field Functions 
    bool hasContractId() const { return this->contractId_ != nullptr;};
    void deleteContractId() { this->contractId_ = nullptr;};
    inline string contractId() const { DARABONBA_PTR_GET_DEFAULT(contractId_, "") };
    inline CreateTextFileRequest& setContractId(string contractId) { DARABONBA_PTR_SET_VALUE(contractId_, contractId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateTextFileRequest& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // textFileName Field Functions 
    bool hasTextFileName() const { return this->textFileName_ != nullptr;};
    void deleteTextFileName() { this->textFileName_ = nullptr;};
    inline string textFileName() const { DARABONBA_PTR_GET_DEFAULT(textFileName_, "") };
    inline CreateTextFileRequest& setTextFileName(string textFileName) { DARABONBA_PTR_SET_VALUE(textFileName_, textFileName) };


    // textFileUrl Field Functions 
    bool hasTextFileUrl() const { return this->textFileUrl_ != nullptr;};
    void deleteTextFileUrl() { this->textFileUrl_ = nullptr;};
    inline string textFileUrl() const { DARABONBA_PTR_GET_DEFAULT(textFileUrl_, "") };
    inline CreateTextFileRequest& setTextFileUrl(string textFileUrl) { DARABONBA_PTR_SET_VALUE(textFileUrl_, textFileUrl) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> contractId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> textFileName_ = nullptr;
    std::shared_ptr<string> textFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
