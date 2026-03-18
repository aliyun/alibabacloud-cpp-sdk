// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantBookDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantBookDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantBookDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListTextbookAssistantBookDirectoriesResponseBody() = default ;
    ListTextbookAssistantBookDirectoriesResponseBody(const ListTextbookAssistantBookDirectoriesResponseBody &) = default ;
    ListTextbookAssistantBookDirectoriesResponseBody(ListTextbookAssistantBookDirectoriesResponseBody &&) = default ;
    ListTextbookAssistantBookDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantBookDirectoriesResponseBody() = default ;
    ListTextbookAssistantBookDirectoriesResponseBody& operator=(const ListTextbookAssistantBookDirectoriesResponseBody &) = default ;
    ListTextbookAssistantBookDirectoriesResponseBody& operator=(ListTextbookAssistantBookDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(directoryTree, directoryTree_);
        DARABONBA_PTR_TO_JSON(editionInfo, editionInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(directoryTree, directoryTree_);
        DARABONBA_PTR_FROM_JSON(editionInfo, editionInfo_);
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
      class EditionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EditionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(bookId, bookId_);
          DARABONBA_PTR_TO_JSON(bookVolume, bookVolume_);
          DARABONBA_PTR_TO_JSON(edition, edition_);
          DARABONBA_PTR_TO_JSON(grade, grade_);
          DARABONBA_PTR_TO_JSON(impression, impression_);
          DARABONBA_PTR_TO_JSON(isbn, isbn_);
          DARABONBA_PTR_TO_JSON(publisher, publisher_);
          DARABONBA_PTR_TO_JSON(subject, subject_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, EditionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(bookId, bookId_);
          DARABONBA_PTR_FROM_JSON(bookVolume, bookVolume_);
          DARABONBA_PTR_FROM_JSON(edition, edition_);
          DARABONBA_PTR_FROM_JSON(grade, grade_);
          DARABONBA_PTR_FROM_JSON(impression, impression_);
          DARABONBA_PTR_FROM_JSON(isbn, isbn_);
          DARABONBA_PTR_FROM_JSON(publisher, publisher_);
          DARABONBA_PTR_FROM_JSON(subject, subject_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        EditionInfo() = default ;
        EditionInfo(const EditionInfo &) = default ;
        EditionInfo(EditionInfo &&) = default ;
        EditionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EditionInfo() = default ;
        EditionInfo& operator=(const EditionInfo &) = default ;
        EditionInfo& operator=(EditionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bookId_ == nullptr
        && this->bookVolume_ == nullptr && this->edition_ == nullptr && this->grade_ == nullptr && this->impression_ == nullptr && this->isbn_ == nullptr
        && this->publisher_ == nullptr && this->subject_ == nullptr && this->version_ == nullptr; };
        // bookId Field Functions 
        bool hasBookId() const { return this->bookId_ != nullptr;};
        void deleteBookId() { this->bookId_ = nullptr;};
        inline string getBookId() const { DARABONBA_PTR_GET_DEFAULT(bookId_, "") };
        inline EditionInfo& setBookId(string bookId) { DARABONBA_PTR_SET_VALUE(bookId_, bookId) };


        // bookVolume Field Functions 
        bool hasBookVolume() const { return this->bookVolume_ != nullptr;};
        void deleteBookVolume() { this->bookVolume_ = nullptr;};
        inline string getBookVolume() const { DARABONBA_PTR_GET_DEFAULT(bookVolume_, "") };
        inline EditionInfo& setBookVolume(string bookVolume) { DARABONBA_PTR_SET_VALUE(bookVolume_, bookVolume) };


        // edition Field Functions 
        bool hasEdition() const { return this->edition_ != nullptr;};
        void deleteEdition() { this->edition_ = nullptr;};
        inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
        inline EditionInfo& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


        // grade Field Functions 
        bool hasGrade() const { return this->grade_ != nullptr;};
        void deleteGrade() { this->grade_ = nullptr;};
        inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
        inline EditionInfo& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


        // impression Field Functions 
        bool hasImpression() const { return this->impression_ != nullptr;};
        void deleteImpression() { this->impression_ = nullptr;};
        inline string getImpression() const { DARABONBA_PTR_GET_DEFAULT(impression_, "") };
        inline EditionInfo& setImpression(string impression) { DARABONBA_PTR_SET_VALUE(impression_, impression) };


        // isbn Field Functions 
        bool hasIsbn() const { return this->isbn_ != nullptr;};
        void deleteIsbn() { this->isbn_ = nullptr;};
        inline string getIsbn() const { DARABONBA_PTR_GET_DEFAULT(isbn_, "") };
        inline EditionInfo& setIsbn(string isbn) { DARABONBA_PTR_SET_VALUE(isbn_, isbn) };


        // publisher Field Functions 
        bool hasPublisher() const { return this->publisher_ != nullptr;};
        void deletePublisher() { this->publisher_ = nullptr;};
        inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
        inline EditionInfo& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline EditionInfo& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline EditionInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> bookId_ {};
        shared_ptr<string> bookVolume_ {};
        shared_ptr<string> edition_ {};
        shared_ptr<string> grade_ {};
        shared_ptr<string> impression_ {};
        shared_ptr<string> isbn_ {};
        shared_ptr<string> publisher_ {};
        shared_ptr<string> subject_ {};
        shared_ptr<string> version_ {};
      };

      class DirectoryTree : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectoryTree& obj) { 
          DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
          DARABONBA_PTR_TO_JSON(directoryName, directoryName_);
          DARABONBA_PTR_TO_JSON(topic, topic_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, DirectoryTree& obj) { 
          DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
          DARABONBA_PTR_FROM_JSON(directoryName, directoryName_);
          DARABONBA_PTR_FROM_JSON(topic, topic_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
        };
        DirectoryTree() = default ;
        DirectoryTree(const DirectoryTree &) = default ;
        DirectoryTree(DirectoryTree &&) = default ;
        DirectoryTree(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectoryTree() = default ;
        DirectoryTree& operator=(const DirectoryTree &) = default ;
        DirectoryTree& operator=(DirectoryTree &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Unit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Unit& obj) { 
            DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
            DARABONBA_PTR_TO_JSON(directoryName, directoryName_);
            DARABONBA_PTR_TO_JSON(section, section_);
            DARABONBA_PTR_TO_JSON(topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, Unit& obj) { 
            DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
            DARABONBA_PTR_FROM_JSON(directoryName, directoryName_);
            DARABONBA_PTR_FROM_JSON(section, section_);
            DARABONBA_PTR_FROM_JSON(topic, topic_);
          };
          Unit() = default ;
          Unit(const Unit &) = default ;
          Unit(Unit &&) = default ;
          Unit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Unit() = default ;
          Unit& operator=(const Unit &) = default ;
          Unit& operator=(Unit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Topic : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Topic& obj) { 
              DARABONBA_PTR_TO_JSON(labelId, labelId_);
              DARABONBA_PTR_TO_JSON(labelName, labelName_);
            };
            friend void from_json(const Darabonba::Json& j, Topic& obj) { 
              DARABONBA_PTR_FROM_JSON(labelId, labelId_);
              DARABONBA_PTR_FROM_JSON(labelName, labelName_);
            };
            Topic() = default ;
            Topic(const Topic &) = default ;
            Topic(Topic &&) = default ;
            Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Topic() = default ;
            Topic& operator=(const Topic &) = default ;
            Topic& operator=(Topic &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->labelId_ == nullptr
        && this->labelName_ == nullptr; };
            // labelId Field Functions 
            bool hasLabelId() const { return this->labelId_ != nullptr;};
            void deleteLabelId() { this->labelId_ = nullptr;};
            inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
            inline Topic& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


            // labelName Field Functions 
            bool hasLabelName() const { return this->labelName_ != nullptr;};
            void deleteLabelName() { this->labelName_ = nullptr;};
            inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
            inline Topic& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


          protected:
            shared_ptr<string> labelId_ {};
            shared_ptr<string> labelName_ {};
          };

          class Section : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Section& obj) { 
              DARABONBA_ANY_TO_JSON(children, children_);
              DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
              DARABONBA_PTR_TO_JSON(directoryName, directoryName_);
              DARABONBA_PTR_TO_JSON(topic, topic_);
            };
            friend void from_json(const Darabonba::Json& j, Section& obj) { 
              DARABONBA_ANY_FROM_JSON(children, children_);
              DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
              DARABONBA_PTR_FROM_JSON(directoryName, directoryName_);
              DARABONBA_PTR_FROM_JSON(topic, topic_);
            };
            Section() = default ;
            Section(const Section &) = default ;
            Section(Section &&) = default ;
            Section(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Section() = default ;
            Section& operator=(const Section &) = default ;
            Section& operator=(Section &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Topic : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Topic& obj) { 
                DARABONBA_PTR_TO_JSON(labelId, labelId_);
                DARABONBA_PTR_TO_JSON(labelName, labelName_);
              };
              friend void from_json(const Darabonba::Json& j, Topic& obj) { 
                DARABONBA_PTR_FROM_JSON(labelId, labelId_);
                DARABONBA_PTR_FROM_JSON(labelName, labelName_);
              };
              Topic() = default ;
              Topic(const Topic &) = default ;
              Topic(Topic &&) = default ;
              Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Topic() = default ;
              Topic& operator=(const Topic &) = default ;
              Topic& operator=(Topic &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->labelId_ == nullptr
        && this->labelName_ == nullptr; };
              // labelId Field Functions 
              bool hasLabelId() const { return this->labelId_ != nullptr;};
              void deleteLabelId() { this->labelId_ = nullptr;};
              inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
              inline Topic& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


              // labelName Field Functions 
              bool hasLabelName() const { return this->labelName_ != nullptr;};
              void deleteLabelName() { this->labelName_ = nullptr;};
              inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
              inline Topic& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


            protected:
              shared_ptr<string> labelId_ {};
              shared_ptr<string> labelName_ {};
            };

            virtual bool empty() const override { return this->children_ == nullptr
        && this->directoryId_ == nullptr && this->directoryName_ == nullptr && this->topic_ == nullptr; };
            // children Field Functions 
            bool hasChildren() const { return this->children_ != nullptr;};
            void deleteChildren() { this->children_ = nullptr;};
            inline             const Darabonba::Json & getChildren() const { DARABONBA_GET(children_) };
            Darabonba::Json & getChildren() { DARABONBA_GET(children_) };
            inline Section& setChildren(const Darabonba::Json & children) { DARABONBA_SET_VALUE(children_, children) };
            inline Section& setChildren(Darabonba::Json && children) { DARABONBA_SET_RVALUE(children_, children) };


            // directoryId Field Functions 
            bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
            void deleteDirectoryId() { this->directoryId_ = nullptr;};
            inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
            inline Section& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


            // directoryName Field Functions 
            bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
            void deleteDirectoryName() { this->directoryName_ = nullptr;};
            inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
            inline Section& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


            // topic Field Functions 
            bool hasTopic() const { return this->topic_ != nullptr;};
            void deleteTopic() { this->topic_ = nullptr;};
            inline const vector<Section::Topic> & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, vector<Section::Topic>) };
            inline vector<Section::Topic> getTopic() { DARABONBA_PTR_GET(topic_, vector<Section::Topic>) };
            inline Section& setTopic(const vector<Section::Topic> & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
            inline Section& setTopic(vector<Section::Topic> && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


          protected:
            Darabonba::Json children_ {};
            shared_ptr<string> directoryId_ {};
            shared_ptr<string> directoryName_ {};
            shared_ptr<vector<Section::Topic>> topic_ {};
          };

          virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->directoryName_ == nullptr && this->section_ == nullptr && this->topic_ == nullptr; };
          // directoryId Field Functions 
          bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
          void deleteDirectoryId() { this->directoryId_ = nullptr;};
          inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
          inline Unit& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


          // directoryName Field Functions 
          bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
          void deleteDirectoryName() { this->directoryName_ = nullptr;};
          inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
          inline Unit& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


          // section Field Functions 
          bool hasSection() const { return this->section_ != nullptr;};
          void deleteSection() { this->section_ = nullptr;};
          inline const vector<Unit::Section> & getSection() const { DARABONBA_PTR_GET_CONST(section_, vector<Unit::Section>) };
          inline vector<Unit::Section> getSection() { DARABONBA_PTR_GET(section_, vector<Unit::Section>) };
          inline Unit& setSection(const vector<Unit::Section> & section) { DARABONBA_PTR_SET_VALUE(section_, section) };
          inline Unit& setSection(vector<Unit::Section> && section) { DARABONBA_PTR_SET_RVALUE(section_, section) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline const vector<Unit::Topic> & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, vector<Unit::Topic>) };
          inline vector<Unit::Topic> getTopic() { DARABONBA_PTR_GET(topic_, vector<Unit::Topic>) };
          inline Unit& setTopic(const vector<Unit::Topic> & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
          inline Unit& setTopic(vector<Unit::Topic> && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        protected:
          shared_ptr<string> directoryId_ {};
          shared_ptr<string> directoryName_ {};
          shared_ptr<vector<Unit::Section>> section_ {};
          shared_ptr<vector<Unit::Topic>> topic_ {};
        };

        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(labelId, labelId_);
            DARABONBA_PTR_TO_JSON(labelName, labelName_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(labelId, labelId_);
            DARABONBA_PTR_FROM_JSON(labelName, labelName_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->labelId_ == nullptr
        && this->labelName_ == nullptr; };
          // labelId Field Functions 
          bool hasLabelId() const { return this->labelId_ != nullptr;};
          void deleteLabelId() { this->labelId_ = nullptr;};
          inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
          inline Topic& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


          // labelName Field Functions 
          bool hasLabelName() const { return this->labelName_ != nullptr;};
          void deleteLabelName() { this->labelName_ = nullptr;};
          inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
          inline Topic& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


        protected:
          shared_ptr<string> labelId_ {};
          shared_ptr<string> labelName_ {};
        };

        virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->directoryName_ == nullptr && this->topic_ == nullptr && this->unit_ == nullptr; };
        // directoryId Field Functions 
        bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
        void deleteDirectoryId() { this->directoryId_ = nullptr;};
        inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
        inline DirectoryTree& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


        // directoryName Field Functions 
        bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
        void deleteDirectoryName() { this->directoryName_ = nullptr;};
        inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
        inline DirectoryTree& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const vector<DirectoryTree::Topic> & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, vector<DirectoryTree::Topic>) };
        inline vector<DirectoryTree::Topic> getTopic() { DARABONBA_PTR_GET(topic_, vector<DirectoryTree::Topic>) };
        inline DirectoryTree& setTopic(const vector<DirectoryTree::Topic> & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline DirectoryTree& setTopic(vector<DirectoryTree::Topic> && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline const vector<DirectoryTree::Unit> & getUnit() const { DARABONBA_PTR_GET_CONST(unit_, vector<DirectoryTree::Unit>) };
        inline vector<DirectoryTree::Unit> getUnit() { DARABONBA_PTR_GET(unit_, vector<DirectoryTree::Unit>) };
        inline DirectoryTree& setUnit(const vector<DirectoryTree::Unit> & unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };
        inline DirectoryTree& setUnit(vector<DirectoryTree::Unit> && unit) { DARABONBA_PTR_SET_RVALUE(unit_, unit) };


      protected:
        shared_ptr<string> directoryId_ {};
        shared_ptr<string> directoryName_ {};
        shared_ptr<vector<DirectoryTree::Topic>> topic_ {};
        shared_ptr<vector<DirectoryTree::Unit>> unit_ {};
      };

      virtual bool empty() const override { return this->directoryTree_ == nullptr
        && this->editionInfo_ == nullptr; };
      // directoryTree Field Functions 
      bool hasDirectoryTree() const { return this->directoryTree_ != nullptr;};
      void deleteDirectoryTree() { this->directoryTree_ = nullptr;};
      inline const vector<Data::DirectoryTree> & getDirectoryTree() const { DARABONBA_PTR_GET_CONST(directoryTree_, vector<Data::DirectoryTree>) };
      inline vector<Data::DirectoryTree> getDirectoryTree() { DARABONBA_PTR_GET(directoryTree_, vector<Data::DirectoryTree>) };
      inline Data& setDirectoryTree(const vector<Data::DirectoryTree> & directoryTree) { DARABONBA_PTR_SET_VALUE(directoryTree_, directoryTree) };
      inline Data& setDirectoryTree(vector<Data::DirectoryTree> && directoryTree) { DARABONBA_PTR_SET_RVALUE(directoryTree_, directoryTree) };


      // editionInfo Field Functions 
      bool hasEditionInfo() const { return this->editionInfo_ != nullptr;};
      void deleteEditionInfo() { this->editionInfo_ = nullptr;};
      inline const Data::EditionInfo & getEditionInfo() const { DARABONBA_PTR_GET_CONST(editionInfo_, Data::EditionInfo) };
      inline Data::EditionInfo getEditionInfo() { DARABONBA_PTR_GET(editionInfo_, Data::EditionInfo) };
      inline Data& setEditionInfo(const Data::EditionInfo & editionInfo) { DARABONBA_PTR_SET_VALUE(editionInfo_, editionInfo) };
      inline Data& setEditionInfo(Data::EditionInfo && editionInfo) { DARABONBA_PTR_SET_RVALUE(editionInfo_, editionInfo) };


    protected:
      shared_ptr<vector<Data::DirectoryTree>> directoryTree_ {};
      shared_ptr<Data::EditionInfo> editionInfo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTextbookAssistantBookDirectoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTextbookAssistantBookDirectoriesResponseBody::Data) };
    inline ListTextbookAssistantBookDirectoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTextbookAssistantBookDirectoriesResponseBody::Data) };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setData(const ListTextbookAssistantBookDirectoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setData(ListTextbookAssistantBookDirectoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTextbookAssistantBookDirectoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListTextbookAssistantBookDirectoriesResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
