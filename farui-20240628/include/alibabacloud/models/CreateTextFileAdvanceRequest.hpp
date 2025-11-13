// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class CreateTextFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContractId, contractId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(TextFileName, textFileName_);
      DARABONBA_TO_JSON(TextFileUrl, textFileUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContractId, contractId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(TextFileName, textFileName_);
      DARABONBA_FROM_JSON(TextFileUrl, textFileUrlObject_);
    };
    CreateTextFileAdvanceRequest() = default ;
    CreateTextFileAdvanceRequest(const CreateTextFileAdvanceRequest &) = default ;
    CreateTextFileAdvanceRequest(CreateTextFileAdvanceRequest &&) = default ;
    CreateTextFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextFileAdvanceRequest() = default ;
    CreateTextFileAdvanceRequest& operator=(const CreateTextFileAdvanceRequest &) = default ;
    CreateTextFileAdvanceRequest& operator=(CreateTextFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->contractId_ == nullptr && return this->createTime_ == nullptr && return this->textFileName_ == nullptr && return this->textFileUrlObject_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTextFileAdvanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contractId Field Functions 
    bool hasContractId() const { return this->contractId_ != nullptr;};
    void deleteContractId() { this->contractId_ = nullptr;};
    inline string contractId() const { DARABONBA_PTR_GET_DEFAULT(contractId_, "") };
    inline CreateTextFileAdvanceRequest& setContractId(string contractId) { DARABONBA_PTR_SET_VALUE(contractId_, contractId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateTextFileAdvanceRequest& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // textFileName Field Functions 
    bool hasTextFileName() const { return this->textFileName_ != nullptr;};
    void deleteTextFileName() { this->textFileName_ = nullptr;};
    inline string textFileName() const { DARABONBA_PTR_GET_DEFAULT(textFileName_, "") };
    inline CreateTextFileAdvanceRequest& setTextFileName(string textFileName) { DARABONBA_PTR_SET_VALUE(textFileName_, textFileName) };


    // textFileUrlObject Field Functions 
    bool hasTextFileUrlObject() const { return this->textFileUrlObject_ != nullptr;};
    void deleteTextFileUrlObject() { this->textFileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> textFileUrlObject() const { DARABONBA_GET(textFileUrlObject_) };
    inline CreateTextFileAdvanceRequest& setTextFileUrlObject(shared_ptr<Darabonba::IStream> textFileUrlObject) { DARABONBA_SET_VALUE(textFileUrlObject_, textFileUrlObject) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> contractId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> textFileName_ = nullptr;
    shared_ptr<Darabonba::IStream> textFileUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
