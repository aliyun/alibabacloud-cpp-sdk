// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetSearchCodePreviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSearchCodePreviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(isDsl, isDsl_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSearchCodePreviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(isDsl, isDsl_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    GetSearchCodePreviewRequest() = default ;
    GetSearchCodePreviewRequest(const GetSearchCodePreviewRequest &) = default ;
    GetSearchCodePreviewRequest(GetSearchCodePreviewRequest &&) = default ;
    GetSearchCodePreviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSearchCodePreviewRequest() = default ;
    GetSearchCodePreviewRequest& operator=(const GetSearchCodePreviewRequest &) = default ;
    GetSearchCodePreviewRequest& operator=(GetSearchCodePreviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->isDsl_ == nullptr && return this->keyword_ == nullptr && return this->organizationId_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetSearchCodePreviewRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // isDsl Field Functions 
    bool hasIsDsl() const { return this->isDsl_ != nullptr;};
    void deleteIsDsl() { this->isDsl_ = nullptr;};
    inline bool isDsl() const { DARABONBA_PTR_GET_DEFAULT(isDsl_, false) };
    inline GetSearchCodePreviewRequest& setIsDsl(bool isDsl) { DARABONBA_PTR_SET_VALUE(isDsl_, isDsl) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetSearchCodePreviewRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetSearchCodePreviewRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<bool> isDsl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
