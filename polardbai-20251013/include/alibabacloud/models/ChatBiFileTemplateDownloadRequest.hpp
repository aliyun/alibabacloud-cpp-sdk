// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIFILETEMPLATEDOWNLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIFILETEMPLATEDOWNLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIFileTemplateDownloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIFileTemplateDownloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIFileTemplateDownloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    ChatBIFileTemplateDownloadRequest() = default ;
    ChatBIFileTemplateDownloadRequest(const ChatBIFileTemplateDownloadRequest &) = default ;
    ChatBIFileTemplateDownloadRequest(ChatBIFileTemplateDownloadRequest &&) = default ;
    ChatBIFileTemplateDownloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIFileTemplateDownloadRequest() = default ;
    ChatBIFileTemplateDownloadRequest& operator=(const ChatBIFileTemplateDownloadRequest &) = default ;
    ChatBIFileTemplateDownloadRequest& operator=(ChatBIFileTemplateDownloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->tableType_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIFileTemplateDownloadRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ChatBIFileTemplateDownloadRequest& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> tableType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
