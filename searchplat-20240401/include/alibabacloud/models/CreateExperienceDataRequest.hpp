// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIENCEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIENCEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class CreateExperienceDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperienceDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(dataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperienceDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(dataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateExperienceDataRequest() = default ;
    CreateExperienceDataRequest(const CreateExperienceDataRequest &) = default ;
    CreateExperienceDataRequest(CreateExperienceDataRequest &&) = default ;
    CreateExperienceDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperienceDataRequest() = default ;
    CreateExperienceDataRequest& operator=(const CreateExperienceDataRequest &) = default ;
    CreateExperienceDataRequest& operator=(CreateExperienceDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->dataSize_ == nullptr && this->dataType_ == nullptr && this->dataValue_ == nullptr && this->name_ == nullptr && this->serviceType_ == nullptr
        && this->dryRun_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateExperienceDataRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline CreateExperienceDataRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateExperienceDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline CreateExperienceDataRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExperienceDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline CreateExperienceDataRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateExperienceDataRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The data content type. Valid values:
    // - pdf
    // - text
    // - html
    // - doc.
    shared_ptr<string> contentType_ {};
    // The data size.
    shared_ptr<int64_t> dataSize_ {};
    // The data type. Valid values:
    // - file: file
    // - url: URL.
    shared_ptr<string> dataType_ {};
    // The data content.
    // - If dataType is set to file, this field specifies the OSS address of the file.
    // - If dataType is set to url, this field specifies the HTTP URL of the data.
    shared_ptr<string> dataValue_ {};
    // The data name. This parameter is required when dataType is set to file.
    shared_ptr<string> name_ {};
    // The service type.
    shared_ptr<string> serviceType_ {};
    // Specifies whether to perform a dry run request.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
