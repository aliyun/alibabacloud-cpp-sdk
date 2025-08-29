// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUESTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUESTCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UploadRecommendationDataRequestContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRecommendationDataRequestContent& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRecommendationDataRequestContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
    };
    UploadRecommendationDataRequestContent() = default ;
    UploadRecommendationDataRequestContent(const UploadRecommendationDataRequestContent &) = default ;
    UploadRecommendationDataRequestContent(UploadRecommendationDataRequestContent &&) = default ;
    UploadRecommendationDataRequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRecommendationDataRequestContent() = default ;
    UploadRecommendationDataRequestContent& operator=(const UploadRecommendationDataRequestContent &) = default ;
    UploadRecommendationDataRequestContent& operator=(UploadRecommendationDataRequestContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->operationType_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string fields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline UploadRecommendationDataRequestContent& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline UploadRecommendationDataRequestContent& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


  protected:
    std::shared_ptr<string> fields_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
