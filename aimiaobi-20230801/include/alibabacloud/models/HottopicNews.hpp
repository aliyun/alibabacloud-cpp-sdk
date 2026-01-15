// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTTOPICNEWS_HPP_
#define ALIBABACLOUD_MODELS_HOTTOPICNEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class HottopicNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HottopicNews& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, HottopicNews& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    HottopicNews() = default ;
    HottopicNews(const HottopicNews &) = default ;
    HottopicNews(HottopicNews &&) = default ;
    HottopicNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HottopicNews() = default ;
    HottopicNews& operator=(const HottopicNews &) = default ;
    HottopicNews& operator=(HottopicNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Comments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Comments& obj) { 
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Comments& obj) { 
        DARABONBA_PTR_FROM_JSON(Text, text_);
      };
      Comments() = default ;
      Comments(const Comments &) = default ;
      Comments(Comments &&) = default ;
      Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Comments() = default ;
      Comments& operator=(const Comments &) = default ;
      Comments& operator=(Comments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->text_ == nullptr; };
      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->comments_ == nullptr
        && this->content_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<HottopicNews::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<HottopicNews::Comments>) };
    inline vector<HottopicNews::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<HottopicNews::Comments>) };
    inline HottopicNews& setComments(const vector<HottopicNews::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline HottopicNews& setComments(vector<HottopicNews::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline HottopicNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HottopicNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline HottopicNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<vector<HottopicNews::Comments>> comments_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
