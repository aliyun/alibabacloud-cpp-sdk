// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllImageBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllImageBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBaselines, imageBaselines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllImageBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBaselines, imageBaselines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllImageBaselineResponseBody() = default ;
    DescribeAllImageBaselineResponseBody(const DescribeAllImageBaselineResponseBody &) = default ;
    DescribeAllImageBaselineResponseBody(DescribeAllImageBaselineResponseBody &&) = default ;
    DescribeAllImageBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllImageBaselineResponseBody() = default ;
    DescribeAllImageBaselineResponseBody& operator=(const DescribeAllImageBaselineResponseBody &) = default ;
    DescribeAllImageBaselineResponseBody& operator=(DescribeAllImageBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageBaselines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageBaselines& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineClassList, baselineClassList_);
      };
      friend void from_json(const Darabonba::Json& j, ImageBaselines& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineClassList, baselineClassList_);
      };
      ImageBaselines() = default ;
      ImageBaselines(const ImageBaselines &) = default ;
      ImageBaselines(ImageBaselines &&) = default ;
      ImageBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageBaselines() = default ;
      ImageBaselines& operator=(const ImageBaselines &) = default ;
      ImageBaselines& operator=(ImageBaselines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaselineClassList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaselineClassList& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(BaselineNameList, baselineNameList_);
          DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
        };
        friend void from_json(const Darabonba::Json& j, BaselineClassList& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(BaselineNameList, baselineNameList_);
          DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
        };
        BaselineClassList() = default ;
        BaselineClassList(const BaselineClassList &) = default ;
        BaselineClassList(BaselineClassList &&) = default ;
        BaselineClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaselineClassList() = default ;
        BaselineClassList& operator=(const BaselineClassList &) = default ;
        BaselineClassList& operator=(BaselineClassList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BaselineNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BaselineNameList& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(BaselineItemList, baselineItemList_);
            DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
            DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
          };
          friend void from_json(const Darabonba::Json& j, BaselineNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(BaselineItemList, baselineItemList_);
            DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
            DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
          };
          BaselineNameList() = default ;
          BaselineNameList(const BaselineNameList &) = default ;
          BaselineNameList(BaselineNameList &&) = default ;
          BaselineNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BaselineNameList() = default ;
          BaselineNameList& operator=(const BaselineNameList &) = default ;
          BaselineNameList& operator=(BaselineNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BaselineItemList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaselineItemList& obj) { 
              DARABONBA_PTR_TO_JSON(Alias, alias_);
              DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
              DARABONBA_PTR_TO_JSON(ItemKey, itemKey_);
              DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
            };
            friend void from_json(const Darabonba::Json& j, BaselineItemList& obj) { 
              DARABONBA_PTR_FROM_JSON(Alias, alias_);
              DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
              DARABONBA_PTR_FROM_JSON(ItemKey, itemKey_);
              DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
            };
            BaselineItemList() = default ;
            BaselineItemList(const BaselineItemList &) = default ;
            BaselineItemList(BaselineItemList &&) = default ;
            BaselineItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BaselineItemList() = default ;
            BaselineItemList& operator=(const BaselineItemList &) = default ;
            BaselineItemList& operator=(BaselineItemList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->alias_ == nullptr
        && this->classKey_ == nullptr && this->itemKey_ == nullptr && this->nameKey_ == nullptr; };
            // alias Field Functions 
            bool hasAlias() const { return this->alias_ != nullptr;};
            void deleteAlias() { this->alias_ = nullptr;};
            inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
            inline BaselineItemList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


            // classKey Field Functions 
            bool hasClassKey() const { return this->classKey_ != nullptr;};
            void deleteClassKey() { this->classKey_ = nullptr;};
            inline string getClassKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
            inline BaselineItemList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


            // itemKey Field Functions 
            bool hasItemKey() const { return this->itemKey_ != nullptr;};
            void deleteItemKey() { this->itemKey_ = nullptr;};
            inline string getItemKey() const { DARABONBA_PTR_GET_DEFAULT(itemKey_, "") };
            inline BaselineItemList& setItemKey(string itemKey) { DARABONBA_PTR_SET_VALUE(itemKey_, itemKey) };


            // nameKey Field Functions 
            bool hasNameKey() const { return this->nameKey_ != nullptr;};
            void deleteNameKey() { this->nameKey_ = nullptr;};
            inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
            inline BaselineItemList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


          protected:
            // The alias of the baseline check item.
            shared_ptr<string> alias_ {};
            // The key of the type for the baseline.
            shared_ptr<string> classKey_ {};
            // The key of the name for the baseline check item.
            shared_ptr<string> itemKey_ {};
            // The key of the name for the baseline.
            shared_ptr<string> nameKey_ {};
          };

          virtual bool empty() const override { return this->alias_ == nullptr
        && this->baselineItemList_ == nullptr && this->classKey_ == nullptr && this->nameKey_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline BaselineNameList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // baselineItemList Field Functions 
          bool hasBaselineItemList() const { return this->baselineItemList_ != nullptr;};
          void deleteBaselineItemList() { this->baselineItemList_ = nullptr;};
          inline const vector<BaselineNameList::BaselineItemList> & getBaselineItemList() const { DARABONBA_PTR_GET_CONST(baselineItemList_, vector<BaselineNameList::BaselineItemList>) };
          inline vector<BaselineNameList::BaselineItemList> getBaselineItemList() { DARABONBA_PTR_GET(baselineItemList_, vector<BaselineNameList::BaselineItemList>) };
          inline BaselineNameList& setBaselineItemList(const vector<BaselineNameList::BaselineItemList> & baselineItemList) { DARABONBA_PTR_SET_VALUE(baselineItemList_, baselineItemList) };
          inline BaselineNameList& setBaselineItemList(vector<BaselineNameList::BaselineItemList> && baselineItemList) { DARABONBA_PTR_SET_RVALUE(baselineItemList_, baselineItemList) };


          // classKey Field Functions 
          bool hasClassKey() const { return this->classKey_ != nullptr;};
          void deleteClassKey() { this->classKey_ = nullptr;};
          inline string getClassKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
          inline BaselineNameList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


          // nameKey Field Functions 
          bool hasNameKey() const { return this->nameKey_ != nullptr;};
          void deleteNameKey() { this->nameKey_ = nullptr;};
          inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
          inline BaselineNameList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        protected:
          // The alias of the baseline.
          shared_ptr<string> alias_ {};
          // The information about the baseline check item.
          shared_ptr<vector<BaselineNameList::BaselineItemList>> baselineItemList_ {};
          // The key of the type for the baseline.
          shared_ptr<string> classKey_ {};
          // The key of the name for the baseline.
          shared_ptr<string> nameKey_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->baselineNameList_ == nullptr && this->classKey_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline BaselineClassList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // baselineNameList Field Functions 
        bool hasBaselineNameList() const { return this->baselineNameList_ != nullptr;};
        void deleteBaselineNameList() { this->baselineNameList_ = nullptr;};
        inline const vector<BaselineClassList::BaselineNameList> & getBaselineNameList() const { DARABONBA_PTR_GET_CONST(baselineNameList_, vector<BaselineClassList::BaselineNameList>) };
        inline vector<BaselineClassList::BaselineNameList> getBaselineNameList() { DARABONBA_PTR_GET(baselineNameList_, vector<BaselineClassList::BaselineNameList>) };
        inline BaselineClassList& setBaselineNameList(const vector<BaselineClassList::BaselineNameList> & baselineNameList) { DARABONBA_PTR_SET_VALUE(baselineNameList_, baselineNameList) };
        inline BaselineClassList& setBaselineNameList(vector<BaselineClassList::BaselineNameList> && baselineNameList) { DARABONBA_PTR_SET_RVALUE(baselineNameList_, baselineNameList) };


        // classKey Field Functions 
        bool hasClassKey() const { return this->classKey_ != nullptr;};
        void deleteClassKey() { this->classKey_ = nullptr;};
        inline string getClassKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
        inline BaselineClassList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


      protected:
        // The alias of the baseline type.
        shared_ptr<string> alias_ {};
        // The information about the baseline.
        shared_ptr<vector<BaselineClassList::BaselineNameList>> baselineNameList_ {};
        // The key of the baseline type.
        shared_ptr<string> classKey_ {};
      };

      virtual bool empty() const override { return this->baselineClassList_ == nullptr; };
      // baselineClassList Field Functions 
      bool hasBaselineClassList() const { return this->baselineClassList_ != nullptr;};
      void deleteBaselineClassList() { this->baselineClassList_ = nullptr;};
      inline const vector<ImageBaselines::BaselineClassList> & getBaselineClassList() const { DARABONBA_PTR_GET_CONST(baselineClassList_, vector<ImageBaselines::BaselineClassList>) };
      inline vector<ImageBaselines::BaselineClassList> getBaselineClassList() { DARABONBA_PTR_GET(baselineClassList_, vector<ImageBaselines::BaselineClassList>) };
      inline ImageBaselines& setBaselineClassList(const vector<ImageBaselines::BaselineClassList> & baselineClassList) { DARABONBA_PTR_SET_VALUE(baselineClassList_, baselineClassList) };
      inline ImageBaselines& setBaselineClassList(vector<ImageBaselines::BaselineClassList> && baselineClassList) { DARABONBA_PTR_SET_RVALUE(baselineClassList_, baselineClassList) };


    protected:
      // An array that consists of baseline types.
      shared_ptr<vector<ImageBaselines::BaselineClassList>> baselineClassList_ {};
    };

    virtual bool empty() const override { return this->imageBaselines_ == nullptr
        && this->requestId_ == nullptr; };
    // imageBaselines Field Functions 
    bool hasImageBaselines() const { return this->imageBaselines_ != nullptr;};
    void deleteImageBaselines() { this->imageBaselines_ = nullptr;};
    inline const DescribeAllImageBaselineResponseBody::ImageBaselines & getImageBaselines() const { DARABONBA_PTR_GET_CONST(imageBaselines_, DescribeAllImageBaselineResponseBody::ImageBaselines) };
    inline DescribeAllImageBaselineResponseBody::ImageBaselines getImageBaselines() { DARABONBA_PTR_GET(imageBaselines_, DescribeAllImageBaselineResponseBody::ImageBaselines) };
    inline DescribeAllImageBaselineResponseBody& setImageBaselines(const DescribeAllImageBaselineResponseBody::ImageBaselines & imageBaselines) { DARABONBA_PTR_SET_VALUE(imageBaselines_, imageBaselines) };
    inline DescribeAllImageBaselineResponseBody& setImageBaselines(DescribeAllImageBaselineResponseBody::ImageBaselines && imageBaselines) { DARABONBA_PTR_SET_RVALUE(imageBaselines_, imageBaselines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllImageBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baselines that are used in image baseline checks.
    shared_ptr<DescribeAllImageBaselineResponseBody::ImageBaselines> imageBaselines_ {};
    // The ID of the request, which is used to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
