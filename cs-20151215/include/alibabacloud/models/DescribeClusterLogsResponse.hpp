// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERLOGSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERLOGSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterLogsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterLogsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterLogsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeClusterLogsResponse() = default ;
    DescribeClusterLogsResponse(const DescribeClusterLogsResponse &) = default ;
    DescribeClusterLogsResponse(DescribeClusterLogsResponse &&) = default ;
    DescribeClusterLogsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterLogsResponse() = default ;
    DescribeClusterLogsResponse& operator=(const DescribeClusterLogsResponse &) = default ;
    DescribeClusterLogsResponse& operator=(DescribeClusterLogsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(ID, ID_);
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(cluster_log, clusterLog_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(ID, ID_);
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(cluster_log, clusterLog_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ID_ == nullptr
        && this->clusterId_ == nullptr && this->clusterLog_ == nullptr && this->created_ == nullptr && this->updated_ == nullptr; };
      // ID Field Functions 
      bool hasID() const { return this->ID_ != nullptr;};
      void deleteID() { this->ID_ = nullptr;};
      inline int64_t getID() const { DARABONBA_PTR_GET_DEFAULT(ID_, 0L) };
      inline Body& setID(int64_t ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Body& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterLog Field Functions 
      bool hasClusterLog() const { return this->clusterLog_ != nullptr;};
      void deleteClusterLog() { this->clusterLog_ = nullptr;};
      inline string getClusterLog() const { DARABONBA_PTR_GET_DEFAULT(clusterLog_, "") };
      inline Body& setClusterLog(string clusterLog) { DARABONBA_PTR_SET_VALUE(clusterLog_, clusterLog) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Body& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
      inline Body& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The ID of the log entry.
      shared_ptr<int64_t> ID_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The log content.
      shared_ptr<string> clusterLog_ {};
      // The time when the log entry was generated.
      shared_ptr<string> created_ {};
      // The time when the log entry was updated.
      shared_ptr<string> updated_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeClusterLogsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeClusterLogsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeClusterLogsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeClusterLogsResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeClusterLogsResponse::Body>) };
    inline vector<DescribeClusterLogsResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeClusterLogsResponse::Body>) };
    inline DescribeClusterLogsResponse& setBody(const vector<DescribeClusterLogsResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeClusterLogsResponse& setBody(vector<DescribeClusterLogsResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeClusterLogsResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
