// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class PutRecordStorageLifeCycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordStorageLifeCycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StreamIds, streamIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnixTimestamp, unixTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordStorageLifeCycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamIds, streamIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnixTimestamp, unixTimestamp_);
    };
    PutRecordStorageLifeCycleRequest() = default ;
    PutRecordStorageLifeCycleRequest(const PutRecordStorageLifeCycleRequest &) = default ;
    PutRecordStorageLifeCycleRequest(PutRecordStorageLifeCycleRequest &&) = default ;
    PutRecordStorageLifeCycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordStorageLifeCycleRequest() = default ;
    PutRecordStorageLifeCycleRequest& operator=(const PutRecordStorageLifeCycleRequest &) = default ;
    PutRecordStorageLifeCycleRequest& operator=(PutRecordStorageLifeCycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamIds_ == nullptr
        && return this->tag_ == nullptr && return this->unixTimestamp_ == nullptr; };
    // streamIds Field Functions 
    bool hasStreamIds() const { return this->streamIds_ != nullptr;};
    void deleteStreamIds() { this->streamIds_ = nullptr;};
    inline const vector<string> & streamIds() const { DARABONBA_PTR_GET_CONST(streamIds_, vector<string>) };
    inline vector<string> streamIds() { DARABONBA_PTR_GET(streamIds_, vector<string>) };
    inline PutRecordStorageLifeCycleRequest& setStreamIds(const vector<string> & streamIds) { DARABONBA_PTR_SET_VALUE(streamIds_, streamIds) };
    inline PutRecordStorageLifeCycleRequest& setStreamIds(vector<string> && streamIds) { DARABONBA_PTR_SET_RVALUE(streamIds_, streamIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline PutRecordStorageLifeCycleRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // unixTimestamp Field Functions 
    bool hasUnixTimestamp() const { return this->unixTimestamp_ != nullptr;};
    void deleteUnixTimestamp() { this->unixTimestamp_ = nullptr;};
    inline int64_t unixTimestamp() const { DARABONBA_PTR_GET_DEFAULT(unixTimestamp_, 0L) };
    inline PutRecordStorageLifeCycleRequest& setUnixTimestamp(int64_t unixTimestamp) { DARABONBA_PTR_SET_VALUE(unixTimestamp_, unixTimestamp) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> streamIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> unixTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
