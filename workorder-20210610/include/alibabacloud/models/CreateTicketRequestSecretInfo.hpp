// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUESTSECRETINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUESTSECRETINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class CreateTicketRequestSecretInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequestSecretInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileNameList, fileNameList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequestSecretInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileNameList, fileNameList_);
    };
    CreateTicketRequestSecretInfo() = default ;
    CreateTicketRequestSecretInfo(const CreateTicketRequestSecretInfo &) = default ;
    CreateTicketRequestSecretInfo(CreateTicketRequestSecretInfo &&) = default ;
    CreateTicketRequestSecretInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequestSecretInfo() = default ;
    CreateTicketRequestSecretInfo& operator=(const CreateTicketRequestSecretInfo &) = default ;
    CreateTicketRequestSecretInfo& operator=(CreateTicketRequestSecretInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileNameList_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTicketRequestSecretInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileNameList Field Functions 
    bool hasFileNameList() const { return this->fileNameList_ != nullptr;};
    void deleteFileNameList() { this->fileNameList_ = nullptr;};
    inline const vector<string> & fileNameList() const { DARABONBA_PTR_GET_CONST(fileNameList_, vector<string>) };
    inline vector<string> fileNameList() { DARABONBA_PTR_GET(fileNameList_, vector<string>) };
    inline CreateTicketRequestSecretInfo& setFileNameList(const vector<string> & fileNameList) { DARABONBA_PTR_SET_VALUE(fileNameList_, fileNameList) };
    inline CreateTicketRequestSecretInfo& setFileNameList(vector<string> && fileNameList) { DARABONBA_PTR_SET_RVALUE(fileNameList_, fileNameList) };


  protected:
    // Sensitive information-text content
    std::shared_ptr<string> content_ = nullptr;
    // Sensitive Information-Attachment Name List
    std::shared_ptr<vector<string>> fileNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
