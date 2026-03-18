// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTGRADEVOLUMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTGRADEVOLUMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantGradeVolumesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantGradeVolumesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantGradeVolumesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListTextbookAssistantGradeVolumesResponseBody() = default ;
    ListTextbookAssistantGradeVolumesResponseBody(const ListTextbookAssistantGradeVolumesResponseBody &) = default ;
    ListTextbookAssistantGradeVolumesResponseBody(ListTextbookAssistantGradeVolumesResponseBody &&) = default ;
    ListTextbookAssistantGradeVolumesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantGradeVolumesResponseBody() = default ;
    ListTextbookAssistantGradeVolumesResponseBody& operator=(const ListTextbookAssistantGradeVolumesResponseBody &) = default ;
    ListTextbookAssistantGradeVolumesResponseBody& operator=(ListTextbookAssistantGradeVolumesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(gradeVolumes, gradeVolumes_);
        DARABONBA_PTR_TO_JSON(textbookVersion, textbookVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(gradeVolumes, gradeVolumes_);
        DARABONBA_PTR_FROM_JSON(textbookVersion, textbookVersion_);
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
      class GradeVolumes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GradeVolumes& obj) { 
          DARABONBA_PTR_TO_JSON(grade, grade_);
          DARABONBA_PTR_TO_JSON(volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, GradeVolumes& obj) { 
          DARABONBA_PTR_FROM_JSON(grade, grade_);
          DARABONBA_PTR_FROM_JSON(volume, volume_);
        };
        GradeVolumes() = default ;
        GradeVolumes(const GradeVolumes &) = default ;
        GradeVolumes(GradeVolumes &&) = default ;
        GradeVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GradeVolumes() = default ;
        GradeVolumes& operator=(const GradeVolumes &) = default ;
        GradeVolumes& operator=(GradeVolumes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->grade_ == nullptr
        && this->volume_ == nullptr; };
        // grade Field Functions 
        bool hasGrade() const { return this->grade_ != nullptr;};
        void deleteGrade() { this->grade_ = nullptr;};
        inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
        inline GradeVolumes& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
        inline GradeVolumes& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> grade_ {};
        shared_ptr<string> volume_ {};
      };

      virtual bool empty() const override { return this->gradeVolumes_ == nullptr
        && this->textbookVersion_ == nullptr; };
      // gradeVolumes Field Functions 
      bool hasGradeVolumes() const { return this->gradeVolumes_ != nullptr;};
      void deleteGradeVolumes() { this->gradeVolumes_ = nullptr;};
      inline const vector<Data::GradeVolumes> & getGradeVolumes() const { DARABONBA_PTR_GET_CONST(gradeVolumes_, vector<Data::GradeVolumes>) };
      inline vector<Data::GradeVolumes> getGradeVolumes() { DARABONBA_PTR_GET(gradeVolumes_, vector<Data::GradeVolumes>) };
      inline Data& setGradeVolumes(const vector<Data::GradeVolumes> & gradeVolumes) { DARABONBA_PTR_SET_VALUE(gradeVolumes_, gradeVolumes) };
      inline Data& setGradeVolumes(vector<Data::GradeVolumes> && gradeVolumes) { DARABONBA_PTR_SET_RVALUE(gradeVolumes_, gradeVolumes) };


      // textbookVersion Field Functions 
      bool hasTextbookVersion() const { return this->textbookVersion_ != nullptr;};
      void deleteTextbookVersion() { this->textbookVersion_ = nullptr;};
      inline string getTextbookVersion() const { DARABONBA_PTR_GET_DEFAULT(textbookVersion_, "") };
      inline Data& setTextbookVersion(string textbookVersion) { DARABONBA_PTR_SET_VALUE(textbookVersion_, textbookVersion) };


    protected:
      shared_ptr<vector<Data::GradeVolumes>> gradeVolumes_ {};
      shared_ptr<string> textbookVersion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTextbookAssistantGradeVolumesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTextbookAssistantGradeVolumesResponseBody::Data>) };
    inline vector<ListTextbookAssistantGradeVolumesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTextbookAssistantGradeVolumesResponseBody::Data>) };
    inline ListTextbookAssistantGradeVolumesResponseBody& setData(const vector<ListTextbookAssistantGradeVolumesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTextbookAssistantGradeVolumesResponseBody& setData(vector<ListTextbookAssistantGradeVolumesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListTextbookAssistantGradeVolumesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListTextbookAssistantGradeVolumesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTextbookAssistantGradeVolumesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTextbookAssistantGradeVolumesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTextbookAssistantGradeVolumesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListTextbookAssistantGradeVolumesResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
