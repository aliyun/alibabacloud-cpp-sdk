// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLIMPORTFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLIMPORTFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetSkillImportFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillImportFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillImportFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    GetSkillImportFileUrlRequest() = default ;
    GetSkillImportFileUrlRequest(const GetSkillImportFileUrlRequest &) = default ;
    GetSkillImportFileUrlRequest(GetSkillImportFileUrlRequest &&) = default ;
    GetSkillImportFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillImportFileUrlRequest() = default ;
    GetSkillImportFileUrlRequest& operator=(const GetSkillImportFileUrlRequest &) = default ;
    GetSkillImportFileUrlRequest& operator=(GetSkillImportFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->namespaceId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetSkillImportFileUrlRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetSkillImportFileUrlRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    shared_ptr<string> contentType_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
