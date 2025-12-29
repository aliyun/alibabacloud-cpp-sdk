// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYDOWNLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYDOWNLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyDownloadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyDownloadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadTaskId, downloadTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyDownloadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadTaskId, downloadTaskId_);
    };
    QueryVerifyDownloadTaskRequest() = default ;
    QueryVerifyDownloadTaskRequest(const QueryVerifyDownloadTaskRequest &) = default ;
    QueryVerifyDownloadTaskRequest(QueryVerifyDownloadTaskRequest &&) = default ;
    QueryVerifyDownloadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyDownloadTaskRequest() = default ;
    QueryVerifyDownloadTaskRequest& operator=(const QueryVerifyDownloadTaskRequest &) = default ;
    QueryVerifyDownloadTaskRequest& operator=(QueryVerifyDownloadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadTaskId_ == nullptr; };
    // downloadTaskId Field Functions 
    bool hasDownloadTaskId() const { return this->downloadTaskId_ != nullptr;};
    void deleteDownloadTaskId() { this->downloadTaskId_ = nullptr;};
    inline string getDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskId_, "") };
    inline QueryVerifyDownloadTaskRequest& setDownloadTaskId(string downloadTaskId) { DARABONBA_PTR_SET_VALUE(downloadTaskId_, downloadTaskId) };


  protected:
    // Download task ID.
    shared_ptr<string> downloadTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
