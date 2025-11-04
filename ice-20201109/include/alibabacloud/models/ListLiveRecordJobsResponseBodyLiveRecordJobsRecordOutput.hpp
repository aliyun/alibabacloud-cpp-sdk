// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODYLIVERECORDJOBSRECORDOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODYLIVERECORDJOBSRECORDOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput() = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput(const ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput &) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput(ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput &&) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput() = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& operator=(const ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput &) = default ;
    ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& operator=(ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->endpoint_ == nullptr && return this->type_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveRecordJobsResponseBodyLiveRecordJobsRecordOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The bucket name.
    std::shared_ptr<string> bucket_ = nullptr;
    // The endpoint of the storage service.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The type of the storage address.
    // 
    // Valid values:
    // 
    // *   vod
    // *   oss
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
