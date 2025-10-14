// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODYCOMMENTS_HPP_
#define ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODYCOMMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommentListReportResponseBodyComments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommentListReportResponseBodyComments& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, CommentListReportResponseBodyComments& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Userid, userid_);
    };
    CommentListReportResponseBodyComments() = default ;
    CommentListReportResponseBodyComments(const CommentListReportResponseBodyComments &) = default ;
    CommentListReportResponseBodyComments(CommentListReportResponseBodyComments &&) = default ;
    CommentListReportResponseBodyComments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommentListReportResponseBodyComments() = default ;
    CommentListReportResponseBodyComments& operator=(const CommentListReportResponseBodyComments &) = default ;
    CommentListReportResponseBodyComments& operator=(CommentListReportResponseBodyComments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->userid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CommentListReportResponseBodyComments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CommentListReportResponseBodyComments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline CommentListReportResponseBodyComments& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
