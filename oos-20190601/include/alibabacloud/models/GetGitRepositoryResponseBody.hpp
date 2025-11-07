// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGITREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGITREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetGitRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGitRepositoryResponseBody() = default ;
    GetGitRepositoryResponseBody(const GetGitRepositoryResponseBody &) = default ;
    GetGitRepositoryResponseBody(GetGitRepositoryResponseBody &&) = default ;
    GetGitRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGitRepositoryResponseBody() = default ;
    GetGitRepositoryResponseBody& operator=(const GetGitRepositoryResponseBody &) = default ;
    GetGitRepositoryResponseBody& operator=(GetGitRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->htmlUrl_ == nullptr && return this->isPrivate_ == nullptr && return this->requestId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGitRepositoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // htmlUrl Field Functions 
    bool hasHtmlUrl() const { return this->htmlUrl_ != nullptr;};
    void deleteHtmlUrl() { this->htmlUrl_ = nullptr;};
    inline string htmlUrl() const { DARABONBA_PTR_GET_DEFAULT(htmlUrl_, "") };
    inline GetGitRepositoryResponseBody& setHtmlUrl(string htmlUrl) { DARABONBA_PTR_SET_VALUE(htmlUrl_, htmlUrl) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool isPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline GetGitRepositoryResponseBody& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGitRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> htmlUrl_ = nullptr;
    std::shared_ptr<bool> isPrivate_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
