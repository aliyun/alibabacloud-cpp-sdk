// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEOSSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEOSSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceOSSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceOSSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(LoadFormat, loadFormat_);
      DARABONBA_PTR_TO_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceOSSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(LoadFormat, loadFormat_);
      DARABONBA_PTR_FROM_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateEventStreamingRequestSourceSourceOSSParameters() = default ;
    CreateEventStreamingRequestSourceSourceOSSParameters(const CreateEventStreamingRequestSourceSourceOSSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceOSSParameters(CreateEventStreamingRequestSourceSourceOSSParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceOSSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceOSSParameters() = default ;
    CreateEventStreamingRequestSourceSourceOSSParameters& operator=(const CreateEventStreamingRequestSourceSourceOSSParameters &) = default ;
    CreateEventStreamingRequestSourceSourceOSSParameters& operator=(CreateEventStreamingRequestSourceSourceOSSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->delimiter_ != nullptr && this->loadFormat_ != nullptr && this->loadMode_ != nullptr && this->prefix_ != nullptr && this->roleName_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string delimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // loadFormat Field Functions 
    bool hasLoadFormat() const { return this->loadFormat_ != nullptr;};
    void deleteLoadFormat() { this->loadFormat_ = nullptr;};
    inline string loadFormat() const { DARABONBA_PTR_GET_DEFAULT(loadFormat_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setLoadFormat(string loadFormat) { DARABONBA_PTR_SET_VALUE(loadFormat_, loadFormat) };


    // loadMode Field Functions 
    bool hasLoadMode() const { return this->loadMode_ != nullptr;};
    void deleteLoadMode() { this->loadMode_ = nullptr;};
    inline string loadMode() const { DARABONBA_PTR_GET_DEFAULT(loadMode_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setLoadMode(string loadMode) { DARABONBA_PTR_SET_VALUE(loadMode_, loadMode) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateEventStreamingRequestSourceSourceOSSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> delimiter_ = nullptr;
    std::shared_ptr<string> loadFormat_ = nullptr;
    std::shared_ptr<string> loadMode_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
