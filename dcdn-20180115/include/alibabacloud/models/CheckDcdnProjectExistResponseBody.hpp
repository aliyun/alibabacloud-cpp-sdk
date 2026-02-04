// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CheckDcdnProjectExistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDcdnProjectExistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDcdnProjectExistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDcdnProjectExistResponseBody() = default ;
    CheckDcdnProjectExistResponseBody(const CheckDcdnProjectExistResponseBody &) = default ;
    CheckDcdnProjectExistResponseBody(CheckDcdnProjectExistResponseBody &&) = default ;
    CheckDcdnProjectExistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDcdnProjectExistResponseBody() = default ;
    CheckDcdnProjectExistResponseBody& operator=(const CheckDcdnProjectExistResponseBody &) = default ;
    CheckDcdnProjectExistResponseBody& operator=(CheckDcdnProjectExistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Exist, exist_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Exist, exist_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exist_ == nullptr; };
      // exist Field Functions 
      bool hasExist() const { return this->exist_ != nullptr;};
      void deleteExist() { this->exist_ = nullptr;};
      inline string getExist() const { DARABONBA_PTR_GET_DEFAULT(exist_, "") };
      inline Content& setExist(string exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


    protected:
      // Indicates whether the real-time log delivery project exists. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<string> exist_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CheckDcdnProjectExistResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, CheckDcdnProjectExistResponseBody::Content) };
    inline CheckDcdnProjectExistResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, CheckDcdnProjectExistResponseBody::Content) };
    inline CheckDcdnProjectExistResponseBody& setContent(const CheckDcdnProjectExistResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CheckDcdnProjectExistResponseBody& setContent(CheckDcdnProjectExistResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDcdnProjectExistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<CheckDcdnProjectExistResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
