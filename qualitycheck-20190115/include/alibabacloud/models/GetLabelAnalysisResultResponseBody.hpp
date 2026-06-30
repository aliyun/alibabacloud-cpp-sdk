// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLABELANALYSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLABELANALYSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetLabelAnalysisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLabelAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLabelAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLabelAnalysisResultResponseBody() = default ;
    GetLabelAnalysisResultResponseBody(const GetLabelAnalysisResultResponseBody &) = default ;
    GetLabelAnalysisResultResponseBody(GetLabelAnalysisResultResponseBody &&) = default ;
    GetLabelAnalysisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLabelAnalysisResultResponseBody() = default ;
    GetLabelAnalysisResultResponseBody& operator=(const GetLabelAnalysisResultResponseBody &) = default ;
    GetLabelAnalysisResultResponseBody& operator=(GetLabelAnalysisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_TO_JSON(TyxmTurboCount, tyxmTurboCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_FROM_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_FROM_JSON(TyxmTurboCount, tyxmTurboCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(Children, children_);
          DARABONBA_PTR_TO_JSON(Remarks, remarks_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(Children, children_);
          DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Children : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Children& obj) { 
            DARABONBA_PTR_TO_JSON(Children, children_);
            DARABONBA_PTR_TO_JSON(Remarks, remarks_);
            DARABONBA_PTR_TO_JSON(TagName, tagName_);
          };
          friend void from_json(const Darabonba::Json& j, Children& obj) { 
            DARABONBA_PTR_FROM_JSON(Children, children_);
            DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
            DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          };
          Children() = default ;
          Children(const Children &) = default ;
          Children(Children &&) = default ;
          Children(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Children() = default ;
          Children& operator=(const Children &) = default ;
          Children& operator=(Children &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ChildrenItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChildrenItem& obj) { 
              DARABONBA_PTR_TO_JSON(Children, children_);
              DARABONBA_PTR_TO_JSON(Remarks, remarks_);
              DARABONBA_PTR_TO_JSON(TagName, tagName_);
            };
            friend void from_json(const Darabonba::Json& j, ChildrenItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Children, children_);
              DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
              DARABONBA_PTR_FROM_JSON(TagName, tagName_);
            };
            ChildrenItem() = default ;
            ChildrenItem(const ChildrenItem &) = default ;
            ChildrenItem(ChildrenItem &&) = default ;
            ChildrenItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChildrenItem() = default ;
            ChildrenItem& operator=(const ChildrenItem &) = default ;
            ChildrenItem& operator=(ChildrenItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Children : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Children& obj) { 
                DARABONBA_PTR_TO_JSON(Children, children_);
                DARABONBA_PTR_TO_JSON(Remarks, remarks_);
                DARABONBA_PTR_TO_JSON(TagName, tagName_);
              };
              friend void from_json(const Darabonba::Json& j, Children& obj) { 
                DARABONBA_PTR_FROM_JSON(Children, children_);
                DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
                DARABONBA_PTR_FROM_JSON(TagName, tagName_);
              };
              Children() = default ;
              Children(const Children &) = default ;
              Children(Children &&) = default ;
              Children(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Children() = default ;
              Children& operator=(const Children &) = default ;
              Children& operator=(Children &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ChildrenItem : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ChildrenItem& obj) { 
                  DARABONBA_PTR_TO_JSON(Remarks, remarks_);
                  DARABONBA_PTR_TO_JSON(TagName, tagName_);
                };
                friend void from_json(const Darabonba::Json& j, ChildrenItem& obj) { 
                  DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
                  DARABONBA_PTR_FROM_JSON(TagName, tagName_);
                };
                ChildrenItem() = default ;
                ChildrenItem(const ChildrenItem &) = default ;
                ChildrenItem(ChildrenItem &&) = default ;
                ChildrenItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ChildrenItem() = default ;
                ChildrenItem& operator=(const ChildrenItem &) = default ;
                ChildrenItem& operator=(ChildrenItem &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->remarks_ == nullptr
        && this->tagName_ == nullptr; };
                // remarks Field Functions 
                bool hasRemarks() const { return this->remarks_ != nullptr;};
                void deleteRemarks() { this->remarks_ = nullptr;};
                inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
                inline ChildrenItem& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


                // tagName Field Functions 
                bool hasTagName() const { return this->tagName_ != nullptr;};
                void deleteTagName() { this->tagName_ = nullptr;};
                inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
                inline ChildrenItem& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


              protected:
                // The description of the tag analysis.
                shared_ptr<string> remarks_ {};
                // The tag name.
                shared_ptr<string> tagName_ {};
              };

              virtual bool empty() const override { return this->children_ == nullptr
        && this->remarks_ == nullptr && this->tagName_ == nullptr; };
              // children Field Functions 
              bool hasChildren() const { return this->children_ != nullptr;};
              void deleteChildren() { this->children_ = nullptr;};
              inline const vector<Children::ChildrenItem> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Children::ChildrenItem>) };
              inline vector<Children::ChildrenItem> getChildren() { DARABONBA_PTR_GET(children_, vector<Children::ChildrenItem>) };
              inline Children& setChildren(const vector<Children::ChildrenItem> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
              inline Children& setChildren(vector<Children::ChildrenItem> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


              // remarks Field Functions 
              bool hasRemarks() const { return this->remarks_ != nullptr;};
              void deleteRemarks() { this->remarks_ = nullptr;};
              inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
              inline Children& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


              // tagName Field Functions 
              bool hasTagName() const { return this->tagName_ != nullptr;};
              void deleteTagName() { this->tagName_ = nullptr;};
              inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
              inline Children& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


            protected:
              // The list of child nodes.
              shared_ptr<vector<Children::ChildrenItem>> children_ {};
              // The description of the tag analysis.
              shared_ptr<string> remarks_ {};
              // The tag name.
              shared_ptr<string> tagName_ {};
            };

            virtual bool empty() const override { return this->children_ == nullptr
        && this->remarks_ == nullptr && this->tagName_ == nullptr; };
            // children Field Functions 
            bool hasChildren() const { return this->children_ != nullptr;};
            void deleteChildren() { this->children_ = nullptr;};
            inline const vector<ChildrenItem::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<ChildrenItem::Children>) };
            inline vector<ChildrenItem::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<ChildrenItem::Children>) };
            inline ChildrenItem& setChildren(const vector<ChildrenItem::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
            inline ChildrenItem& setChildren(vector<ChildrenItem::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


            // remarks Field Functions 
            bool hasRemarks() const { return this->remarks_ != nullptr;};
            void deleteRemarks() { this->remarks_ = nullptr;};
            inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
            inline ChildrenItem& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


            // tagName Field Functions 
            bool hasTagName() const { return this->tagName_ != nullptr;};
            void deleteTagName() { this->tagName_ = nullptr;};
            inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
            inline ChildrenItem& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


          protected:
            // The list of child nodes.
            shared_ptr<vector<ChildrenItem::Children>> children_ {};
            // The description of the tag analysis.
            shared_ptr<string> remarks_ {};
            // The tag name.
            shared_ptr<string> tagName_ {};
          };

          virtual bool empty() const override { return this->children_ == nullptr
        && this->remarks_ == nullptr && this->tagName_ == nullptr; };
          // children Field Functions 
          bool hasChildren() const { return this->children_ != nullptr;};
          void deleteChildren() { this->children_ = nullptr;};
          inline const vector<Children::ChildrenItem> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Children::ChildrenItem>) };
          inline vector<Children::ChildrenItem> getChildren() { DARABONBA_PTR_GET(children_, vector<Children::ChildrenItem>) };
          inline Children& setChildren(const vector<Children::ChildrenItem> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
          inline Children& setChildren(vector<Children::ChildrenItem> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


          // remarks Field Functions 
          bool hasRemarks() const { return this->remarks_ != nullptr;};
          void deleteRemarks() { this->remarks_ = nullptr;};
          inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
          inline Children& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


          // tagName Field Functions 
          bool hasTagName() const { return this->tagName_ != nullptr;};
          void deleteTagName() { this->tagName_ = nullptr;};
          inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
          inline Children& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        protected:
          // The list of child nodes.
          shared_ptr<vector<Children::ChildrenItem>> children_ {};
          // The description of the tag analysis.
          shared_ptr<string> remarks_ {};
          // The tag name.
          shared_ptr<string> tagName_ {};
        };

        virtual bool empty() const override { return this->children_ == nullptr
        && this->remarks_ == nullptr && this->tagName_ == nullptr; };
        // children Field Functions 
        bool hasChildren() const { return this->children_ != nullptr;};
        void deleteChildren() { this->children_ = nullptr;};
        inline const vector<TagList::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<TagList::Children>) };
        inline vector<TagList::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<TagList::Children>) };
        inline TagList& setChildren(const vector<TagList::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
        inline TagList& setChildren(vector<TagList::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


        // remarks Field Functions 
        bool hasRemarks() const { return this->remarks_ != nullptr;};
        void deleteRemarks() { this->remarks_ = nullptr;};
        inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
        inline TagList& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        // The list of child nodes.
        shared_ptr<vector<TagList::Children>> children_ {};
        // The description of the tag analysis.
        shared_ptr<string> remarks_ {};
        // The tag name.
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->tagList_ == nullptr && this->totalTokens_ == nullptr && this->tyxmPlusCount_ == nullptr && this->tyxmTurboCount_ == nullptr; };
      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline Data& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline Data& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<Data::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Data::TagList>) };
      inline vector<Data::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<Data::TagList>) };
      inline Data& setTagList(const vector<Data::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline Data& setTagList(vector<Data::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
      inline Data& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // tyxmPlusCount Field Functions 
      bool hasTyxmPlusCount() const { return this->tyxmPlusCount_ != nullptr;};
      void deleteTyxmPlusCount() { this->tyxmPlusCount_ = nullptr;};
      inline int64_t getTyxmPlusCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmPlusCount_, 0L) };
      inline Data& setTyxmPlusCount(int64_t tyxmPlusCount) { DARABONBA_PTR_SET_VALUE(tyxmPlusCount_, tyxmPlusCount) };


      // tyxmTurboCount Field Functions 
      bool hasTyxmTurboCount() const { return this->tyxmTurboCount_ != nullptr;};
      void deleteTyxmTurboCount() { this->tyxmTurboCount_ = nullptr;};
      inline int64_t getTyxmTurboCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmTurboCount_, 0L) };
      inline Data& setTyxmTurboCount(int64_t tyxmTurboCount) { DARABONBA_PTR_SET_VALUE(tyxmTurboCount_, tyxmTurboCount) };


    protected:
      // The total number of input tokens accumulated during this task.
      shared_ptr<int64_t> inputTokens_ {};
      // The total number of output tokens accumulated during this task.
      shared_ptr<int64_t> outputTokens_ {};
      // The tree-structured tag results.
      shared_ptr<vector<Data::TagList>> tagList_ {};
      // The total number of tokens accumulated during this task.
      shared_ptr<int64_t> totalTokens_ {};
      // The total number of Qwen-Plus model calls accumulated during this task.
      shared_ptr<int64_t> tyxmPlusCount_ {};
      // The total number of Qwen-Turbo model calls accumulated during this task.
      shared_ptr<int64_t> tyxmTurboCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLabelAnalysisResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLabelAnalysisResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLabelAnalysisResultResponseBody::Data) };
    inline GetLabelAnalysisResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLabelAnalysisResultResponseBody::Data) };
    inline GetLabelAnalysisResultResponseBody& setData(const GetLabelAnalysisResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLabelAnalysisResultResponseBody& setData(GetLabelAnalysisResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLabelAnalysisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLabelAnalysisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLabelAnalysisResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. **200** indicates success. Other values indicate failure. You can use this field to determine the cause of the failure.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<GetLabelAnalysisResultResponseBody::Data> data_ {};
    // The error message returned when the call fails.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
