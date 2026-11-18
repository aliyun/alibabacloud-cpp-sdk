// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWORKFLOWGLOBALENVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEWORKFLOWGLOBALENVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class SaveWorkflowGlobalEnvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWorkflowGlobalEnvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWorkflowGlobalEnvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    SaveWorkflowGlobalEnvRequest() = default ;
    SaveWorkflowGlobalEnvRequest(const SaveWorkflowGlobalEnvRequest &) = default ;
    SaveWorkflowGlobalEnvRequest(SaveWorkflowGlobalEnvRequest &&) = default ;
    SaveWorkflowGlobalEnvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWorkflowGlobalEnvRequest() = default ;
    SaveWorkflowGlobalEnvRequest& operator=(const SaveWorkflowGlobalEnvRequest &) = default ;
    SaveWorkflowGlobalEnvRequest& operator=(SaveWorkflowGlobalEnvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SaveWorkflowGlobalEnvRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // The configuration content.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
