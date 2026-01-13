// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListReleaseVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(releaseVersions, releaseVersions_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(releaseVersions, releaseVersions_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListReleaseVersionsResponseBody() = default ;
    ListReleaseVersionsResponseBody(const ListReleaseVersionsResponseBody &) = default ;
    ListReleaseVersionsResponseBody(ListReleaseVersionsResponseBody &&) = default ;
    ListReleaseVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsResponseBody() = default ;
    ListReleaseVersionsResponseBody& operator=(const ListReleaseVersionsResponseBody &) = default ;
    ListReleaseVersionsResponseBody& operator=(ListReleaseVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReleaseVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReleaseVersions& obj) { 
        DARABONBA_PTR_TO_JSON(communityVersion, communityVersion_);
        DARABONBA_PTR_TO_JSON(cpuArchitectures, cpuArchitectures_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(fusion, fusion_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(iaasType, iaasType_);
        DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(scalaVersion, scalaVersion_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ReleaseVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(communityVersion, communityVersion_);
        DARABONBA_PTR_FROM_JSON(cpuArchitectures, cpuArchitectures_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(fusion, fusion_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(iaasType, iaasType_);
        DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(scalaVersion, scalaVersion_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ReleaseVersions() = default ;
      ReleaseVersions(const ReleaseVersions &) = default ;
      ReleaseVersions(ReleaseVersions &&) = default ;
      ReleaseVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReleaseVersions() = default ;
      ReleaseVersions& operator=(const ReleaseVersions &) = default ;
      ReleaseVersions& operator=(ReleaseVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->communityVersion_ == nullptr
        && this->cpuArchitectures_ == nullptr && this->displayReleaseVersion_ == nullptr && this->fusion_ == nullptr && this->gmtCreate_ == nullptr && this->iaasType_ == nullptr
        && this->releaseVersion_ == nullptr && this->scalaVersion_ == nullptr && this->state_ == nullptr && this->type_ == nullptr; };
      // communityVersion Field Functions 
      bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
      void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
      inline string getCommunityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
      inline ReleaseVersions& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


      // cpuArchitectures Field Functions 
      bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
      void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
      inline const vector<string> & getCpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
      inline vector<string> getCpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
      inline ReleaseVersions& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
      inline ReleaseVersions& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline ReleaseVersions& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline ReleaseVersions& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ReleaseVersions& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // iaasType Field Functions 
      bool hasIaasType() const { return this->iaasType_ != nullptr;};
      void deleteIaasType() { this->iaasType_ = nullptr;};
      inline string getIaasType() const { DARABONBA_PTR_GET_DEFAULT(iaasType_, "") };
      inline ReleaseVersions& setIaasType(string iaasType) { DARABONBA_PTR_SET_VALUE(iaasType_, iaasType) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline ReleaseVersions& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // scalaVersion Field Functions 
      bool hasScalaVersion() const { return this->scalaVersion_ != nullptr;};
      void deleteScalaVersion() { this->scalaVersion_ = nullptr;};
      inline string getScalaVersion() const { DARABONBA_PTR_GET_DEFAULT(scalaVersion_, "") };
      inline ReleaseVersions& setScalaVersion(string scalaVersion) { DARABONBA_PTR_SET_VALUE(scalaVersion_, scalaVersion) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ReleaseVersions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ReleaseVersions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The version number of open source Spark.
      shared_ptr<string> communityVersion_ {};
      // The CPU architectures.
      shared_ptr<vector<string>> cpuArchitectures_ {};
      // The version number.
      shared_ptr<string> displayReleaseVersion_ {};
      // Indicates whether the Fusion engine is used for acceleration.
      shared_ptr<bool> fusion_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The type of the Infrastructure as a Service (IaaS) layer.
      shared_ptr<string> iaasType_ {};
      // The version number.
      shared_ptr<string> releaseVersion_ {};
      // The version of Scala.
      shared_ptr<string> scalaVersion_ {};
      // The status of the version.
      shared_ptr<string> state_ {};
      // The type of the version.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->releaseVersions_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReleaseVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReleaseVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // releaseVersions Field Functions 
    bool hasReleaseVersions() const { return this->releaseVersions_ != nullptr;};
    void deleteReleaseVersions() { this->releaseVersions_ = nullptr;};
    inline const vector<ListReleaseVersionsResponseBody::ReleaseVersions> & getReleaseVersions() const { DARABONBA_PTR_GET_CONST(releaseVersions_, vector<ListReleaseVersionsResponseBody::ReleaseVersions>) };
    inline vector<ListReleaseVersionsResponseBody::ReleaseVersions> getReleaseVersions() { DARABONBA_PTR_GET(releaseVersions_, vector<ListReleaseVersionsResponseBody::ReleaseVersions>) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(const vector<ListReleaseVersionsResponseBody::ReleaseVersions> & releaseVersions) { DARABONBA_PTR_SET_VALUE(releaseVersions_, releaseVersions) };
    inline ListReleaseVersionsResponseBody& setReleaseVersions(vector<ListReleaseVersionsResponseBody::ReleaseVersions> && releaseVersions) { DARABONBA_PTR_SET_RVALUE(releaseVersions_, releaseVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReleaseVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListReleaseVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The versions.
    shared_ptr<vector<ListReleaseVersionsResponseBody::ReleaseVersions>> releaseVersions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
