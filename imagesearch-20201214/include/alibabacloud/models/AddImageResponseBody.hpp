// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, PicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
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
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->region_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline PicInfo& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline PicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The result of category prediction. If a category is specified in the request, the specified category prevails.
      shared_ptr<int32_t> categoryId_ {};
      // The result of subject identification. The subject area of the image is in the format of `x1,x2,y1,y2`. `x1 and y1` represent the position in the upper-left corner, in pixels. `x2 and y2` represent the position in the lower-right corner, in pixels. If a subject area is specified in the request, the specified subject area prevails.
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
    // The code returned.
    // 
    // *   A value of 0 indicates that the request was successful.
    // *   Values other than 0 indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // The error message returned if the request failed.
    // 
    // > No value is returned if the request was successful, and an error message is returned if the request failed.
    shared_ptr<string> message_ {};
    // The results of category prediction and subject identification.
    shared_ptr<AddImageResponseBody::PicInfo> picInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
