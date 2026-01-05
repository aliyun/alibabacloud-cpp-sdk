// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class PutRecordStorageLifeCycleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordStorageLifeCycleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StreamIds, streamIdsShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnixTimestamp, unixTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordStorageLifeCycleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamIds, streamIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnixTimestamp, unixTimestamp_);
    };
    PutRecordStorageLifeCycleShrinkRequest() = default ;
    PutRecordStorageLifeCycleShrinkRequest(const PutRecordStorageLifeCycleShrinkRequest &) = default ;
    PutRecordStorageLifeCycleShrinkRequest(PutRecordStorageLifeCycleShrinkRequest &&) = default ;
    PutRecordStorageLifeCycleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordStorageLifeCycleShrinkRequest() = default ;
    PutRecordStorageLifeCycleShrinkRequest& operator=(const PutRecordStorageLifeCycleShrinkRequest &) = default ;
    PutRecordStorageLifeCycleShrinkRequest& operator=(PutRecordStorageLifeCycleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamIdsShrink_ == nullptr
        && this->tag_ == nullptr && this->unixTimestamp_ == nullptr; };
    // streamIdsShrink Field Functions 
    bool hasStreamIdsShrink() const { return this->streamIdsShrink_ != nullptr;};
    void deleteStreamIdsShrink() { this->streamIdsShrink_ = nullptr;};
    inline string getStreamIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(streamIdsShrink_, "") };
    inline PutRecordStorageLifeCycleShrinkRequest& setStreamIdsShrink(string streamIdsShrink) { DARABONBA_PTR_SET_VALUE(streamIdsShrink_, streamIdsShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline PutRecordStorageLifeCycleShrinkRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // unixTimestamp Field Functions 
    bool hasUnixTimestamp() const { return this->unixTimestamp_ != nullptr;};
    void deleteUnixTimestamp() { this->unixTimestamp_ = nullptr;};
    inline int64_t getUnixTimestamp() const { DARABONBA_PTR_GET_DEFAULT(unixTimestamp_, 0L) };
    inline PutRecordStorageLifeCycleShrinkRequest& setUnixTimestamp(int64_t unixTimestamp) { DARABONBA_PTR_SET_VALUE(unixTimestamp_, unixTimestamp) };


  protected:
    // This parameter is required.
    shared_ptr<string> streamIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> tag_ {};
    // This parameter is required.
    shared_ptr<int64_t> unixTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
