// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESTARTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESTARTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BatchRestartApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRestartApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRestartApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    BatchRestartApplicationsRequest() = default ;
    BatchRestartApplicationsRequest(const BatchRestartApplicationsRequest &) = default ;
    BatchRestartApplicationsRequest(BatchRestartApplicationsRequest &&) = default ;
    BatchRestartApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRestartApplicationsRequest() = default ;
    BatchRestartApplicationsRequest& operator=(const BatchRestartApplicationsRequest &) = default ;
    BatchRestartApplicationsRequest& operator=(BatchRestartApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->namespaceId_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline BatchRestartApplicationsRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline BatchRestartApplicationsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The application IDs. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> appIds_ {};
    // The namespace ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
