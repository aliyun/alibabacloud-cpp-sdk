// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTTHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTTHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentThemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentThemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentThemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDataAgentThemeResponseBody() = default ;
    DescribeDataAgentThemeResponseBody(const DescribeDataAgentThemeResponseBody &) = default ;
    DescribeDataAgentThemeResponseBody(DescribeDataAgentThemeResponseBody &&) = default ;
    DescribeDataAgentThemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentThemeResponseBody() = default ;
    DescribeDataAgentThemeResponseBody& operator=(const DescribeDataAgentThemeResponseBody &) = default ;
    DescribeDataAgentThemeResponseBody& operator=(DescribeDataAgentThemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedAt, modifiedAt_);
        DARABONBA_PTR_TO_JSON(ReferTo, referTo_);
        DARABONBA_PTR_TO_JSON(ThemeFrom, themeFrom_);
        DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
        DARABONBA_PTR_TO_JSON(ThemeName, themeName_);
        DARABONBA_PTR_TO_JSON(ThemeType, themeType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedAt, modifiedAt_);
        DARABONBA_PTR_FROM_JSON(ReferTo, referTo_);
        DARABONBA_PTR_FROM_JSON(ThemeFrom, themeFrom_);
        DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
        DARABONBA_PTR_FROM_JSON(ThemeName, themeName_);
        DARABONBA_PTR_FROM_JSON(ThemeType, themeType_);
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
      virtual bool empty() const override { return this->category_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->modifiedAt_ == nullptr && this->referTo_ == nullptr && this->themeFrom_ == nullptr
        && this->themeId_ == nullptr && this->themeName_ == nullptr && this->themeType_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedAt Field Functions 
      bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
      void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
      inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
      inline Data& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


      // referTo Field Functions 
      bool hasReferTo() const { return this->referTo_ != nullptr;};
      void deleteReferTo() { this->referTo_ = nullptr;};
      inline string getReferTo() const { DARABONBA_PTR_GET_DEFAULT(referTo_, "") };
      inline Data& setReferTo(string referTo) { DARABONBA_PTR_SET_VALUE(referTo_, referTo) };


      // themeFrom Field Functions 
      bool hasThemeFrom() const { return this->themeFrom_ != nullptr;};
      void deleteThemeFrom() { this->themeFrom_ = nullptr;};
      inline string getThemeFrom() const { DARABONBA_PTR_GET_DEFAULT(themeFrom_, "") };
      inline Data& setThemeFrom(string themeFrom) { DARABONBA_PTR_SET_VALUE(themeFrom_, themeFrom) };


      // themeId Field Functions 
      bool hasThemeId() const { return this->themeId_ != nullptr;};
      void deleteThemeId() { this->themeId_ = nullptr;};
      inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
      inline Data& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


      // themeName Field Functions 
      bool hasThemeName() const { return this->themeName_ != nullptr;};
      void deleteThemeName() { this->themeName_ = nullptr;};
      inline string getThemeName() const { DARABONBA_PTR_GET_DEFAULT(themeName_, "") };
      inline Data& setThemeName(string themeName) { DARABONBA_PTR_SET_VALUE(themeName_, themeName) };


      // themeType Field Functions 
      bool hasThemeType() const { return this->themeType_ != nullptr;};
      void deleteThemeType() { this->themeType_ = nullptr;};
      inline string getThemeType() const { DARABONBA_PTR_GET_DEFAULT(themeType_, "") };
      inline Data& setThemeType(string themeType) { DARABONBA_PTR_SET_VALUE(themeType_, themeType) };


    protected:
      // The common scenarios. Valid values: report, infographic, and others.
      shared_ptr<string> category_ {};
      // The creation time in ISO 8601 format.
      shared_ptr<string> createdAt_ {};
      // The description of the theme.
      shared_ptr<string> description_ {};
      // The modification time in ISO 8601 format.
      shared_ptr<string> modifiedAt_ {};
      // The theme tracing information. This field is currently not enabled.
      shared_ptr<string> referTo_ {};
      // The source of the theme. Valid values:
      // 
      // - system
      // - custom
      shared_ptr<string> themeFrom_ {};
      // The business ID of the theme.
      shared_ptr<string> themeId_ {};
      // The display name of the theme.
      shared_ptr<string> themeName_ {};
      // The theme stage. Valid values:
      // 
      // - design: design.md only.
      // - template: complete and renderable.
      shared_ptr<string> themeType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataAgentThemeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataAgentThemeResponseBody::Data) };
    inline DescribeDataAgentThemeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataAgentThemeResponseBody::Data) };
    inline DescribeDataAgentThemeResponseBody& setData(const DescribeDataAgentThemeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataAgentThemeResponseBody& setData(DescribeDataAgentThemeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataAgentThemeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataAgentThemeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataAgentThemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataAgentThemeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<DescribeDataAgentThemeResponseBody::Data> data_ {};
    // The error code returned when the request is abnormal.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
