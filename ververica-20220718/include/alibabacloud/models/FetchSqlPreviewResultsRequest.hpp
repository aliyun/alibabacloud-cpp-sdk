// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHSQLPREVIEWRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHSQLPREVIEWRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class FetchSqlPreviewResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchSqlPreviewResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(queryId, queryId_);
      DARABONBA_PTR_TO_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, FetchSqlPreviewResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(queryId, queryId_);
      DARABONBA_PTR_FROM_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    FetchSqlPreviewResultsRequest() = default ;
    FetchSqlPreviewResultsRequest(const FetchSqlPreviewResultsRequest &) = default ;
    FetchSqlPreviewResultsRequest(FetchSqlPreviewResultsRequest &&) = default ;
    FetchSqlPreviewResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchSqlPreviewResultsRequest() = default ;
    FetchSqlPreviewResultsRequest& operator=(const FetchSqlPreviewResultsRequest &) = default ;
    FetchSqlPreviewResultsRequest& operator=(FetchSqlPreviewResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr
        && return this->sessionClusterName_ == nullptr && return this->sessionId_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline FetchSqlPreviewResultsRequest& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // sessionClusterName Field Functions 
    bool hasSessionClusterName() const { return this->sessionClusterName_ != nullptr;};
    void deleteSessionClusterName() { this->sessionClusterName_ = nullptr;};
    inline string sessionClusterName() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterName_, "") };
    inline FetchSqlPreviewResultsRequest& setSessionClusterName(string sessionClusterName) { DARABONBA_PTR_SET_VALUE(sessionClusterName_, sessionClusterName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FetchSqlPreviewResultsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> queryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionClusterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
