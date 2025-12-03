// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchCommitResponseBodyResultHighlightTextMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchCommitResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchCommitResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ListSearchCommitResponseBodyResultHighlightTextMap() = default ;
    ListSearchCommitResponseBodyResultHighlightTextMap(const ListSearchCommitResponseBodyResultHighlightTextMap &) = default ;
    ListSearchCommitResponseBodyResultHighlightTextMap(ListSearchCommitResponseBodyResultHighlightTextMap &&) = default ;
    ListSearchCommitResponseBodyResultHighlightTextMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchCommitResponseBodyResultHighlightTextMap() = default ;
    ListSearchCommitResponseBodyResultHighlightTextMap& operator=(const ListSearchCommitResponseBodyResultHighlightTextMap &) = default ;
    ListSearchCommitResponseBodyResultHighlightTextMap& operator=(ListSearchCommitResponseBodyResultHighlightTextMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitId_ == nullptr
        && return this->commitMessage_ == nullptr && return this->organizationId_ == nullptr && return this->title_ == nullptr; };
    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline ListSearchCommitResponseBodyResultHighlightTextMap& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // commitMessage Field Functions 
    bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
    void deleteCommitMessage() { this->commitMessage_ = nullptr;};
    inline string commitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
    inline ListSearchCommitResponseBodyResultHighlightTextMap& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchCommitResponseBodyResultHighlightTextMap& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSearchCommitResponseBodyResultHighlightTextMap& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> commitMessage_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
