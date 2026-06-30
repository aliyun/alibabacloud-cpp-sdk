// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRAYLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRayLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetRayLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    GetRayLogRequest() = default ;
    GetRayLogRequest(const GetRayLogRequest &) = default ;
    GetRayLogRequest(GetRayLogRequest &&) = default ;
    GetRayLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayLogRequest() = default ;
    GetRayLogRequest& operator=(const GetRayLogRequest &) = default ;
    GetRayLogRequest& operator=(GetRayLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->path_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetRayLogRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetRayLogRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The bucket name.
    shared_ptr<string> bucketName_ {};
    // The log file path.
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
