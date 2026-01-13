// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLogContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(listLogContent, listLogContent_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(listLogContent, listLogContent_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListLogContentsResponseBody() = default ;
    ListLogContentsResponseBody(const ListLogContentsResponseBody &) = default ;
    ListLogContentsResponseBody(ListLogContentsResponseBody &&) = default ;
    ListLogContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogContentsResponseBody() = default ;
    ListLogContentsResponseBody& operator=(const ListLogContentsResponseBody &) = default ;
    ListLogContentsResponseBody& operator=(ListLogContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListLogContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListLogContent& obj) { 
        DARABONBA_PTR_TO_JSON(contents, contents_);
        DARABONBA_PTR_TO_JSON(totalLength, totalLength_);
      };
      friend void from_json(const Darabonba::Json& j, ListLogContent& obj) { 
        DARABONBA_PTR_FROM_JSON(contents, contents_);
        DARABONBA_PTR_FROM_JSON(totalLength, totalLength_);
      };
      ListLogContent() = default ;
      ListLogContent(const ListLogContent &) = default ;
      ListLogContent(ListLogContent &&) = default ;
      ListLogContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListLogContent() = default ;
      ListLogContent& operator=(const ListLogContent &) = default ;
      ListLogContent& operator=(ListLogContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Contents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contents& obj) { 
          DARABONBA_PTR_TO_JSON(LineContent, lineContent_);
        };
        friend void from_json(const Darabonba::Json& j, Contents& obj) { 
          DARABONBA_PTR_FROM_JSON(LineContent, lineContent_);
        };
        Contents() = default ;
        Contents(const Contents &) = default ;
        Contents(Contents &&) = default ;
        Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contents() = default ;
        Contents& operator=(const Contents &) = default ;
        Contents& operator=(Contents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lineContent_ == nullptr; };
        // lineContent Field Functions 
        bool hasLineContent() const { return this->lineContent_ != nullptr;};
        void deleteLineContent() { this->lineContent_ = nullptr;};
        inline string getLineContent() const { DARABONBA_PTR_GET_DEFAULT(lineContent_, "") };
        inline Contents& setLineContent(string lineContent) { DARABONBA_PTR_SET_VALUE(lineContent_, lineContent) };


      protected:
        // Log line content.
        shared_ptr<string> lineContent_ {};
      };

      virtual bool empty() const override { return this->contents_ == nullptr
        && this->totalLength_ == nullptr; };
      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline const vector<ListLogContent::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<ListLogContent::Contents>) };
      inline vector<ListLogContent::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<ListLogContent::Contents>) };
      inline ListLogContent& setContents(const vector<ListLogContent::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
      inline ListLogContent& setContents(vector<ListLogContent::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


      // totalLength Field Functions 
      bool hasTotalLength() const { return this->totalLength_ != nullptr;};
      void deleteTotalLength() { this->totalLength_ = nullptr;};
      inline int64_t getTotalLength() const { DARABONBA_PTR_GET_DEFAULT(totalLength_, 0L) };
      inline ListLogContent& setTotalLength(int64_t totalLength) { DARABONBA_PTR_SET_VALUE(totalLength_, totalLength) };


    protected:
      // List of log line contents.
      shared_ptr<vector<ListLogContent::Contents>> contents_ {};
      // Total number of log lines.
      shared_ptr<int64_t> totalLength_ {};
    };

    virtual bool empty() const override { return this->listLogContent_ == nullptr
        && this->requestId_ == nullptr; };
    // listLogContent Field Functions 
    bool hasListLogContent() const { return this->listLogContent_ != nullptr;};
    void deleteListLogContent() { this->listLogContent_ = nullptr;};
    inline const ListLogContentsResponseBody::ListLogContent & getListLogContent() const { DARABONBA_PTR_GET_CONST(listLogContent_, ListLogContentsResponseBody::ListLogContent) };
    inline ListLogContentsResponseBody::ListLogContent getListLogContent() { DARABONBA_PTR_GET(listLogContent_, ListLogContentsResponseBody::ListLogContent) };
    inline ListLogContentsResponseBody& setListLogContent(const ListLogContentsResponseBody::ListLogContent & listLogContent) { DARABONBA_PTR_SET_VALUE(listLogContent_, listLogContent) };
    inline ListLogContentsResponseBody& setListLogContent(ListLogContentsResponseBody::ListLogContent && listLogContent) { DARABONBA_PTR_SET_RVALUE(listLogContent_, listLogContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Log content.
    shared_ptr<ListLogContentsResponseBody::ListLogContent> listLogContent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
