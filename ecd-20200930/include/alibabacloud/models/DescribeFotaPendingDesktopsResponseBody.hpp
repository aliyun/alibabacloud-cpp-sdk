// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaPendingDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaPendingDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FotaPendingDesktops, fotaPendingDesktops_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaPendingDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FotaPendingDesktops, fotaPendingDesktops_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFotaPendingDesktopsResponseBody() = default ;
    DescribeFotaPendingDesktopsResponseBody(const DescribeFotaPendingDesktopsResponseBody &) = default ;
    DescribeFotaPendingDesktopsResponseBody(DescribeFotaPendingDesktopsResponseBody &&) = default ;
    DescribeFotaPendingDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaPendingDesktopsResponseBody() = default ;
    DescribeFotaPendingDesktopsResponseBody& operator=(const DescribeFotaPendingDesktopsResponseBody &) = default ;
    DescribeFotaPendingDesktopsResponseBody& operator=(DescribeFotaPendingDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FotaPendingDesktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FotaPendingDesktops& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(FotaProject, fotaProject_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FotaPendingDesktops& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(FotaProject, fotaProject_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FotaPendingDesktops() = default ;
      FotaPendingDesktops(const FotaPendingDesktops &) = default ;
      FotaPendingDesktops(FotaPendingDesktops &&) = default ;
      FotaPendingDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FotaPendingDesktops() = default ;
      FotaPendingDesktops& operator=(const FotaPendingDesktops &) = default ;
      FotaPendingDesktops& operator=(FotaPendingDesktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      protected:
        // The ID of the end user that connects to the cloud computer.
        shared_ptr<string> endUserId_ {};
      };

      virtual bool empty() const override { return this->currentAppVersion_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->fotaProject_ == nullptr && this->officeSiteId_ == nullptr && this->sessions_ == nullptr
        && this->status_ == nullptr; };
      // currentAppVersion Field Functions 
      bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
      void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
      inline string getCurrentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
      inline FotaPendingDesktops& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline FotaPendingDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline FotaPendingDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // fotaProject Field Functions 
      bool hasFotaProject() const { return this->fotaProject_ != nullptr;};
      void deleteFotaProject() { this->fotaProject_ = nullptr;};
      inline string getFotaProject() const { DARABONBA_PTR_GET_DEFAULT(fotaProject_, "") };
      inline FotaPendingDesktops& setFotaProject(string fotaProject) { DARABONBA_PTR_SET_VALUE(fotaProject_, fotaProject) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline FotaPendingDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<FotaPendingDesktops::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<FotaPendingDesktops::Sessions>) };
      inline vector<FotaPendingDesktops::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<FotaPendingDesktops::Sessions>) };
      inline FotaPendingDesktops& setSessions(const vector<FotaPendingDesktops::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline FotaPendingDesktops& setSessions(vector<FotaPendingDesktops::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline FotaPendingDesktops& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The current version of the image used by the cloud computer.
      shared_ptr<string> currentAppVersion_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      // > This parameter is not publicly available.
      shared_ptr<string> fotaProject_ {};
      // The ID of the office network.
      shared_ptr<string> officeSiteId_ {};
      // The connected sessions.
      shared_ptr<vector<FotaPendingDesktops::Sessions>> sessions_ {};
      // The status of the cloud computer.
      // 
      // Valid values:
      // 
      // *   0: The cloud computer is being created.
      // *   1: The cloud computer is being started.
      // *   2: The cloud computer is running.
      // *   3: The cloud computer is being stopped.
      // *   5: The cloud computer is stopped.
      // *   6: The cloud computer expires.
      // *   7: The cloud computer is deleted.
      // *   9: Failed to create the cloud computer.
      shared_ptr<int64_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->fotaPendingDesktops_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // fotaPendingDesktops Field Functions 
    bool hasFotaPendingDesktops() const { return this->fotaPendingDesktops_ != nullptr;};
    void deleteFotaPendingDesktops() { this->fotaPendingDesktops_ = nullptr;};
    inline const vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops> & getFotaPendingDesktops() const { DARABONBA_PTR_GET_CONST(fotaPendingDesktops_, vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops>) };
    inline vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops> getFotaPendingDesktops() { DARABONBA_PTR_GET(fotaPendingDesktops_, vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops>) };
    inline DescribeFotaPendingDesktopsResponseBody& setFotaPendingDesktops(const vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops> & fotaPendingDesktops) { DARABONBA_PTR_SET_VALUE(fotaPendingDesktops_, fotaPendingDesktops) };
    inline DescribeFotaPendingDesktopsResponseBody& setFotaPendingDesktops(vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops> && fotaPendingDesktops) { DARABONBA_PTR_SET_RVALUE(fotaPendingDesktops_, fotaPendingDesktops) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The cloud computers whose images can be and are pending to be updated to the version specified in `TaskUid`.
    shared_ptr<vector<DescribeFotaPendingDesktopsResponseBody::FotaPendingDesktops>> fotaPendingDesktops_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
