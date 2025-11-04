// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUESTRECORDOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVERECORDJOBREQUESTRECORDOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveRecordJobRequestRecordOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveRecordJobRequestRecordOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveRecordJobRequestRecordOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitLiveRecordJobRequestRecordOutput() = default ;
    SubmitLiveRecordJobRequestRecordOutput(const SubmitLiveRecordJobRequestRecordOutput &) = default ;
    SubmitLiveRecordJobRequestRecordOutput(SubmitLiveRecordJobRequestRecordOutput &&) = default ;
    SubmitLiveRecordJobRequestRecordOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveRecordJobRequestRecordOutput() = default ;
    SubmitLiveRecordJobRequestRecordOutput& operator=(const SubmitLiveRecordJobRequestRecordOutput &) = default ;
    SubmitLiveRecordJobRequestRecordOutput& operator=(SubmitLiveRecordJobRequestRecordOutput &&) = default ;
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
    inline SubmitLiveRecordJobRequestRecordOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubmitLiveRecordJobRequestRecordOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitLiveRecordJobRequestRecordOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The bucket name.
    std::shared_ptr<string> bucket_ = nullptr;
    // The endpoint of the storage service.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The type of the storage address.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
