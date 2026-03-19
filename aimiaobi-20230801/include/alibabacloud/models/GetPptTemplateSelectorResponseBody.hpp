// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPPTTEMPLATESELECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPPTTEMPLATESELECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPptTemplateSelectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPptTemplateSelectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPptTemplateSelectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPptTemplateSelectorResponseBody() = default ;
    GetPptTemplateSelectorResponseBody(const GetPptTemplateSelectorResponseBody &) = default ;
    GetPptTemplateSelectorResponseBody(GetPptTemplateSelectorResponseBody &&) = default ;
    GetPptTemplateSelectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPptTemplateSelectorResponseBody() = default ;
    GetPptTemplateSelectorResponseBody& operator=(const GetPptTemplateSelectorResponseBody &) = default ;
    GetPptTemplateSelectorResponseBody& operator=(GetPptTemplateSelectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Career, career_);
        DARABONBA_PTR_TO_JSON(Colour, colour_);
        DARABONBA_PTR_TO_JSON(SuitScene, suitScene_);
        DARABONBA_PTR_TO_JSON(SuitStyle, suitStyle_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Career, career_);
        DARABONBA_PTR_FROM_JSON(Colour, colour_);
        DARABONBA_PTR_FROM_JSON(SuitScene, suitScene_);
        DARABONBA_PTR_FROM_JSON(SuitStyle, suitStyle_);
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
      class SuitStyle : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuitStyle& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, SuitStyle& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        SuitStyle() = default ;
        SuitStyle(const SuitStyle &) = default ;
        SuitStyle(SuitStyle &&) = default ;
        SuitStyle(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuitStyle() = default ;
        SuitStyle& operator=(const SuitStyle &) = default ;
        SuitStyle& operator=(SuitStyle &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SuitStyle& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SuitStyle& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
      };

      class SuitScene : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuitScene& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, SuitScene& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        SuitScene() = default ;
        SuitScene(const SuitScene &) = default ;
        SuitScene(SuitScene &&) = default ;
        SuitScene(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuitScene() = default ;
        SuitScene& operator=(const SuitScene &) = default ;
        SuitScene& operator=(SuitScene &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SuitScene& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SuitScene& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
      };

      class Colour : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Colour& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Colour& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Colour() = default ;
        Colour(const Colour &) = default ;
        Colour(Colour &&) = default ;
        Colour(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Colour() = default ;
        Colour& operator=(const Colour &) = default ;
        Colour& operator=(Colour &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Colour& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Colour& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Colour& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
      };

      class Career : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Career& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsHot, isHot_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Career& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsHot, isHot_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Career() = default ;
        Career(const Career &) = default ;
        Career(Career &&) = default ;
        Career(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Career() = default ;
        Career& operator=(const Career &) = default ;
        Career& operator=(Career &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->isHot_ == nullptr && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Career& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isHot Field Functions 
        bool hasIsHot() const { return this->isHot_ != nullptr;};
        void deleteIsHot() { this->isHot_ = nullptr;};
        inline int64_t getIsHot() const { DARABONBA_PTR_GET_DEFAULT(isHot_, 0L) };
        inline Career& setIsHot(int64_t isHot) { DARABONBA_PTR_SET_VALUE(isHot_, isHot) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Career& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> isHot_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->career_ == nullptr
        && this->colour_ == nullptr && this->suitScene_ == nullptr && this->suitStyle_ == nullptr; };
      // career Field Functions 
      bool hasCareer() const { return this->career_ != nullptr;};
      void deleteCareer() { this->career_ = nullptr;};
      inline const vector<Data::Career> & getCareer() const { DARABONBA_PTR_GET_CONST(career_, vector<Data::Career>) };
      inline vector<Data::Career> getCareer() { DARABONBA_PTR_GET(career_, vector<Data::Career>) };
      inline Data& setCareer(const vector<Data::Career> & career) { DARABONBA_PTR_SET_VALUE(career_, career) };
      inline Data& setCareer(vector<Data::Career> && career) { DARABONBA_PTR_SET_RVALUE(career_, career) };


      // colour Field Functions 
      bool hasColour() const { return this->colour_ != nullptr;};
      void deleteColour() { this->colour_ = nullptr;};
      inline const vector<Data::Colour> & getColour() const { DARABONBA_PTR_GET_CONST(colour_, vector<Data::Colour>) };
      inline vector<Data::Colour> getColour() { DARABONBA_PTR_GET(colour_, vector<Data::Colour>) };
      inline Data& setColour(const vector<Data::Colour> & colour) { DARABONBA_PTR_SET_VALUE(colour_, colour) };
      inline Data& setColour(vector<Data::Colour> && colour) { DARABONBA_PTR_SET_RVALUE(colour_, colour) };


      // suitScene Field Functions 
      bool hasSuitScene() const { return this->suitScene_ != nullptr;};
      void deleteSuitScene() { this->suitScene_ = nullptr;};
      inline const vector<Data::SuitScene> & getSuitScene() const { DARABONBA_PTR_GET_CONST(suitScene_, vector<Data::SuitScene>) };
      inline vector<Data::SuitScene> getSuitScene() { DARABONBA_PTR_GET(suitScene_, vector<Data::SuitScene>) };
      inline Data& setSuitScene(const vector<Data::SuitScene> & suitScene) { DARABONBA_PTR_SET_VALUE(suitScene_, suitScene) };
      inline Data& setSuitScene(vector<Data::SuitScene> && suitScene) { DARABONBA_PTR_SET_RVALUE(suitScene_, suitScene) };


      // suitStyle Field Functions 
      bool hasSuitStyle() const { return this->suitStyle_ != nullptr;};
      void deleteSuitStyle() { this->suitStyle_ = nullptr;};
      inline const vector<Data::SuitStyle> & getSuitStyle() const { DARABONBA_PTR_GET_CONST(suitStyle_, vector<Data::SuitStyle>) };
      inline vector<Data::SuitStyle> getSuitStyle() { DARABONBA_PTR_GET(suitStyle_, vector<Data::SuitStyle>) };
      inline Data& setSuitStyle(const vector<Data::SuitStyle> & suitStyle) { DARABONBA_PTR_SET_VALUE(suitStyle_, suitStyle) };
      inline Data& setSuitStyle(vector<Data::SuitStyle> && suitStyle) { DARABONBA_PTR_SET_RVALUE(suitStyle_, suitStyle) };


    protected:
      shared_ptr<vector<Data::Career>> career_ {};
      shared_ptr<vector<Data::Colour>> colour_ {};
      shared_ptr<vector<Data::SuitScene>> suitScene_ {};
      shared_ptr<vector<Data::SuitStyle>> suitStyle_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPptTemplateSelectorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPptTemplateSelectorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPptTemplateSelectorResponseBody::Data) };
    inline GetPptTemplateSelectorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPptTemplateSelectorResponseBody::Data) };
    inline GetPptTemplateSelectorResponseBody& setData(const GetPptTemplateSelectorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPptTemplateSelectorResponseBody& setData(GetPptTemplateSelectorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPptTemplateSelectorResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPptTemplateSelectorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPptTemplateSelectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPptTemplateSelectorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPptTemplateSelectorResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
