// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class CreateTextFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ContractId, contractId_);
      DARABONBA_PTR_TO_JSON(TextFileId, textFileId_);
      DARABONBA_PTR_TO_JSON(TextFileName, textFileName_);
      DARABONBA_PTR_TO_JSON(TextFileUrl, textFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ContractId, contractId_);
      DARABONBA_PTR_FROM_JSON(TextFileId, textFileId_);
      DARABONBA_PTR_FROM_JSON(TextFileName, textFileName_);
      DARABONBA_PTR_FROM_JSON(TextFileUrl, textFileUrl_);
    };
    CreateTextFileResponseBodyData() = default ;
    CreateTextFileResponseBodyData(const CreateTextFileResponseBodyData &) = default ;
    CreateTextFileResponseBodyData(CreateTextFileResponseBodyData &&) = default ;
    CreateTextFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextFileResponseBodyData() = default ;
    CreateTextFileResponseBodyData& operator=(const CreateTextFileResponseBodyData &) = default ;
    CreateTextFileResponseBodyData& operator=(CreateTextFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contractId_ == nullptr
        && return this->textFileId_ == nullptr && return this->textFileName_ == nullptr && return this->textFileUrl_ == nullptr; };
    // contractId Field Functions 
    bool hasContractId() const { return this->contractId_ != nullptr;};
    void deleteContractId() { this->contractId_ = nullptr;};
    inline string contractId() const { DARABONBA_PTR_GET_DEFAULT(contractId_, "") };
    inline CreateTextFileResponseBodyData& setContractId(string contractId) { DARABONBA_PTR_SET_VALUE(contractId_, contractId) };


    // textFileId Field Functions 
    bool hasTextFileId() const { return this->textFileId_ != nullptr;};
    void deleteTextFileId() { this->textFileId_ = nullptr;};
    inline string textFileId() const { DARABONBA_PTR_GET_DEFAULT(textFileId_, "") };
    inline CreateTextFileResponseBodyData& setTextFileId(string textFileId) { DARABONBA_PTR_SET_VALUE(textFileId_, textFileId) };


    // textFileName Field Functions 
    bool hasTextFileName() const { return this->textFileName_ != nullptr;};
    void deleteTextFileName() { this->textFileName_ = nullptr;};
    inline string textFileName() const { DARABONBA_PTR_GET_DEFAULT(textFileName_, "") };
    inline CreateTextFileResponseBodyData& setTextFileName(string textFileName) { DARABONBA_PTR_SET_VALUE(textFileName_, textFileName) };


    // textFileUrl Field Functions 
    bool hasTextFileUrl() const { return this->textFileUrl_ != nullptr;};
    void deleteTextFileUrl() { this->textFileUrl_ = nullptr;};
    inline string textFileUrl() const { DARABONBA_PTR_GET_DEFAULT(textFileUrl_, "") };
    inline CreateTextFileResponseBodyData& setTextFileUrl(string textFileUrl) { DARABONBA_PTR_SET_VALUE(textFileUrl_, textFileUrl) };


  protected:
    std::shared_ptr<string> contractId_ = nullptr;
    std::shared_ptr<string> textFileId_ = nullptr;
    std::shared_ptr<string> textFileName_ = nullptr;
    std::shared_ptr<string> textFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
