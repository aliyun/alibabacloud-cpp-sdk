// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCateContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCateContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListCateContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListCateContentResponseBody() = default ;
    ListCateContentResponseBody(const ListCateContentResponseBody &) = default ;
    ListCateContentResponseBody(ListCateContentResponseBody &&) = default ;
    ListCateContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCateContentResponseBody() = default ;
    ListCateContentResponseBody& operator=(const ListCateContentResponseBody &) = default ;
    ListCateContentResponseBody& operator=(ListCateContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_TO_JSON(OpenDataItemList, openDataItemList_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_FROM_JSON(OpenDataItemList, openDataItemList_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OpenDataItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpenDataItemList& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(Audition, audition_);
          DARABONBA_PTR_TO_JSON(Authors, authors_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Charge, charge_);
          DARABONBA_PTR_TO_JSON(CommCateId, commCateId_);
          DARABONBA_PTR_TO_JSON(Cover, cover_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
          DARABONBA_PTR_TO_JSON(ItemType, itemType_);
          DARABONBA_PTR_TO_JSON(RawId, rawId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Valid, valid_);
          DARABONBA_PTR_TO_JSON(id, id_);
        };
        friend void from_json(const Darabonba::Json& j, OpenDataItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(Audition, audition_);
          DARABONBA_PTR_FROM_JSON(Authors, authors_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Charge, charge_);
          DARABONBA_PTR_FROM_JSON(CommCateId, commCateId_);
          DARABONBA_PTR_FROM_JSON(Cover, cover_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
          DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
          DARABONBA_PTR_FROM_JSON(RawId, rawId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Valid, valid_);
          DARABONBA_PTR_FROM_JSON(id, id_);
        };
        OpenDataItemList() = default ;
        OpenDataItemList(const OpenDataItemList &) = default ;
        OpenDataItemList(OpenDataItemList &&) = default ;
        OpenDataItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpenDataItemList() = default ;
        OpenDataItemList& operator=(const OpenDataItemList &) = default ;
        OpenDataItemList& operator=(OpenDataItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cover : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cover& obj) { 
            DARABONBA_PTR_TO_JSON(Img, img_);
            DARABONBA_PTR_TO_JSON(Large, large_);
            DARABONBA_PTR_TO_JSON(Mediam, mediam_);
            DARABONBA_PTR_TO_JSON(Medium, medium_);
            DARABONBA_PTR_TO_JSON(Small, small_);
            DARABONBA_PTR_TO_JSON(canResize, canResize_);
          };
          friend void from_json(const Darabonba::Json& j, Cover& obj) { 
            DARABONBA_PTR_FROM_JSON(Img, img_);
            DARABONBA_PTR_FROM_JSON(Large, large_);
            DARABONBA_PTR_FROM_JSON(Mediam, mediam_);
            DARABONBA_PTR_FROM_JSON(Medium, medium_);
            DARABONBA_PTR_FROM_JSON(Small, small_);
            DARABONBA_PTR_FROM_JSON(canResize, canResize_);
          };
          Cover() = default ;
          Cover(const Cover &) = default ;
          Cover(Cover &&) = default ;
          Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cover() = default ;
          Cover& operator=(const Cover &) = default ;
          Cover& operator=(Cover &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->img_ == nullptr
        && this->large_ == nullptr && this->mediam_ == nullptr && this->medium_ == nullptr && this->small_ == nullptr && this->canResize_ == nullptr; };
          // img Field Functions 
          bool hasImg() const { return this->img_ != nullptr;};
          void deleteImg() { this->img_ = nullptr;};
          inline string getImg() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
          inline Cover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


          // large Field Functions 
          bool hasLarge() const { return this->large_ != nullptr;};
          void deleteLarge() { this->large_ = nullptr;};
          inline string getLarge() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
          inline Cover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


          // mediam Field Functions 
          bool hasMediam() const { return this->mediam_ != nullptr;};
          void deleteMediam() { this->mediam_ = nullptr;};
          inline string getMediam() const { DARABONBA_PTR_GET_DEFAULT(mediam_, "") };
          inline Cover& setMediam(string mediam) { DARABONBA_PTR_SET_VALUE(mediam_, mediam) };


          // medium Field Functions 
          bool hasMedium() const { return this->medium_ != nullptr;};
          void deleteMedium() { this->medium_ = nullptr;};
          inline string getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
          inline Cover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


          // small Field Functions 
          bool hasSmall() const { return this->small_ != nullptr;};
          void deleteSmall() { this->small_ = nullptr;};
          inline string getSmall() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
          inline Cover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


          // canResize Field Functions 
          bool hasCanResize() const { return this->canResize_ != nullptr;};
          void deleteCanResize() { this->canResize_ = nullptr;};
          inline bool getCanResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
          inline Cover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


        protected:
          // Default image
          shared_ptr<string> img_ {};
          // Large image
          shared_ptr<string> large_ {};
          // Medium image (Deprecated)
          shared_ptr<string> mediam_ {};
          // Medium image
          shared_ptr<string> medium_ {};
          // Small image
          shared_ptr<string> small_ {};
          // Indicates whether cropping can be performed using OSS rules.
          shared_ptr<bool> canResize_ {};
        };

        class Authors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Authors& obj) { 
            DARABONBA_PTR_TO_JSON(AuthorTypes, authorTypes_);
            DARABONBA_PTR_TO_JSON(Cover, cover_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Gender, gender_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Online, online_);
            DARABONBA_PTR_TO_JSON(RawId, rawId_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Authors& obj) { 
            DARABONBA_PTR_FROM_JSON(AuthorTypes, authorTypes_);
            DARABONBA_PTR_FROM_JSON(Cover, cover_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Gender, gender_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Online, online_);
            DARABONBA_PTR_FROM_JSON(RawId, rawId_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Authors() = default ;
          Authors(const Authors &) = default ;
          Authors(Authors &&) = default ;
          Authors(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Authors() = default ;
          Authors& operator=(const Authors &) = default ;
          Authors& operator=(Authors &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Cover : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Cover& obj) { 
              DARABONBA_PTR_TO_JSON(CanResize, canResize_);
              DARABONBA_PTR_TO_JSON(Img, img_);
              DARABONBA_PTR_TO_JSON(Large, large_);
              DARABONBA_PTR_TO_JSON(Mediam, mediam_);
              DARABONBA_PTR_TO_JSON(Medium, medium_);
              DARABONBA_PTR_TO_JSON(Small, small_);
            };
            friend void from_json(const Darabonba::Json& j, Cover& obj) { 
              DARABONBA_PTR_FROM_JSON(CanResize, canResize_);
              DARABONBA_PTR_FROM_JSON(Img, img_);
              DARABONBA_PTR_FROM_JSON(Large, large_);
              DARABONBA_PTR_FROM_JSON(Mediam, mediam_);
              DARABONBA_PTR_FROM_JSON(Medium, medium_);
              DARABONBA_PTR_FROM_JSON(Small, small_);
            };
            Cover() = default ;
            Cover(const Cover &) = default ;
            Cover(Cover &&) = default ;
            Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Cover() = default ;
            Cover& operator=(const Cover &) = default ;
            Cover& operator=(Cover &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->canResize_ == nullptr
        && this->img_ == nullptr && this->large_ == nullptr && this->mediam_ == nullptr && this->medium_ == nullptr && this->small_ == nullptr; };
            // canResize Field Functions 
            bool hasCanResize() const { return this->canResize_ != nullptr;};
            void deleteCanResize() { this->canResize_ = nullptr;};
            inline bool getCanResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
            inline Cover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


            // img Field Functions 
            bool hasImg() const { return this->img_ != nullptr;};
            void deleteImg() { this->img_ = nullptr;};
            inline string getImg() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
            inline Cover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


            // large Field Functions 
            bool hasLarge() const { return this->large_ != nullptr;};
            void deleteLarge() { this->large_ = nullptr;};
            inline string getLarge() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
            inline Cover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


            // mediam Field Functions 
            bool hasMediam() const { return this->mediam_ != nullptr;};
            void deleteMediam() { this->mediam_ = nullptr;};
            inline string getMediam() const { DARABONBA_PTR_GET_DEFAULT(mediam_, "") };
            inline Cover& setMediam(string mediam) { DARABONBA_PTR_SET_VALUE(mediam_, mediam) };


            // medium Field Functions 
            bool hasMedium() const { return this->medium_ != nullptr;};
            void deleteMedium() { this->medium_ = nullptr;};
            inline string getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
            inline Cover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


            // small Field Functions 
            bool hasSmall() const { return this->small_ != nullptr;};
            void deleteSmall() { this->small_ = nullptr;};
            inline string getSmall() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
            inline Cover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


          protected:
            // Indicates whether the image can be cropped using OSS rules.
            shared_ptr<bool> canResize_ {};
            // default image
            shared_ptr<string> img_ {};
            // Large image
            shared_ptr<string> large_ {};
            // Medium image (Deprecated)
            shared_ptr<string> mediam_ {};
            // medium image
            shared_ptr<string> medium_ {};
            // small image
            shared_ptr<string> small_ {};
          };

          virtual bool empty() const override { return this->authorTypes_ == nullptr
        && this->cover_ == nullptr && this->description_ == nullptr && this->gender_ == nullptr && this->id_ == nullptr && this->online_ == nullptr
        && this->rawId_ == nullptr && this->source_ == nullptr && this->title_ == nullptr; };
          // authorTypes Field Functions 
          bool hasAuthorTypes() const { return this->authorTypes_ != nullptr;};
          void deleteAuthorTypes() { this->authorTypes_ = nullptr;};
          inline const vector<string> & getAuthorTypes() const { DARABONBA_PTR_GET_CONST(authorTypes_, vector<string>) };
          inline vector<string> getAuthorTypes() { DARABONBA_PTR_GET(authorTypes_, vector<string>) };
          inline Authors& setAuthorTypes(const vector<string> & authorTypes) { DARABONBA_PTR_SET_VALUE(authorTypes_, authorTypes) };
          inline Authors& setAuthorTypes(vector<string> && authorTypes) { DARABONBA_PTR_SET_RVALUE(authorTypes_, authorTypes) };


          // cover Field Functions 
          bool hasCover() const { return this->cover_ != nullptr;};
          void deleteCover() { this->cover_ = nullptr;};
          inline const Authors::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, Authors::Cover) };
          inline Authors::Cover getCover() { DARABONBA_PTR_GET(cover_, Authors::Cover) };
          inline Authors& setCover(const Authors::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
          inline Authors& setCover(Authors::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Authors& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // gender Field Functions 
          bool hasGender() const { return this->gender_ != nullptr;};
          void deleteGender() { this->gender_ = nullptr;};
          inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
          inline Authors& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Authors& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // online Field Functions 
          bool hasOnline() const { return this->online_ != nullptr;};
          void deleteOnline() { this->online_ = nullptr;};
          inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
          inline Authors& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


          // rawId Field Functions 
          bool hasRawId() const { return this->rawId_ != nullptr;};
          void deleteRawId() { this->rawId_ = nullptr;};
          inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
          inline Authors& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Authors& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Authors& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // Author type
          shared_ptr<vector<string>> authorTypes_ {};
          // profile picture
          shared_ptr<Authors::Cover> cover_ {};
          // Author description
          shared_ptr<string> description_ {};
          // Gender
          shared_ptr<string> gender_ {};
          // Primary key ID of the author information
          shared_ptr<int64_t> id_ {};
          // Whether it is online
          shared_ptr<bool> online_ {};
          // third-party author ID
          shared_ptr<string> rawId_ {};
          // Source
          shared_ptr<string> source_ {};
          // Author title
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->audition_ == nullptr && this->authors_ == nullptr && this->category_ == nullptr && this->charge_ == nullptr && this->commCateId_ == nullptr
        && this->cover_ == nullptr && this->description_ == nullptr && this->hotScore_ == nullptr && this->itemType_ == nullptr && this->rawId_ == nullptr
        && this->source_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->valid_ == nullptr && this->id_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline const vector<string> & getAlias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
        inline vector<string> getAlias() { DARABONBA_PTR_GET(alias_, vector<string>) };
        inline OpenDataItemList& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
        inline OpenDataItemList& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


        // audition Field Functions 
        bool hasAudition() const { return this->audition_ != nullptr;};
        void deleteAudition() { this->audition_ = nullptr;};
        inline bool getAudition() const { DARABONBA_PTR_GET_DEFAULT(audition_, false) };
        inline OpenDataItemList& setAudition(bool audition) { DARABONBA_PTR_SET_VALUE(audition_, audition) };


        // authors Field Functions 
        bool hasAuthors() const { return this->authors_ != nullptr;};
        void deleteAuthors() { this->authors_ = nullptr;};
        inline const vector<OpenDataItemList::Authors> & getAuthors() const { DARABONBA_PTR_GET_CONST(authors_, vector<OpenDataItemList::Authors>) };
        inline vector<OpenDataItemList::Authors> getAuthors() { DARABONBA_PTR_GET(authors_, vector<OpenDataItemList::Authors>) };
        inline OpenDataItemList& setAuthors(const vector<OpenDataItemList::Authors> & authors) { DARABONBA_PTR_SET_VALUE(authors_, authors) };
        inline OpenDataItemList& setAuthors(vector<OpenDataItemList::Authors> && authors) { DARABONBA_PTR_SET_RVALUE(authors_, authors) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline OpenDataItemList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // charge Field Functions 
        bool hasCharge() const { return this->charge_ != nullptr;};
        void deleteCharge() { this->charge_ = nullptr;};
        inline bool getCharge() const { DARABONBA_PTR_GET_DEFAULT(charge_, false) };
        inline OpenDataItemList& setCharge(bool charge) { DARABONBA_PTR_SET_VALUE(charge_, charge) };


        // commCateId Field Functions 
        bool hasCommCateId() const { return this->commCateId_ != nullptr;};
        void deleteCommCateId() { this->commCateId_ = nullptr;};
        inline string getCommCateId() const { DARABONBA_PTR_GET_DEFAULT(commCateId_, "") };
        inline OpenDataItemList& setCommCateId(string commCateId) { DARABONBA_PTR_SET_VALUE(commCateId_, commCateId) };


        // cover Field Functions 
        bool hasCover() const { return this->cover_ != nullptr;};
        void deleteCover() { this->cover_ = nullptr;};
        inline const OpenDataItemList::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, OpenDataItemList::Cover) };
        inline OpenDataItemList::Cover getCover() { DARABONBA_PTR_GET(cover_, OpenDataItemList::Cover) };
        inline OpenDataItemList& setCover(const OpenDataItemList::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
        inline OpenDataItemList& setCover(OpenDataItemList::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OpenDataItemList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hotScore Field Functions 
        bool hasHotScore() const { return this->hotScore_ != nullptr;};
        void deleteHotScore() { this->hotScore_ = nullptr;};
        inline double getHotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0.0) };
        inline OpenDataItemList& setHotScore(double hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline OpenDataItemList& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // rawId Field Functions 
        bool hasRawId() const { return this->rawId_ != nullptr;};
        void deleteRawId() { this->rawId_ = nullptr;};
        inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
        inline OpenDataItemList& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline OpenDataItemList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline OpenDataItemList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OpenDataItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // valid Field Functions 
        bool hasValid() const { return this->valid_ != nullptr;};
        void deleteValid() { this->valid_ = nullptr;};
        inline string getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
        inline OpenDataItemList& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline OpenDataItemList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // Alias
        shared_ptr<vector<string>> alias_ {};
        // Is audition available
        shared_ptr<bool> audition_ {};
        // author information
        shared_ptr<vector<OpenDataItemList::Authors>> authors_ {};
        // Transform controlType based on the assigned public category
        shared_ptr<string> category_ {};
        // Whether it is charged
        shared_ptr<bool> charge_ {};
        // Category ID
        shared_ptr<string> commCateId_ {};
        // Album thumbnail image
        shared_ptr<OpenDataItemList::Cover> cover_ {};
        // Content description
        shared_ptr<string> description_ {};
        // Popularity score
        shared_ptr<double> hotScore_ {};
        // Type of content, such as music, audio, radio, jokes, etc.
        shared_ptr<string> itemType_ {};
        // Third-party ID of the album
        shared_ptr<string> rawId_ {};
        // Source
        shared_ptr<string> source_ {};
        // Title
        shared_ptr<string> title_ {};
        // Transform favoriteType based on the associated public category.
        shared_ptr<string> type_ {};
        // Indicates whether the content is playable.
        shared_ptr<string> valid_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
      };

      virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->openDataItemList_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPageNum Field Functions 
      bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
      void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
      inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
      inline Result& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


      // openDataItemList Field Functions 
      bool hasOpenDataItemList() const { return this->openDataItemList_ != nullptr;};
      void deleteOpenDataItemList() { this->openDataItemList_ = nullptr;};
      inline const vector<Result::OpenDataItemList> & getOpenDataItemList() const { DARABONBA_PTR_GET_CONST(openDataItemList_, vector<Result::OpenDataItemList>) };
      inline vector<Result::OpenDataItemList> getOpenDataItemList() { DARABONBA_PTR_GET(openDataItemList_, vector<Result::OpenDataItemList>) };
      inline Result& setOpenDataItemList(const vector<Result::OpenDataItemList> & openDataItemList) { DARABONBA_PTR_SET_VALUE(openDataItemList_, openDataItemList) };
      inline Result& setOpenDataItemList(vector<Result::OpenDataItemList> && openDataItemList) { DARABONBA_PTR_SET_RVALUE(openDataItemList_, openDataItemList) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Result& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // Current page number
      shared_ptr<int32_t> currentPageNum_ {};
      // Data information
      shared_ptr<vector<Result::OpenDataItemList>> openDataItemList_ {};
      // Number of records per page
      shared_ptr<int32_t> pageSize_ {};
      // Total number of records
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListCateContentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCateContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCateContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListCateContentResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListCateContentResponseBody::Result) };
    inline ListCateContentResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListCateContentResponseBody::Result) };
    inline ListCateContentResponseBody& setResult(const ListCateContentResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCateContentResponseBody& setResult(ListCateContentResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // code encoding
    shared_ptr<int32_t> code_ {};
    // message information
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Return Result
    shared_ptr<ListCateContentResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
