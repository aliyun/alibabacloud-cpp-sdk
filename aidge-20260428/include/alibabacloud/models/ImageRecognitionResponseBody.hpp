// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGERECOGNITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGERECOGNITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRecognitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRecognitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRecognitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImageRecognitionResponseBody() = default ;
    ImageRecognitionResponseBody(const ImageRecognitionResponseBody &) = default ;
    ImageRecognitionResponseBody(ImageRecognitionResponseBody &&) = default ;
    ImageRecognitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRecognitionResponseBody() = default ;
    ImageRecognitionResponseBody& operator=(const ImageRecognitionResponseBody &) = default ;
    ImageRecognitionResponseBody& operator=(ImageRecognitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BorderPixel, borderPixel_);
        DARABONBA_PTR_TO_JSON(NoobjCharacter, noobjCharacter_);
        DARABONBA_PTR_TO_JSON(NoobjLogo, noobjLogo_);
        DARABONBA_PTR_TO_JSON(NoobjNpx, noobjNpx_);
        DARABONBA_PTR_TO_JSON(NoobjWatermark, noobjWatermark_);
        DARABONBA_PTR_TO_JSON(ObjCharacter, objCharacter_);
        DARABONBA_PTR_TO_JSON(ObjLogo, objLogo_);
        DARABONBA_PTR_TO_JSON(ObjNpx, objNpx_);
        DARABONBA_PTR_TO_JSON(ObjWatermark, objWatermark_);
        DARABONBA_PTR_TO_JSON(PdNum, pdNum_);
        DARABONBA_PTR_TO_JSON(PdProp, pdProp_);
        DARABONBA_PTR_TO_JSON(RecText, recText_);
        DARABONBA_PTR_TO_JSON(TextProp, textProp_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BorderPixel, borderPixel_);
        DARABONBA_PTR_FROM_JSON(NoobjCharacter, noobjCharacter_);
        DARABONBA_PTR_FROM_JSON(NoobjLogo, noobjLogo_);
        DARABONBA_PTR_FROM_JSON(NoobjNpx, noobjNpx_);
        DARABONBA_PTR_FROM_JSON(NoobjWatermark, noobjWatermark_);
        DARABONBA_PTR_FROM_JSON(ObjCharacter, objCharacter_);
        DARABONBA_PTR_FROM_JSON(ObjLogo, objLogo_);
        DARABONBA_PTR_FROM_JSON(ObjNpx, objNpx_);
        DARABONBA_PTR_FROM_JSON(ObjWatermark, objWatermark_);
        DARABONBA_PTR_FROM_JSON(PdNum, pdNum_);
        DARABONBA_PTR_FROM_JSON(PdProp, pdProp_);
        DARABONBA_PTR_FROM_JSON(RecText, recText_);
        DARABONBA_PTR_FROM_JSON(TextProp, textProp_);
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
      virtual bool empty() const override { return this->borderPixel_ == nullptr
        && this->noobjCharacter_ == nullptr && this->noobjLogo_ == nullptr && this->noobjNpx_ == nullptr && this->noobjWatermark_ == nullptr && this->objCharacter_ == nullptr
        && this->objLogo_ == nullptr && this->objNpx_ == nullptr && this->objWatermark_ == nullptr && this->pdNum_ == nullptr && this->pdProp_ == nullptr
        && this->recText_ == nullptr && this->textProp_ == nullptr && this->usageMap_ == nullptr; };
      // borderPixel Field Functions 
      bool hasBorderPixel() const { return this->borderPixel_ != nullptr;};
      void deleteBorderPixel() { this->borderPixel_ = nullptr;};
      inline string getBorderPixel() const { DARABONBA_PTR_GET_DEFAULT(borderPixel_, "") };
      inline Data& setBorderPixel(string borderPixel) { DARABONBA_PTR_SET_VALUE(borderPixel_, borderPixel) };


      // noobjCharacter Field Functions 
      bool hasNoobjCharacter() const { return this->noobjCharacter_ != nullptr;};
      void deleteNoobjCharacter() { this->noobjCharacter_ = nullptr;};
      inline bool getNoobjCharacter() const { DARABONBA_PTR_GET_DEFAULT(noobjCharacter_, false) };
      inline Data& setNoobjCharacter(bool noobjCharacter) { DARABONBA_PTR_SET_VALUE(noobjCharacter_, noobjCharacter) };


      // noobjLogo Field Functions 
      bool hasNoobjLogo() const { return this->noobjLogo_ != nullptr;};
      void deleteNoobjLogo() { this->noobjLogo_ = nullptr;};
      inline bool getNoobjLogo() const { DARABONBA_PTR_GET_DEFAULT(noobjLogo_, false) };
      inline Data& setNoobjLogo(bool noobjLogo) { DARABONBA_PTR_SET_VALUE(noobjLogo_, noobjLogo) };


      // noobjNpx Field Functions 
      bool hasNoobjNpx() const { return this->noobjNpx_ != nullptr;};
      void deleteNoobjNpx() { this->noobjNpx_ = nullptr;};
      inline bool getNoobjNpx() const { DARABONBA_PTR_GET_DEFAULT(noobjNpx_, false) };
      inline Data& setNoobjNpx(bool noobjNpx) { DARABONBA_PTR_SET_VALUE(noobjNpx_, noobjNpx) };


      // noobjWatermark Field Functions 
      bool hasNoobjWatermark() const { return this->noobjWatermark_ != nullptr;};
      void deleteNoobjWatermark() { this->noobjWatermark_ = nullptr;};
      inline bool getNoobjWatermark() const { DARABONBA_PTR_GET_DEFAULT(noobjWatermark_, false) };
      inline Data& setNoobjWatermark(bool noobjWatermark) { DARABONBA_PTR_SET_VALUE(noobjWatermark_, noobjWatermark) };


      // objCharacter Field Functions 
      bool hasObjCharacter() const { return this->objCharacter_ != nullptr;};
      void deleteObjCharacter() { this->objCharacter_ = nullptr;};
      inline bool getObjCharacter() const { DARABONBA_PTR_GET_DEFAULT(objCharacter_, false) };
      inline Data& setObjCharacter(bool objCharacter) { DARABONBA_PTR_SET_VALUE(objCharacter_, objCharacter) };


      // objLogo Field Functions 
      bool hasObjLogo() const { return this->objLogo_ != nullptr;};
      void deleteObjLogo() { this->objLogo_ = nullptr;};
      inline bool getObjLogo() const { DARABONBA_PTR_GET_DEFAULT(objLogo_, false) };
      inline Data& setObjLogo(bool objLogo) { DARABONBA_PTR_SET_VALUE(objLogo_, objLogo) };


      // objNpx Field Functions 
      bool hasObjNpx() const { return this->objNpx_ != nullptr;};
      void deleteObjNpx() { this->objNpx_ = nullptr;};
      inline bool getObjNpx() const { DARABONBA_PTR_GET_DEFAULT(objNpx_, false) };
      inline Data& setObjNpx(bool objNpx) { DARABONBA_PTR_SET_VALUE(objNpx_, objNpx) };


      // objWatermark Field Functions 
      bool hasObjWatermark() const { return this->objWatermark_ != nullptr;};
      void deleteObjWatermark() { this->objWatermark_ = nullptr;};
      inline bool getObjWatermark() const { DARABONBA_PTR_GET_DEFAULT(objWatermark_, false) };
      inline Data& setObjWatermark(bool objWatermark) { DARABONBA_PTR_SET_VALUE(objWatermark_, objWatermark) };


      // pdNum Field Functions 
      bool hasPdNum() const { return this->pdNum_ != nullptr;};
      void deletePdNum() { this->pdNum_ = nullptr;};
      inline int32_t getPdNum() const { DARABONBA_PTR_GET_DEFAULT(pdNum_, 0) };
      inline Data& setPdNum(int32_t pdNum) { DARABONBA_PTR_SET_VALUE(pdNum_, pdNum) };


      // pdProp Field Functions 
      bool hasPdProp() const { return this->pdProp_ != nullptr;};
      void deletePdProp() { this->pdProp_ = nullptr;};
      inline string getPdProp() const { DARABONBA_PTR_GET_DEFAULT(pdProp_, "") };
      inline Data& setPdProp(string pdProp) { DARABONBA_PTR_SET_VALUE(pdProp_, pdProp) };


      // recText Field Functions 
      bool hasRecText() const { return this->recText_ != nullptr;};
      void deleteRecText() { this->recText_ = nullptr;};
      inline const vector<string> & getRecText() const { DARABONBA_PTR_GET_CONST(recText_, vector<string>) };
      inline vector<string> getRecText() { DARABONBA_PTR_GET(recText_, vector<string>) };
      inline Data& setRecText(const vector<string> & recText) { DARABONBA_PTR_SET_VALUE(recText_, recText) };
      inline Data& setRecText(vector<string> && recText) { DARABONBA_PTR_SET_RVALUE(recText_, recText) };


      // textProp Field Functions 
      bool hasTextProp() const { return this->textProp_ != nullptr;};
      void deleteTextProp() { this->textProp_ = nullptr;};
      inline string getTextProp() const { DARABONBA_PTR_GET_DEFAULT(textProp_, "") };
      inline Data& setTextProp(string textProp) { DARABONBA_PTR_SET_VALUE(textProp_, textProp) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The border pixel information, returned as a comma-separated string.
      shared_ptr<string> borderPixel_ {};
      // Indicates whether the non-subject area contains text.
      shared_ptr<bool> noobjCharacter_ {};
      // Indicates whether the non-subject area contains a logo.
      shared_ptr<bool> noobjLogo_ {};
      // Indicates whether the non-subject area contains irrelevant pixels or noise.
      shared_ptr<bool> noobjNpx_ {};
      // Indicates whether the non-subject area contains a watermark.
      shared_ptr<bool> noobjWatermark_ {};
      // Indicates whether the subject area contains text.
      shared_ptr<bool> objCharacter_ {};
      // Indicates whether the subject area contains a logo.
      shared_ptr<bool> objLogo_ {};
      // Indicates whether the subject area contains irrelevant pixels or noise.
      shared_ptr<bool> objNpx_ {};
      // Indicates whether the subject area contains a watermark.
      shared_ptr<bool> objWatermark_ {};
      // The product count.
      shared_ptr<int32_t> pdNum_ {};
      // The product proportion.
      shared_ptr<string> pdProp_ {};
      // The list of recognized text.
      shared_ptr<vector<string>> recText_ {};
      // The text proportion.
      shared_ptr<string> textProp_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImageRecognitionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageRecognitionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageRecognitionResponseBody::Data) };
    inline ImageRecognitionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageRecognitionResponseBody::Data) };
    inline ImageRecognitionResponseBody& setData(const ImageRecognitionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageRecognitionResponseBody& setData(ImageRecognitionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImageRecognitionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageRecognitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImageRecognitionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is not returned if the call is successful.
    shared_ptr<string> code_ {};
    // The intelligent element recognition result.
    shared_ptr<ImageRecognitionResponseBody::Data> data_ {};
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
