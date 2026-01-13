// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UploadRecommendationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRecommendationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRecommendationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
    };
    UploadRecommendationDataRequest() = default ;
    UploadRecommendationDataRequest(const UploadRecommendationDataRequest &) = default ;
    UploadRecommendationDataRequest(UploadRecommendationDataRequest &&) = default ;
    UploadRecommendationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRecommendationDataRequest() = default ;
    UploadRecommendationDataRequest& operator=(const UploadRecommendationDataRequest &) = default ;
    UploadRecommendationDataRequest& operator=(UploadRecommendationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr
        && this->operationType_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
      inline Content& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Content& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    protected:
      shared_ptr<string> fields_ {};
      shared_ptr<string> operationType_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->content_ == nullptr && this->dataType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadRecommendationDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<UploadRecommendationDataRequest::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<UploadRecommendationDataRequest::Content>) };
    inline vector<UploadRecommendationDataRequest::Content> getContent() { DARABONBA_PTR_GET(content_, vector<UploadRecommendationDataRequest::Content>) };
    inline UploadRecommendationDataRequest& setContent(const vector<UploadRecommendationDataRequest::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UploadRecommendationDataRequest& setContent(vector<UploadRecommendationDataRequest::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline UploadRecommendationDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<UploadRecommendationDataRequest::Content>> content_ {};
    shared_ptr<string> dataType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
