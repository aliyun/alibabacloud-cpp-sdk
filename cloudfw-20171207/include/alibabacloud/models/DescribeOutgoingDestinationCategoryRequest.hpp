// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TypeId, typeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
    };
    DescribeOutgoingDestinationCategoryRequest() = default ;
    DescribeOutgoingDestinationCategoryRequest(const DescribeOutgoingDestinationCategoryRequest &) = default ;
    DescribeOutgoingDestinationCategoryRequest(DescribeOutgoingDestinationCategoryRequest &&) = default ;
    DescribeOutgoingDestinationCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationCategoryRequest() = default ;
    DescribeOutgoingDestinationCategoryRequest& operator=(const DescribeOutgoingDestinationCategoryRequest &) = default ;
    DescribeOutgoingDestinationCategoryRequest& operator=(DescribeOutgoingDestinationCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->dstType_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr
        && this->typeId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // typeId Field Functions 
    bool hasTypeId() const { return this->typeId_ != nullptr;};
    void deleteTypeId() { this->typeId_ = nullptr;};
    inline string getTypeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
    inline DescribeOutgoingDestinationCategoryRequest& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


  protected:
    shared_ptr<string> categoryId_ {};
    shared_ptr<string> dstType_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> sourceIp_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> typeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
