// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAvatarResponseBody() = default ;
    GetAvatarResponseBody(const GetAvatarResponseBody &) = default ;
    GetAvatarResponseBody(GetAvatarResponseBody &&) = default ;
    GetAvatarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarResponseBody() = default ;
    GetAvatarResponseBody& operator=(const GetAvatarResponseBody &) = default ;
    GetAvatarResponseBody& operator=(GetAvatarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
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
      class Avatar : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Avatar& obj) { 
          DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Portrait, portrait_);
          DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_TO_JSON(Transparent, transparent_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Avatar& obj) { 
          DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
          DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
          DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
          DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
          DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Avatar() = default ;
        Avatar(const Avatar &) = default ;
        Avatar(Avatar &&) = default ;
        Avatar(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Avatar() = default ;
        Avatar& operator=(const Avatar &) = default ;
        Avatar& operator=(Avatar &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && this->avatarId_ == nullptr && this->avatarName_ == nullptr && this->avatarType_ == nullptr && this->height_ == nullptr && this->portrait_ == nullptr
        && this->thumbnail_ == nullptr && this->transparent_ == nullptr && this->width_ == nullptr; };
        // avatarDescription Field Functions 
        bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
        void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
        inline string getAvatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
        inline Avatar& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


        // avatarId Field Functions 
        bool hasAvatarId() const { return this->avatarId_ != nullptr;};
        void deleteAvatarId() { this->avatarId_ = nullptr;};
        inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
        inline Avatar& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


        // avatarName Field Functions 
        bool hasAvatarName() const { return this->avatarName_ != nullptr;};
        void deleteAvatarName() { this->avatarName_ = nullptr;};
        inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
        inline Avatar& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


        // avatarType Field Functions 
        bool hasAvatarType() const { return this->avatarType_ != nullptr;};
        void deleteAvatarType() { this->avatarType_ = nullptr;};
        inline string getAvatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
        inline Avatar& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline Avatar& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // portrait Field Functions 
        bool hasPortrait() const { return this->portrait_ != nullptr;};
        void deletePortrait() { this->portrait_ = nullptr;};
        inline string getPortrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
        inline Avatar& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline Avatar& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // transparent Field Functions 
        bool hasTransparent() const { return this->transparent_ != nullptr;};
        void deleteTransparent() { this->transparent_ = nullptr;};
        inline bool getTransparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
        inline Avatar& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline Avatar& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The description of the digital human.
        shared_ptr<string> avatarDescription_ {};
        // The ID of the digital human.
        shared_ptr<string> avatarId_ {};
        // The name of the digital human.
        shared_ptr<string> avatarName_ {};
        // The type of the digital human.
        shared_ptr<string> avatarType_ {};
        // The height of the digital human image in pixels.
        shared_ptr<int32_t> height_ {};
        // The media asset ID of the portrait image.
        shared_ptr<string> portrait_ {};
        // The thumbnail URL.
        shared_ptr<string> thumbnail_ {};
        // Indicates whether the digital human supports alpha channels.
        shared_ptr<bool> transparent_ {};
        // The width of the digital human image in pixels.
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->avatar_ == nullptr; };
      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline const Data::Avatar & getAvatar() const { DARABONBA_PTR_GET_CONST(avatar_, Data::Avatar) };
      inline Data::Avatar getAvatar() { DARABONBA_PTR_GET(avatar_, Data::Avatar) };
      inline Data& setAvatar(const Data::Avatar & avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };
      inline Data& setAvatar(Data::Avatar && avatar) { DARABONBA_PTR_SET_RVALUE(avatar_, avatar) };


    protected:
      // The information about the digital human.
      shared_ptr<Data::Avatar> avatar_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAvatarResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAvatarResponseBody::Data) };
    inline GetAvatarResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAvatarResponseBody::Data) };
    inline GetAvatarResponseBody& setData(const GetAvatarResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAvatarResponseBody& setData(GetAvatarResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvatarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAvatarResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<GetAvatarResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
