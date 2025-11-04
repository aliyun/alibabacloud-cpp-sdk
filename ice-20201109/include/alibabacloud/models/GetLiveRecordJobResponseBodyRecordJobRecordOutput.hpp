// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODYRECORDJOBRECORDOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDJOBRESPONSEBODYRECORDJOBRECORDOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordJobResponseBodyRecordJobRecordOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordJobResponseBodyRecordJobRecordOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordJobResponseBodyRecordJobRecordOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLiveRecordJobResponseBodyRecordJobRecordOutput() = default ;
    GetLiveRecordJobResponseBodyRecordJobRecordOutput(const GetLiveRecordJobResponseBodyRecordJobRecordOutput &) = default ;
    GetLiveRecordJobResponseBodyRecordJobRecordOutput(GetLiveRecordJobResponseBodyRecordJobRecordOutput &&) = default ;
    GetLiveRecordJobResponseBodyRecordJobRecordOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordJobResponseBodyRecordJobRecordOutput() = default ;
    GetLiveRecordJobResponseBodyRecordJobRecordOutput& operator=(const GetLiveRecordJobResponseBodyRecordJobRecordOutput &) = default ;
    GetLiveRecordJobResponseBodyRecordJobRecordOutput& operator=(GetLiveRecordJobResponseBodyRecordJobRecordOutput &&) = default ;
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
    inline GetLiveRecordJobResponseBodyRecordJobRecordOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetLiveRecordJobResponseBodyRecordJobRecordOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLiveRecordJobResponseBodyRecordJobRecordOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
