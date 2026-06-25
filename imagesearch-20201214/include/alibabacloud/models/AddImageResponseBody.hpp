// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class AddImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddImageResponseBody() = default ;
    AddImageResponseBody(const AddImageResponseBody &) = default ;
    AddImageResponseBody(AddImageResponseBody &&) = default ;
    AddImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageResponseBody() = default ;
    AddImageResponseBody& operator=(const AddImageResponseBody &) = default ;
    AddImageResponseBody& operator=(AddImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PicInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PicInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AllCategories, allCategories_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(MultiRegion, multiRegion_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, PicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AllCategories, allCategories_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(MultiRegion, multiRegion_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      PicInfo() = default ;
      PicInfo(const PicInfo &) = default ;
      PicInfo(PicInfo &&) = default ;
      PicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PicInfo() = default ;
      PicInfo& operator=(const PicInfo &) = default ;
      PicInfo& operator=(PicInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MultiRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiRegion& obj) { 
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, MultiRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        MultiRegion() = default ;
        MultiRegion(const MultiRegion &) = default ;
        MultiRegion(MultiRegion &&) = default ;
        MultiRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiRegion() = default ;
        MultiRegion& operator=(const MultiRegion &) = default ;
        MultiRegion& operator=(MultiRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->region_ == nullptr; };
        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MultiRegion& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // The subject identification result. The subject region of the image, in the format of x1,x2,y1,y2, where x1,y1 is the upper-left point and x2,y2 is the lower-right point. If the user specifies a subject region in the request, the specified region is used.
        shared_ptr<string> region_ {};
      };

      class AllCategories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllCategories& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AllCategories& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AllCategories() = default ;
        AllCategories(const AllCategories &) = default ;
        AllCategories(AllCategories &&) = default ;
        AllCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllCategories() = default ;
        AllCategories& operator=(const AllCategories &) = default ;
        AllCategories& operator=(AllCategories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline AllCategories& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AllCategories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The category ID.
        shared_ptr<int32_t> id_ {};
        // The category name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->allCategories_ == nullptr
        && this->categoryId_ == nullptr && this->multiRegion_ == nullptr && this->region_ == nullptr; };
      // allCategories Field Functions 
      bool hasAllCategories() const { return this->allCategories_ != nullptr;};
      void deleteAllCategories() { this->allCategories_ = nullptr;};
      inline const vector<PicInfo::AllCategories> & getAllCategories() const { DARABONBA_PTR_GET_CONST(allCategories_, vector<PicInfo::AllCategories>) };
      inline vector<PicInfo::AllCategories> getAllCategories() { DARABONBA_PTR_GET(allCategories_, vector<PicInfo::AllCategories>) };
      inline PicInfo& setAllCategories(const vector<PicInfo::AllCategories> & allCategories) { DARABONBA_PTR_SET_VALUE(allCategories_, allCategories) };
      inline PicInfo& setAllCategories(vector<PicInfo::AllCategories> && allCategories) { DARABONBA_PTR_SET_RVALUE(allCategories_, allCategories) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline PicInfo& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // multiRegion Field Functions 
      bool hasMultiRegion() const { return this->multiRegion_ != nullptr;};
      void deleteMultiRegion() { this->multiRegion_ = nullptr;};
      inline const vector<PicInfo::MultiRegion> & getMultiRegion() const { DARABONBA_PTR_GET_CONST(multiRegion_, vector<PicInfo::MultiRegion>) };
      inline vector<PicInfo::MultiRegion> getMultiRegion() { DARABONBA_PTR_GET(multiRegion_, vector<PicInfo::MultiRegion>) };
      inline PicInfo& setMultiRegion(const vector<PicInfo::MultiRegion> & multiRegion) { DARABONBA_PTR_SET_VALUE(multiRegion_, multiRegion) };
      inline PicInfo& setMultiRegion(vector<PicInfo::MultiRegion> && multiRegion) { DARABONBA_PTR_SET_RVALUE(multiRegion_, multiRegion) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline PicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The information about all categories supported by the system.
      shared_ptr<vector<PicInfo::AllCategories>> allCategories_ {};
      // The category prediction result. If the user specifies a category in the request, the specified category is used.
      shared_ptr<int32_t> categoryId_ {};
      // The collection of subject identification results.
      // > Upgrade to V3.1.1 or later to use this feature.
      shared_ptr<vector<PicInfo::MultiRegion>> multiRegion_ {};
      // The subject identification result. The subject region of the image, in the format of `x1,x2,y1,y2`, where `x1,y1` is the upper-left point and `x2,y2` is the lower-right point. If the user specifies a subject region in the request, the specified region is used.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->picInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddImageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // picInfo Field Functions 
    bool hasPicInfo() const { return this->picInfo_ != nullptr;};
    void deletePicInfo() { this->picInfo_ = nullptr;};
    inline const AddImageResponseBody::PicInfo & getPicInfo() const { DARABONBA_PTR_GET_CONST(picInfo_, AddImageResponseBody::PicInfo) };
    inline AddImageResponseBody::PicInfo getPicInfo() { DARABONBA_PTR_GET(picInfo_, AddImageResponseBody::PicInfo) };
    inline AddImageResponseBody& setPicInfo(const AddImageResponseBody::PicInfo & picInfo) { DARABONBA_PTR_SET_VALUE(picInfo_, picInfo) };
    inline AddImageResponseBody& setPicInfo(AddImageResponseBody::PicInfo && picInfo) { DARABONBA_PTR_SET_RVALUE(picInfo_, picInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    // 
    // - 0: success.
    // - Non-zero: failure.
    shared_ptr<int32_t> code_ {};
    // The error message.
    // > No data is returned for successful requests. Error messages are returned for failed requests.
    shared_ptr<string> message_ {};
    // The category prediction and subject identification results.
    shared_ptr<AddImageResponseBody::PicInfo> picInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
