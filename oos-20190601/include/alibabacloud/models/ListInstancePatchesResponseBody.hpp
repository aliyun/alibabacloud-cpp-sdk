// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPATCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePatchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePatchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Patches, patches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePatchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Patches, patches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePatchesResponseBody() = default ;
    ListInstancePatchesResponseBody(const ListInstancePatchesResponseBody &) = default ;
    ListInstancePatchesResponseBody(ListInstancePatchesResponseBody &&) = default ;
    ListInstancePatchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePatchesResponseBody() = default ;
    ListInstancePatchesResponseBody& operator=(const ListInstancePatchesResponseBody &) = default ;
    ListInstancePatchesResponseBody& operator=(ListInstancePatchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Patches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Patches& obj) { 
        DARABONBA_PTR_TO_JSON(Classification, classification_);
        DARABONBA_PTR_TO_JSON(InstalledTime, installedTime_);
        DARABONBA_PTR_TO_JSON(KBId, KBId_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Patches& obj) { 
        DARABONBA_PTR_FROM_JSON(Classification, classification_);
        DARABONBA_PTR_FROM_JSON(InstalledTime, installedTime_);
        DARABONBA_PTR_FROM_JSON(KBId, KBId_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Patches() = default ;
      Patches(const Patches &) = default ;
      Patches(Patches &&) = default ;
      Patches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Patches() = default ;
      Patches& operator=(const Patches &) = default ;
      Patches& operator=(Patches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classification_ == nullptr
        && this->installedTime_ == nullptr && this->KBId_ == nullptr && this->severity_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // classification Field Functions 
      bool hasClassification() const { return this->classification_ != nullptr;};
      void deleteClassification() { this->classification_ = nullptr;};
      inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
      inline Patches& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


      // installedTime Field Functions 
      bool hasInstalledTime() const { return this->installedTime_ != nullptr;};
      void deleteInstalledTime() { this->installedTime_ = nullptr;};
      inline string getInstalledTime() const { DARABONBA_PTR_GET_DEFAULT(installedTime_, "") };
      inline Patches& setInstalledTime(string installedTime) { DARABONBA_PTR_SET_VALUE(installedTime_, installedTime) };


      // KBId Field Functions 
      bool hasKBId() const { return this->KBId_ != nullptr;};
      void deleteKBId() { this->KBId_ = nullptr;};
      inline string getKBId() const { DARABONBA_PTR_GET_DEFAULT(KBId_, "") };
      inline Patches& setKBId(string KBId) { DARABONBA_PTR_SET_VALUE(KBId_, KBId) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Patches& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Patches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Patches& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The classification of the patch.
      shared_ptr<string> classification_ {};
      // The time when the patch was installed.
      shared_ptr<string> installedTime_ {};
      // The Id of KBId.
      shared_ptr<string> KBId_ {};
      // The level of the severity.
      shared_ptr<string> severity_ {};
      // The status of the installation.
      shared_ptr<string> status_ {};
      // The name of the patch.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->patches_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstancePatchesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePatchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // patches Field Functions 
    bool hasPatches() const { return this->patches_ != nullptr;};
    void deletePatches() { this->patches_ = nullptr;};
    inline const vector<ListInstancePatchesResponseBody::Patches> & getPatches() const { DARABONBA_PTR_GET_CONST(patches_, vector<ListInstancePatchesResponseBody::Patches>) };
    inline vector<ListInstancePatchesResponseBody::Patches> getPatches() { DARABONBA_PTR_GET(patches_, vector<ListInstancePatchesResponseBody::Patches>) };
    inline ListInstancePatchesResponseBody& setPatches(const vector<ListInstancePatchesResponseBody::Patches> & patches) { DARABONBA_PTR_SET_VALUE(patches_, patches) };
    inline ListInstancePatchesResponseBody& setPatches(vector<ListInstancePatchesResponseBody::Patches> && patches) { DARABONBA_PTR_SET_RVALUE(patches_, patches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePatchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The information about the patch.
    shared_ptr<vector<ListInstancePatchesResponseBody::Patches>> patches_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
