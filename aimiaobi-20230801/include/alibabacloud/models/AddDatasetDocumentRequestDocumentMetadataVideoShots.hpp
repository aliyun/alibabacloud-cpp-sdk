// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUESTDOCUMENTMETADATAVIDEOSHOTS_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUESTDOCUMENTMETADATAVIDEOSHOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddDatasetDocumentRequestDocumentMetadataVideoShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDocumentRequestDocumentMetadataVideoShots& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDocumentRequestDocumentMetadataVideoShots& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    AddDatasetDocumentRequestDocumentMetadataVideoShots() = default ;
    AddDatasetDocumentRequestDocumentMetadataVideoShots(const AddDatasetDocumentRequestDocumentMetadataVideoShots &) = default ;
    AddDatasetDocumentRequestDocumentMetadataVideoShots(AddDatasetDocumentRequestDocumentMetadataVideoShots &&) = default ;
    AddDatasetDocumentRequestDocumentMetadataVideoShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDocumentRequestDocumentMetadataVideoShots() = default ;
    AddDatasetDocumentRequestDocumentMetadataVideoShots& operator=(const AddDatasetDocumentRequestDocumentMetadataVideoShots &) = default ;
    AddDatasetDocumentRequestDocumentMetadataVideoShots& operator=(AddDatasetDocumentRequestDocumentMetadataVideoShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr && return this->text_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline AddDatasetDocumentRequestDocumentMetadataVideoShots& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline AddDatasetDocumentRequestDocumentMetadataVideoShots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AddDatasetDocumentRequestDocumentMetadataVideoShots& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
