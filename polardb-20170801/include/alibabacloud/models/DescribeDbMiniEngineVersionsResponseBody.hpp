// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBMiniEngineVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    DescribeDBMiniEngineVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBRevisionVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBRevisionVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
      };
      friend void from_json(const Darabonba::Json& j, DBRevisionVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
      };
      DBRevisionVersionList() = default ;
      DBRevisionVersionList(const DBRevisionVersionList &) = default ;
      DBRevisionVersionList(DBRevisionVersionList &&) = default ;
      DBRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBRevisionVersionList() = default ;
      DBRevisionVersionList& operator=(const DBRevisionVersionList &) = default ;
      DBRevisionVersionList& operator=(DBRevisionVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->releaseNote_ == nullptr
        && this->releaseType_ == nullptr && this->revisionVersionCode_ == nullptr && this->revisionVersionName_ == nullptr; };
      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline DBRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline DBRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // revisionVersionCode Field Functions 
      bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
      void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
      inline string getRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
      inline DBRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


      // revisionVersionName Field Functions 
      bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
      void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
      inline string getRevisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
      inline DBRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


    protected:
      shared_ptr<string> releaseNote_ {};
      shared_ptr<string> releaseType_ {};
      shared_ptr<string> revisionVersionCode_ {};
      shared_ptr<string> revisionVersionName_ {};
    };

    virtual bool empty() const override { return this->DBRevisionVersionList_ == nullptr
        && this->requestId_ == nullptr; };
    // DBRevisionVersionList Field Functions 
    bool hasDBRevisionVersionList() const { return this->DBRevisionVersionList_ != nullptr;};
    void deleteDBRevisionVersionList() { this->DBRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList> & getDBRevisionVersionList() const { DARABONBA_PTR_GET_CONST(DBRevisionVersionList_, vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList>) };
    inline vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList> getDBRevisionVersionList() { DARABONBA_PTR_GET(DBRevisionVersionList_, vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList>) };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBRevisionVersionList(const vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList> & dBRevisionVersionList) { DARABONBA_PTR_SET_VALUE(DBRevisionVersionList_, dBRevisionVersionList) };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBRevisionVersionList(vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList> && dBRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(DBRevisionVersionList_, dBRevisionVersionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDBMiniEngineVersionsResponseBody::DBRevisionVersionList>> DBRevisionVersionList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
