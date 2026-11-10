// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSKILLDOWNLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSKILLDOWNLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentSkillDownloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSkillDownloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSkillDownloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDataAgentSkillDownloadResponseBody() = default ;
    DescribeDataAgentSkillDownloadResponseBody(const DescribeDataAgentSkillDownloadResponseBody &) = default ;
    DescribeDataAgentSkillDownloadResponseBody(DescribeDataAgentSkillDownloadResponseBody &&) = default ;
    DescribeDataAgentSkillDownloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSkillDownloadResponseBody() = default ;
    DescribeDataAgentSkillDownloadResponseBody& operator=(const DescribeDataAgentSkillDownloadResponseBody &) = default ;
    DescribeDataAgentSkillDownloadResponseBody& operator=(DescribeDataAgentSkillDownloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
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
      virtual bool empty() const override { return this->downloadLink_ == nullptr
        && this->intranetDownloadLink_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr; };
      // downloadLink Field Functions 
      bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
      void deleteDownloadLink() { this->downloadLink_ = nullptr;};
      inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
      inline Data& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


      // intranetDownloadLink Field Functions 
      bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
      void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
      inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
      inline Data& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Data& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Data& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    protected:
      // The public download link.
      shared_ptr<string> downloadLink_ {};
      // The internal network download link.
      shared_ptr<string> intranetDownloadLink_ {};
      // The skill ID.
      shared_ptr<string> skillId_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataAgentSkillDownloadResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataAgentSkillDownloadResponseBody::Data) };
    inline DescribeDataAgentSkillDownloadResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataAgentSkillDownloadResponseBody::Data) };
    inline DescribeDataAgentSkillDownloadResponseBody& setData(const DescribeDataAgentSkillDownloadResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataAgentSkillDownloadResponseBody& setData(DescribeDataAgentSkillDownloadResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataAgentSkillDownloadResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataAgentSkillDownloadResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataAgentSkillDownloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataAgentSkillDownloadResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<DescribeDataAgentSkillDownloadResponseBody::Data> data_ {};
    // The error code returned when a request exception occurs.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
