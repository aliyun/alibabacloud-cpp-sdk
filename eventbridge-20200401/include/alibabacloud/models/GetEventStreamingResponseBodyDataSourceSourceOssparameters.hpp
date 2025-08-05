// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEOSSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEOSSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourceOSSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourceOSSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(LoadFormat, loadFormat_);
      DARABONBA_PTR_TO_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourceOSSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(LoadFormat, loadFormat_);
      DARABONBA_PTR_FROM_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters(const GetEventStreamingResponseBodyDataSourceSourceOSSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters(GetEventStreamingResponseBodyDataSourceSourceOSSParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourceOSSParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourceOSSParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceOSSParameters& operator=(GetEventStreamingResponseBodyDataSourceSourceOSSParameters &&) = default ;
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
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string delimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // loadFormat Field Functions 
    bool hasLoadFormat() const { return this->loadFormat_ != nullptr;};
    void deleteLoadFormat() { this->loadFormat_ = nullptr;};
    inline string loadFormat() const { DARABONBA_PTR_GET_DEFAULT(loadFormat_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setLoadFormat(string loadFormat) { DARABONBA_PTR_SET_VALUE(loadFormat_, loadFormat) };


    // loadMode Field Functions 
    bool hasLoadMode() const { return this->loadMode_ != nullptr;};
    void deleteLoadMode() { this->loadMode_ = nullptr;};
    inline string loadMode() const { DARABONBA_PTR_GET_DEFAULT(loadMode_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setLoadMode(string loadMode) { DARABONBA_PTR_SET_VALUE(loadMode_, loadMode) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceOSSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


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
