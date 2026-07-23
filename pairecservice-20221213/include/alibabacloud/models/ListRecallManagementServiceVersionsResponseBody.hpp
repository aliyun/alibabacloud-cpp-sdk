// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTSERVICEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTSERVICEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListRecallManagementServiceVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecallManagementServiceVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersions, recallManagementServiceVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecallManagementServiceVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersions, recallManagementServiceVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecallManagementServiceVersionsResponseBody() = default ;
    ListRecallManagementServiceVersionsResponseBody(const ListRecallManagementServiceVersionsResponseBody &) = default ;
    ListRecallManagementServiceVersionsResponseBody(ListRecallManagementServiceVersionsResponseBody &&) = default ;
    ListRecallManagementServiceVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecallManagementServiceVersionsResponseBody() = default ;
    ListRecallManagementServiceVersionsResponseBody& operator=(const ListRecallManagementServiceVersionsResponseBody &) = default ;
    ListRecallManagementServiceVersionsResponseBody& operator=(ListRecallManagementServiceVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagementServiceVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagementServiceVersions& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(IsEffective, isEffective_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagementServiceVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(IsEffective, isEffective_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      };
      RecallManagementServiceVersions() = default ;
      RecallManagementServiceVersions(const RecallManagementServiceVersions &) = default ;
      RecallManagementServiceVersions(RecallManagementServiceVersions &&) = default ;
      RecallManagementServiceVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagementServiceVersions() = default ;
      RecallManagementServiceVersions& operator=(const RecallManagementServiceVersions &) = default ;
      RecallManagementServiceVersions& operator=(RecallManagementServiceVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->isEffective_ == nullptr && this->name_ == nullptr && this->recallManagementServiceVersionId_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline RecallManagementServiceVersions& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline RecallManagementServiceVersions& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // isEffective Field Functions 
      bool hasIsEffective() const { return this->isEffective_ != nullptr;};
      void deleteIsEffective() { this->isEffective_ = nullptr;};
      inline bool getIsEffective() const { DARABONBA_PTR_GET_DEFAULT(isEffective_, false) };
      inline RecallManagementServiceVersions& setIsEffective(bool isEffective) { DARABONBA_PTR_SET_VALUE(isEffective_, isEffective) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecallManagementServiceVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // recallManagementServiceVersionId Field Functions 
      bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
      void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
      inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
      inline RecallManagementServiceVersions& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


    protected:
      // The creation time.
      shared_ptr<string> gmtCreateTime_ {};
      // The modification time.
      shared_ptr<string> gmtModifiedTime_ {};
      // Indicates whether the version is effective.
      shared_ptr<bool> isEffective_ {};
      // The version name.
      shared_ptr<string> name_ {};
      // The version ID of the Recall Management Service.
      shared_ptr<string> recallManagementServiceVersionId_ {};
    };

    virtual bool empty() const override { return this->recallManagementServiceVersions_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // recallManagementServiceVersions Field Functions 
    bool hasRecallManagementServiceVersions() const { return this->recallManagementServiceVersions_ != nullptr;};
    void deleteRecallManagementServiceVersions() { this->recallManagementServiceVersions_ = nullptr;};
    inline const vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions> & getRecallManagementServiceVersions() const { DARABONBA_PTR_GET_CONST(recallManagementServiceVersions_, vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions>) };
    inline vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions> getRecallManagementServiceVersions() { DARABONBA_PTR_GET(recallManagementServiceVersions_, vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions>) };
    inline ListRecallManagementServiceVersionsResponseBody& setRecallManagementServiceVersions(const vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions> & recallManagementServiceVersions) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersions_, recallManagementServiceVersions) };
    inline ListRecallManagementServiceVersionsResponseBody& setRecallManagementServiceVersions(vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions> && recallManagementServiceVersions) { DARABONBA_PTR_SET_RVALUE(recallManagementServiceVersions_, recallManagementServiceVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecallManagementServiceVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRecallManagementServiceVersionsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of Recall Management Service versions.
    shared_ptr<vector<ListRecallManagementServiceVersionsResponseBody::RecallManagementServiceVersions>> recallManagementServiceVersions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
