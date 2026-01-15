// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALGORITHMVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALGORITHMVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListAlgorithmVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlgorithmVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmVersions, algorithmVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlgorithmVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmVersions, algorithmVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlgorithmVersionsResponseBody() = default ;
    ListAlgorithmVersionsResponseBody(const ListAlgorithmVersionsResponseBody &) = default ;
    ListAlgorithmVersionsResponseBody(ListAlgorithmVersionsResponseBody &&) = default ;
    ListAlgorithmVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlgorithmVersionsResponseBody() = default ;
    ListAlgorithmVersionsResponseBody& operator=(const ListAlgorithmVersionsResponseBody &) = default ;
    ListAlgorithmVersionsResponseBody& operator=(ListAlgorithmVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlgorithmVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlgorithmVersions& obj) { 
        DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
        DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
        DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
        DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AlgorithmVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
        DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
        DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
        DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AlgorithmVersions() = default ;
      AlgorithmVersions(const AlgorithmVersions &) = default ;
      AlgorithmVersions(AlgorithmVersions &&) = default ;
      AlgorithmVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlgorithmVersions() = default ;
      AlgorithmVersions& operator=(const AlgorithmVersions &) = default ;
      AlgorithmVersions& operator=(AlgorithmVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithmId_ == nullptr
        && this->algorithmName_ == nullptr && this->algorithmProvider_ == nullptr && this->algorithmVersion_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // algorithmId Field Functions 
      bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
      void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
      inline string getAlgorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
      inline AlgorithmVersions& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


      // algorithmName Field Functions 
      bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
      void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
      inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
      inline AlgorithmVersions& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


      // algorithmProvider Field Functions 
      bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
      void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
      inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
      inline AlgorithmVersions& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


      // algorithmVersion Field Functions 
      bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
      void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
      inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
      inline AlgorithmVersions& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline AlgorithmVersions& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline AlgorithmVersions& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline AlgorithmVersions& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AlgorithmVersions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> algorithmId_ {};
      shared_ptr<string> algorithmName_ {};
      shared_ptr<string> algorithmProvider_ {};
      shared_ptr<string> algorithmVersion_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> tenantId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->algorithmVersions_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // algorithmVersions Field Functions 
    bool hasAlgorithmVersions() const { return this->algorithmVersions_ != nullptr;};
    void deleteAlgorithmVersions() { this->algorithmVersions_ = nullptr;};
    inline const vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions> & getAlgorithmVersions() const { DARABONBA_PTR_GET_CONST(algorithmVersions_, vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions>) };
    inline vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions> getAlgorithmVersions() { DARABONBA_PTR_GET(algorithmVersions_, vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions>) };
    inline ListAlgorithmVersionsResponseBody& setAlgorithmVersions(const vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions> & algorithmVersions) { DARABONBA_PTR_SET_VALUE(algorithmVersions_, algorithmVersions) };
    inline ListAlgorithmVersionsResponseBody& setAlgorithmVersions(vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions> && algorithmVersions) { DARABONBA_PTR_SET_RVALUE(algorithmVersions_, algorithmVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlgorithmVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAlgorithmVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAlgorithmVersionsResponseBody::AlgorithmVersions>> algorithmVersions_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
