// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListAllMediaBucketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllMediaBucketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaBucketList, mediaBucketList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllMediaBucketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaBucketList, mediaBucketList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAllMediaBucketResponseBody() = default ;
    ListAllMediaBucketResponseBody(const ListAllMediaBucketResponseBody &) = default ;
    ListAllMediaBucketResponseBody(ListAllMediaBucketResponseBody &&) = default ;
    ListAllMediaBucketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllMediaBucketResponseBody() = default ;
    ListAllMediaBucketResponseBody& operator=(const ListAllMediaBucketResponseBody &) = default ;
    ListAllMediaBucketResponseBody& operator=(ListAllMediaBucketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaBucketList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaBucketList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaBucket, mediaBucket_);
      };
      friend void from_json(const Darabonba::Json& j, MediaBucketList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaBucket, mediaBucket_);
      };
      MediaBucketList() = default ;
      MediaBucketList(const MediaBucketList &) = default ;
      MediaBucketList(MediaBucketList &&) = default ;
      MediaBucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaBucketList() = default ;
      MediaBucketList& operator=(const MediaBucketList &) = default ;
      MediaBucketList& operator=(MediaBucketList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaBucket : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaBucket& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Referer, referer_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MediaBucket& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Referer, referer_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MediaBucket() = default ;
        MediaBucket(const MediaBucket &) = default ;
        MediaBucket(MediaBucket &&) = default ;
        MediaBucket(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaBucket() = default ;
        MediaBucket& operator=(const MediaBucket &) = default ;
        MediaBucket& operator=(MediaBucket &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->referer_ == nullptr && this->type_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline MediaBucket& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // referer Field Functions 
        bool hasReferer() const { return this->referer_ != nullptr;};
        void deleteReferer() { this->referer_ = nullptr;};
        inline string getReferer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
        inline MediaBucket& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MediaBucket& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> bucket_ {};
        shared_ptr<string> referer_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->mediaBucket_ == nullptr; };
      // mediaBucket Field Functions 
      bool hasMediaBucket() const { return this->mediaBucket_ != nullptr;};
      void deleteMediaBucket() { this->mediaBucket_ = nullptr;};
      inline const vector<MediaBucketList::MediaBucket> & getMediaBucket() const { DARABONBA_PTR_GET_CONST(mediaBucket_, vector<MediaBucketList::MediaBucket>) };
      inline vector<MediaBucketList::MediaBucket> getMediaBucket() { DARABONBA_PTR_GET(mediaBucket_, vector<MediaBucketList::MediaBucket>) };
      inline MediaBucketList& setMediaBucket(const vector<MediaBucketList::MediaBucket> & mediaBucket) { DARABONBA_PTR_SET_VALUE(mediaBucket_, mediaBucket) };
      inline MediaBucketList& setMediaBucket(vector<MediaBucketList::MediaBucket> && mediaBucket) { DARABONBA_PTR_SET_RVALUE(mediaBucket_, mediaBucket) };


    protected:
      shared_ptr<vector<MediaBucketList::MediaBucket>> mediaBucket_ {};
    };

    virtual bool empty() const override { return this->mediaBucketList_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // mediaBucketList Field Functions 
    bool hasMediaBucketList() const { return this->mediaBucketList_ != nullptr;};
    void deleteMediaBucketList() { this->mediaBucketList_ = nullptr;};
    inline const ListAllMediaBucketResponseBody::MediaBucketList & getMediaBucketList() const { DARABONBA_PTR_GET_CONST(mediaBucketList_, ListAllMediaBucketResponseBody::MediaBucketList) };
    inline ListAllMediaBucketResponseBody::MediaBucketList getMediaBucketList() { DARABONBA_PTR_GET(mediaBucketList_, ListAllMediaBucketResponseBody::MediaBucketList) };
    inline ListAllMediaBucketResponseBody& setMediaBucketList(const ListAllMediaBucketResponseBody::MediaBucketList & mediaBucketList) { DARABONBA_PTR_SET_VALUE(mediaBucketList_, mediaBucketList) };
    inline ListAllMediaBucketResponseBody& setMediaBucketList(ListAllMediaBucketResponseBody::MediaBucketList && mediaBucketList) { DARABONBA_PTR_SET_RVALUE(mediaBucketList_, mediaBucketList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListAllMediaBucketResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllMediaBucketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAllMediaBucketResponseBody::MediaBucketList> mediaBucketList_ {};
    // The returned value of NextPageToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
