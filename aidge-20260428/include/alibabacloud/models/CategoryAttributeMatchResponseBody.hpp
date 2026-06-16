// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class CategoryAttributeMatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryAttributeMatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryAttributeMatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CategoryAttributeMatchResponseBody() = default ;
    CategoryAttributeMatchResponseBody(const CategoryAttributeMatchResponseBody &) = default ;
    CategoryAttributeMatchResponseBody(CategoryAttributeMatchResponseBody &&) = default ;
    CategoryAttributeMatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryAttributeMatchResponseBody() = default ;
    CategoryAttributeMatchResponseBody& operator=(const CategoryAttributeMatchResponseBody &) = default ;
    CategoryAttributeMatchResponseBody& operator=(CategoryAttributeMatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(CategoryPath, categoryPath_);
        DARABONBA_PTR_TO_JSON(FilledCount, filledCount_);
        DARABONBA_PTR_TO_JSON(Matched, matched_);
        DARABONBA_PTR_TO_JSON(TotalAttributes, totalAttributes_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(CategoryPath, categoryPath_);
        DARABONBA_PTR_FROM_JSON(FilledCount, filledCount_);
        DARABONBA_PTR_FROM_JSON(Matched, matched_);
        DARABONBA_PTR_FROM_JSON(TotalAttributes, totalAttributes_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageMap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageMap& obj) { 
          DARABONBA_PTR_TO_JSON(ProcessingCount, processingCount_);
        };
        friend void from_json(const Darabonba::Json& j, UsageMap& obj) { 
          DARABONBA_PTR_FROM_JSON(ProcessingCount, processingCount_);
        };
        UsageMap() = default ;
        UsageMap(const UsageMap &) = default ;
        UsageMap(UsageMap &&) = default ;
        UsageMap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageMap() = default ;
        UsageMap& operator=(const UsageMap &) = default ;
        UsageMap& operator=(UsageMap &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->processingCount_ == nullptr; };
        // processingCount Field Functions 
        bool hasProcessingCount() const { return this->processingCount_ != nullptr;};
        void deleteProcessingCount() { this->processingCount_ = nullptr;};
        inline int32_t getProcessingCount() const { DARABONBA_PTR_GET_DEFAULT(processingCount_, 0) };
        inline UsageMap& setProcessingCount(int32_t processingCount) { DARABONBA_PTR_SET_VALUE(processingCount_, processingCount) };


      protected:
        // The number of processing times.
        shared_ptr<int32_t> processingCount_ {};
      };

      class Attributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
          DARABONBA_PTR_TO_JSON(AttrId, attrId_);
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(InputType, inputType_);
          DARABONBA_PTR_TO_JSON(Matched, matched_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameEn, nameEn_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(SelectedValues, selectedValues_);
          DARABONBA_PTR_TO_JSON(SelectedVids, selectedVids_);
        };
        friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
          DARABONBA_PTR_FROM_JSON(AttrId, attrId_);
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(InputType, inputType_);
          DARABONBA_PTR_FROM_JSON(Matched, matched_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameEn, nameEn_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(SelectedValues, selectedValues_);
          DARABONBA_PTR_FROM_JSON(SelectedVids, selectedVids_);
        };
        Attributes() = default ;
        Attributes(const Attributes &) = default ;
        Attributes(Attributes &&) = default ;
        Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attributes() = default ;
        Attributes& operator=(const Attributes &) = default ;
        Attributes& operator=(Attributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attrId_ == nullptr
        && this->confidence_ == nullptr && this->inputType_ == nullptr && this->matched_ == nullptr && this->name_ == nullptr && this->nameEn_ == nullptr
        && this->reason_ == nullptr && this->selectedValues_ == nullptr && this->selectedVids_ == nullptr; };
        // attrId Field Functions 
        bool hasAttrId() const { return this->attrId_ != nullptr;};
        void deleteAttrId() { this->attrId_ = nullptr;};
        inline int32_t getAttrId() const { DARABONBA_PTR_GET_DEFAULT(attrId_, 0) };
        inline Attributes& setAttrId(int32_t attrId) { DARABONBA_PTR_SET_VALUE(attrId_, attrId) };


        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline int32_t getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0) };
        inline Attributes& setConfidence(int32_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // inputType Field Functions 
        bool hasInputType() const { return this->inputType_ != nullptr;};
        void deleteInputType() { this->inputType_ = nullptr;};
        inline string getInputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
        inline Attributes& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


        // matched Field Functions 
        bool hasMatched() const { return this->matched_ != nullptr;};
        void deleteMatched() { this->matched_ = nullptr;};
        inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
        inline Attributes& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameEn Field Functions 
        bool hasNameEn() const { return this->nameEn_ != nullptr;};
        void deleteNameEn() { this->nameEn_ = nullptr;};
        inline string getNameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
        inline Attributes& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Attributes& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // selectedValues Field Functions 
        bool hasSelectedValues() const { return this->selectedValues_ != nullptr;};
        void deleteSelectedValues() { this->selectedValues_ = nullptr;};
        inline const vector<string> & getSelectedValues() const { DARABONBA_PTR_GET_CONST(selectedValues_, vector<string>) };
        inline vector<string> getSelectedValues() { DARABONBA_PTR_GET(selectedValues_, vector<string>) };
        inline Attributes& setSelectedValues(const vector<string> & selectedValues) { DARABONBA_PTR_SET_VALUE(selectedValues_, selectedValues) };
        inline Attributes& setSelectedValues(vector<string> && selectedValues) { DARABONBA_PTR_SET_RVALUE(selectedValues_, selectedValues) };


        // selectedVids Field Functions 
        bool hasSelectedVids() const { return this->selectedVids_ != nullptr;};
        void deleteSelectedVids() { this->selectedVids_ = nullptr;};
        inline const vector<int32_t> & getSelectedVids() const { DARABONBA_PTR_GET_CONST(selectedVids_, vector<int32_t>) };
        inline vector<int32_t> getSelectedVids() { DARABONBA_PTR_GET(selectedVids_, vector<int32_t>) };
        inline Attributes& setSelectedVids(const vector<int32_t> & selectedVids) { DARABONBA_PTR_SET_VALUE(selectedVids_, selectedVids) };
        inline Attributes& setSelectedVids(vector<int32_t> && selectedVids) { DARABONBA_PTR_SET_RVALUE(selectedVids_, selectedVids) };


      protected:
        // The attribute ID.
        shared_ptr<int32_t> attrId_ {};
        // The matching confidence score. Valid values: 0 to 100.
        shared_ptr<int32_t> confidence_ {};
        // The input type of the attribute.
        shared_ptr<string> inputType_ {};
        // Indicates whether the attribute is successfully matched. Valid values: true and false.
        shared_ptr<bool> matched_ {};
        // The Chinese name of the attribute.
        shared_ptr<string> name_ {};
        // The English name of the attribute.
        shared_ptr<string> nameEn_ {};
        // The reason for the matching result.
        shared_ptr<string> reason_ {};
        // The list of selected attribute value texts, such as ["iOS","Android"\\].
        shared_ptr<vector<string>> selectedValues_ {};
        // The list of selected attribute value IDs, such as [30127,30128\\].
        shared_ptr<vector<int32_t>> selectedVids_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->categoryPath_ == nullptr && this->filledCount_ == nullptr && this->matched_ == nullptr
        && this->totalAttributes_ == nullptr && this->usageMap_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<Data::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Data::Attributes>) };
      inline vector<Data::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Data::Attributes>) };
      inline Data& setAttributes(const vector<Data::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Data& setAttributes(vector<Data::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline Data& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Data& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // categoryPath Field Functions 
      bool hasCategoryPath() const { return this->categoryPath_ != nullptr;};
      void deleteCategoryPath() { this->categoryPath_ = nullptr;};
      inline string getCategoryPath() const { DARABONBA_PTR_GET_DEFAULT(categoryPath_, "") };
      inline Data& setCategoryPath(string categoryPath) { DARABONBA_PTR_SET_VALUE(categoryPath_, categoryPath) };


      // filledCount Field Functions 
      bool hasFilledCount() const { return this->filledCount_ != nullptr;};
      void deleteFilledCount() { this->filledCount_ = nullptr;};
      inline int32_t getFilledCount() const { DARABONBA_PTR_GET_DEFAULT(filledCount_, 0) };
      inline Data& setFilledCount(int32_t filledCount) { DARABONBA_PTR_SET_VALUE(filledCount_, filledCount) };


      // matched Field Functions 
      bool hasMatched() const { return this->matched_ != nullptr;};
      void deleteMatched() { this->matched_ = nullptr;};
      inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
      inline Data& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


      // totalAttributes Field Functions 
      bool hasTotalAttributes() const { return this->totalAttributes_ != nullptr;};
      void deleteTotalAttributes() { this->totalAttributes_ = nullptr;};
      inline int32_t getTotalAttributes() const { DARABONBA_PTR_GET_DEFAULT(totalAttributes_, 0) };
      inline Data& setTotalAttributes(int32_t totalAttributes) { DARABONBA_PTR_SET_VALUE(totalAttributes_, totalAttributes) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const Data::UsageMap & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, Data::UsageMap) };
      inline Data::UsageMap getUsageMap() { DARABONBA_PTR_GET(usageMap_, Data::UsageMap) };
      inline Data& setUsageMap(const Data::UsageMap & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(Data::UsageMap && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The list of attribute filling results.
      shared_ptr<vector<Data::Attributes>> attributes_ {};
      // The category ID.
      shared_ptr<int32_t> categoryId_ {};
      // The category name.
      shared_ptr<string> categoryName_ {};
      // The full path of the category, separated by "/".
      shared_ptr<string> categoryPath_ {};
      // The number of attributes that are successfully filled.
      shared_ptr<int32_t> filledCount_ {};
      // Indicates whether the attribute is successfully matched. Valid values: true and false.
      shared_ptr<bool> matched_ {};
      // The total number of attributes under the category.
      shared_ptr<int32_t> totalAttributes_ {};
      // The usage fields.
      shared_ptr<Data::UsageMap> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CategoryAttributeMatchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CategoryAttributeMatchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CategoryAttributeMatchResponseBody::Data) };
    inline CategoryAttributeMatchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CategoryAttributeMatchResponseBody::Data) };
    inline CategoryAttributeMatchResponseBody& setData(const CategoryAttributeMatchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CategoryAttributeMatchResponseBody& setData(CategoryAttributeMatchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CategoryAttributeMatchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CategoryAttributeMatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CategoryAttributeMatchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is not returned if the call is successful.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<CategoryAttributeMatchResponseBody::Data> data_ {};
    // The error message. This parameter is not returned if the call is successful.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
