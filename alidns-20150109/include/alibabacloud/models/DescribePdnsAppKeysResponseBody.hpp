// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSAPPKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAppKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAppKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeys, appKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAppKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeys, appKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsAppKeysResponseBody() = default ;
    DescribePdnsAppKeysResponseBody(const DescribePdnsAppKeysResponseBody &) = default ;
    DescribePdnsAppKeysResponseBody(DescribePdnsAppKeysResponseBody &&) = default ;
    DescribePdnsAppKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAppKeysResponseBody() = default ;
    DescribePdnsAppKeysResponseBody& operator=(const DescribePdnsAppKeysResponseBody &) = default ;
    DescribePdnsAppKeysResponseBody& operator=(DescribePdnsAppKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppKeys& obj) { 
        DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
        DARABONBA_PTR_TO_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, AppKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
        DARABONBA_PTR_FROM_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      AppKeys() = default ;
      AppKeys(const AppKeys &) = default ;
      AppKeys(AppKeys &&) = default ;
      AppKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppKeys() = default ;
      AppKeys& operator=(const AppKeys &) = default ;
      AppKeys& operator=(AppKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BindEdgeDnsClusters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindEdgeDnsClusters& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(ClusterUserId, clusterUserId_);
        };
        friend void from_json(const Darabonba::Json& j, BindEdgeDnsClusters& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(ClusterUserId, clusterUserId_);
        };
        BindEdgeDnsClusters() = default ;
        BindEdgeDnsClusters(const BindEdgeDnsClusters &) = default ;
        BindEdgeDnsClusters(BindEdgeDnsClusters &&) = default ;
        BindEdgeDnsClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindEdgeDnsClusters() = default ;
        BindEdgeDnsClusters& operator=(const BindEdgeDnsClusters &) = default ;
        BindEdgeDnsClusters& operator=(BindEdgeDnsClusters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterUserId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline BindEdgeDnsClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline BindEdgeDnsClusters& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // clusterUserId Field Functions 
        bool hasClusterUserId() const { return this->clusterUserId_ != nullptr;};
        void deleteClusterUserId() { this->clusterUserId_ = nullptr;};
        inline string getClusterUserId() const { DARABONBA_PTR_GET_DEFAULT(clusterUserId_, "") };
        inline BindEdgeDnsClusters& setClusterUserId(string clusterUserId) { DARABONBA_PTR_SET_VALUE(clusterUserId_, clusterUserId) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<string> clusterUserId_ {};
      };

      virtual bool empty() const override { return this->appKeyId_ == nullptr
        && this->bindEdgeDnsClusters_ == nullptr && this->createDate_ == nullptr && this->createTimestamp_ == nullptr && this->remark_ == nullptr && this->state_ == nullptr; };
      // appKeyId Field Functions 
      bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
      void deleteAppKeyId() { this->appKeyId_ = nullptr;};
      inline string getAppKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
      inline AppKeys& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


      // bindEdgeDnsClusters Field Functions 
      bool hasBindEdgeDnsClusters() const { return this->bindEdgeDnsClusters_ != nullptr;};
      void deleteBindEdgeDnsClusters() { this->bindEdgeDnsClusters_ = nullptr;};
      inline const vector<AppKeys::BindEdgeDnsClusters> & getBindEdgeDnsClusters() const { DARABONBA_PTR_GET_CONST(bindEdgeDnsClusters_, vector<AppKeys::BindEdgeDnsClusters>) };
      inline vector<AppKeys::BindEdgeDnsClusters> getBindEdgeDnsClusters() { DARABONBA_PTR_GET(bindEdgeDnsClusters_, vector<AppKeys::BindEdgeDnsClusters>) };
      inline AppKeys& setBindEdgeDnsClusters(const vector<AppKeys::BindEdgeDnsClusters> & bindEdgeDnsClusters) { DARABONBA_PTR_SET_VALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };
      inline AppKeys& setBindEdgeDnsClusters(vector<AppKeys::BindEdgeDnsClusters> && bindEdgeDnsClusters) { DARABONBA_PTR_SET_RVALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline AppKeys& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline AppKeys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline AppKeys& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AppKeys& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> appKeyId_ {};
      shared_ptr<vector<AppKeys::BindEdgeDnsClusters>> bindEdgeDnsClusters_ {};
      shared_ptr<string> createDate_ {};
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->appKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // appKeys Field Functions 
    bool hasAppKeys() const { return this->appKeys_ != nullptr;};
    void deleteAppKeys() { this->appKeys_ = nullptr;};
    inline const vector<DescribePdnsAppKeysResponseBody::AppKeys> & getAppKeys() const { DARABONBA_PTR_GET_CONST(appKeys_, vector<DescribePdnsAppKeysResponseBody::AppKeys>) };
    inline vector<DescribePdnsAppKeysResponseBody::AppKeys> getAppKeys() { DARABONBA_PTR_GET(appKeys_, vector<DescribePdnsAppKeysResponseBody::AppKeys>) };
    inline DescribePdnsAppKeysResponseBody& setAppKeys(const vector<DescribePdnsAppKeysResponseBody::AppKeys> & appKeys) { DARABONBA_PTR_SET_VALUE(appKeys_, appKeys) };
    inline DescribePdnsAppKeysResponseBody& setAppKeys(vector<DescribePdnsAppKeysResponseBody::AppKeys> && appKeys) { DARABONBA_PTR_SET_RVALUE(appKeys_, appKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsAppKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribePdnsAppKeysResponseBody::AppKeys>> appKeys_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
