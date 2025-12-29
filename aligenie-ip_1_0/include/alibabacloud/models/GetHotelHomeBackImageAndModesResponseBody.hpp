// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELHOMEBACKIMAGEANDMODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELHOMEBACKIMAGEANDMODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelHomeBackImageAndModesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelHomeBackImageAndModesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelHomeBackImageAndModesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetHotelHomeBackImageAndModesResponseBody() = default ;
    GetHotelHomeBackImageAndModesResponseBody(const GetHotelHomeBackImageAndModesResponseBody &) = default ;
    GetHotelHomeBackImageAndModesResponseBody(GetHotelHomeBackImageAndModesResponseBody &&) = default ;
    GetHotelHomeBackImageAndModesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelHomeBackImageAndModesResponseBody() = default ;
    GetHotelHomeBackImageAndModesResponseBody& operator=(const GetHotelHomeBackImageAndModesResponseBody &) = default ;
    GetHotelHomeBackImageAndModesResponseBody& operator=(GetHotelHomeBackImageAndModesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundImage, backgroundImage_);
        DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
        DARABONBA_PTR_TO_JSON(ModeList, modeList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundImage, backgroundImage_);
        DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
        DARABONBA_PTR_FROM_JSON(ModeList, modeList_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModeList& obj) { 
          DARABONBA_PTR_TO_JSON(CnName, cnName_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Icon, icon_);
        };
        friend void from_json(const Darabonba::Json& j, ModeList& obj) { 
          DARABONBA_PTR_FROM_JSON(CnName, cnName_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Icon, icon_);
        };
        ModeList() = default ;
        ModeList(const ModeList &) = default ;
        ModeList(ModeList &&) = default ;
        ModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModeList() = default ;
        ModeList& operator=(const ModeList &) = default ;
        ModeList& operator=(ModeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnName_ == nullptr
        && this->code_ == nullptr && this->icon_ == nullptr; };
        // cnName Field Functions 
        bool hasCnName() const { return this->cnName_ != nullptr;};
        void deleteCnName() { this->cnName_ = nullptr;};
        inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
        inline ModeList& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ModeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline ModeList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      protected:
        shared_ptr<string> cnName_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> icon_ {};
      };

      virtual bool empty() const override { return this->backgroundImage_ == nullptr
        && this->hotelName_ == nullptr && this->modeList_ == nullptr; };
      // backgroundImage Field Functions 
      bool hasBackgroundImage() const { return this->backgroundImage_ != nullptr;};
      void deleteBackgroundImage() { this->backgroundImage_ = nullptr;};
      inline string getBackgroundImage() const { DARABONBA_PTR_GET_DEFAULT(backgroundImage_, "") };
      inline Result& setBackgroundImage(string backgroundImage) { DARABONBA_PTR_SET_VALUE(backgroundImage_, backgroundImage) };


      // hotelName Field Functions 
      bool hasHotelName() const { return this->hotelName_ != nullptr;};
      void deleteHotelName() { this->hotelName_ = nullptr;};
      inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
      inline Result& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


      // modeList Field Functions 
      bool hasModeList() const { return this->modeList_ != nullptr;};
      void deleteModeList() { this->modeList_ = nullptr;};
      inline const vector<Result::ModeList> & getModeList() const { DARABONBA_PTR_GET_CONST(modeList_, vector<Result::ModeList>) };
      inline vector<Result::ModeList> getModeList() { DARABONBA_PTR_GET(modeList_, vector<Result::ModeList>) };
      inline Result& setModeList(const vector<Result::ModeList> & modeList) { DARABONBA_PTR_SET_VALUE(modeList_, modeList) };
      inline Result& setModeList(vector<Result::ModeList> && modeList) { DARABONBA_PTR_SET_RVALUE(modeList_, modeList) };


    protected:
      shared_ptr<string> backgroundImage_ {};
      shared_ptr<string> hotelName_ {};
      shared_ptr<vector<Result::ModeList>> modeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetHotelHomeBackImageAndModesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelHomeBackImageAndModesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelHomeBackImageAndModesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetHotelHomeBackImageAndModesResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetHotelHomeBackImageAndModesResponseBody::Result) };
    inline GetHotelHomeBackImageAndModesResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetHotelHomeBackImageAndModesResponseBody::Result) };
    inline GetHotelHomeBackImageAndModesResponseBody& setResult(const GetHotelHomeBackImageAndModesResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelHomeBackImageAndModesResponseBody& setResult(GetHotelHomeBackImageAndModesResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetHotelHomeBackImageAndModesResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
