// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTTASKBACKEND_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTTASKBACKEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateTaskRequestTaskBackend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestTaskBackend& obj) { 
      DARABONBA_PTR_TO_JSON(bucketEndpoint, bucketEndpoint_);
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(objectPath, objectPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestTaskBackend& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketEndpoint, bucketEndpoint_);
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(objectPath, objectPath_);
    };
    CreateTaskRequestTaskBackend() = default ;
    CreateTaskRequestTaskBackend(const CreateTaskRequestTaskBackend &) = default ;
    CreateTaskRequestTaskBackend(CreateTaskRequestTaskBackend &&) = default ;
    CreateTaskRequestTaskBackend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestTaskBackend() = default ;
    CreateTaskRequestTaskBackend& operator=(const CreateTaskRequestTaskBackend &) = default ;
    CreateTaskRequestTaskBackend& operator=(CreateTaskRequestTaskBackend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketEndpoint_ != nullptr
        && this->bucketName_ != nullptr && this->objectPath_ != nullptr; };
    // bucketEndpoint Field Functions 
    bool hasBucketEndpoint() const { return this->bucketEndpoint_ != nullptr;};
    void deleteBucketEndpoint() { this->bucketEndpoint_ = nullptr;};
    inline string bucketEndpoint() const { DARABONBA_PTR_GET_DEFAULT(bucketEndpoint_, "") };
    inline CreateTaskRequestTaskBackend& setBucketEndpoint(string bucketEndpoint) { DARABONBA_PTR_SET_VALUE(bucketEndpoint_, bucketEndpoint) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateTaskRequestTaskBackend& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline CreateTaskRequestTaskBackend& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


  protected:
    std::shared_ptr<string> bucketEndpoint_ = nullptr;
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> objectPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
