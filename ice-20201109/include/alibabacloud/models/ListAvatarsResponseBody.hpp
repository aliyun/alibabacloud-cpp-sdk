// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAvatarsResponseBody() = default ;
    ListAvatarsResponseBody(const ListAvatarsResponseBody &) = default ;
    ListAvatarsResponseBody(ListAvatarsResponseBody &&) = default ;
    ListAvatarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarsResponseBody() = default ;
    ListAvatarsResponseBody& operator=(const ListAvatarsResponseBody &) = default ;
    ListAvatarsResponseBody& operator=(ListAvatarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarList, avatarList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarList, avatarList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class AvatarList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvatarList& obj) { 
          DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_TO_JSON(Portrait, portrait_);
          DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_TO_JSON(Transparent, transparent_);
        };
        friend void from_json(const Darabonba::Json& j, AvatarList& obj) { 
          DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
          DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
        };
        AvatarList() = default ;
        AvatarList(const AvatarList &) = default ;
        AvatarList(AvatarList &&) = default ;
        AvatarList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvatarList() = default ;
        AvatarList& operator=(const AvatarList &) = default ;
        AvatarList& operator=(AvatarList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && this->avatarId_ == nullptr && this->avatarName_ == nullptr && this->avatarType_ == nullptr && this->portrait_ == nullptr && this->thumbnail_ == nullptr
        && this->transparent_ == nullptr; };
        // avatarDescription Field Functions 
        bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
        void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
        inline string getAvatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
        inline AvatarList& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


        // avatarId Field Functions 
        bool hasAvatarId() const { return this->avatarId_ != nullptr;};
        void deleteAvatarId() { this->avatarId_ = nullptr;};
        inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
        inline AvatarList& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


        // avatarName Field Functions 
        bool hasAvatarName() const { return this->avatarName_ != nullptr;};
        void deleteAvatarName() { this->avatarName_ = nullptr;};
        inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
        inline AvatarList& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


        // avatarType Field Functions 
        bool hasAvatarType() const { return this->avatarType_ != nullptr;};
        void deleteAvatarType() { this->avatarType_ = nullptr;};
        inline string getAvatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
        inline AvatarList& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


        // portrait Field Functions 
        bool hasPortrait() const { return this->portrait_ != nullptr;};
        void deletePortrait() { this->portrait_ = nullptr;};
        inline string getPortrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
        inline AvatarList& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline AvatarList& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // transparent Field Functions 
        bool hasTransparent() const { return this->transparent_ != nullptr;};
        void deleteTransparent() { this->transparent_ = nullptr;};
        inline bool getTransparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
        inline AvatarList& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


      protected:
        // The description of the digital human.
        shared_ptr<string> avatarDescription_ {};
        // The ID of the digital human.
        shared_ptr<string> avatarId_ {};
        // The name of the digital human.
        shared_ptr<string> avatarName_ {};
        // The type of the digital human.
        shared_ptr<string> avatarType_ {};
        // The media asset ID of the portrait image.
        shared_ptr<string> portrait_ {};
        // The thumbnail URL.
        shared_ptr<string> thumbnail_ {};
        // Indicates whether the digital human image supports the alpha channels.
        shared_ptr<bool> transparent_ {};
      };

      virtual bool empty() const override { return this->avatarList_ == nullptr
        && this->totalCount_ == nullptr; };
      // avatarList Field Functions 
      bool hasAvatarList() const { return this->avatarList_ != nullptr;};
      void deleteAvatarList() { this->avatarList_ = nullptr;};
      inline const vector<Data::AvatarList> & getAvatarList() const { DARABONBA_PTR_GET_CONST(avatarList_, vector<Data::AvatarList>) };
      inline vector<Data::AvatarList> getAvatarList() { DARABONBA_PTR_GET(avatarList_, vector<Data::AvatarList>) };
      inline Data& setAvatarList(const vector<Data::AvatarList> & avatarList) { DARABONBA_PTR_SET_VALUE(avatarList_, avatarList) };
      inline Data& setAvatarList(vector<Data::AvatarList> && avatarList) { DARABONBA_PTR_SET_RVALUE(avatarList_, avatarList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The queried digital humans.
      shared_ptr<vector<Data::AvatarList>> avatarList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAvatarsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAvatarsResponseBody::Data) };
    inline ListAvatarsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAvatarsResponseBody::Data) };
    inline ListAvatarsResponseBody& setData(const ListAvatarsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAvatarsResponseBody& setData(ListAvatarsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvatarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvatarsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListAvatarsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
