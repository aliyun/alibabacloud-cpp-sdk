// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyModelRequestContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyModelRequest() = default ;
    ModifyModelRequest(const ModifyModelRequest &) = default ;
    ModifyModelRequest(ModifyModelRequest &&) = default ;
    ModifyModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequest() = default ;
    ModifyModelRequest& operator=(const ModifyModelRequest &) = default ;
    ModifyModelRequest& operator=(ModifyModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->status_ != nullptr && this->dryRun_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ModifyModelRequestContent & content() const { DARABONBA_PTR_GET_CONST(content_, ModifyModelRequestContent) };
    inline ModifyModelRequestContent content() { DARABONBA_PTR_GET(content_, ModifyModelRequestContent) };
    inline ModifyModelRequest& setContent(const ModifyModelRequestContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ModifyModelRequest& setContent(ModifyModelRequestContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyModelRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ModifyModelRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    std::shared_ptr<ModifyModelRequestContent> content_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
