// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDocumentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchAddDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addDocumentInfos, addDocumentInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addDocumentInfos, addDocumentInfos_);
    };
    BatchAddDocumentRequest() = default ;
    BatchAddDocumentRequest(const BatchAddDocumentRequest &) = default ;
    BatchAddDocumentRequest(BatchAddDocumentRequest &&) = default ;
    BatchAddDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddDocumentRequest() = default ;
    BatchAddDocumentRequest& operator=(const BatchAddDocumentRequest &) = default ;
    BatchAddDocumentRequest& operator=(BatchAddDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addDocumentInfos_ == nullptr; };
    // addDocumentInfos Field Functions 
    bool hasAddDocumentInfos() const { return this->addDocumentInfos_ != nullptr;};
    void deleteAddDocumentInfos() { this->addDocumentInfos_ = nullptr;};
    inline const vector<AddDocumentInfo> & getAddDocumentInfos() const { DARABONBA_PTR_GET_CONST(addDocumentInfos_, vector<AddDocumentInfo>) };
    inline vector<AddDocumentInfo> getAddDocumentInfos() { DARABONBA_PTR_GET(addDocumentInfos_, vector<AddDocumentInfo>) };
    inline BatchAddDocumentRequest& setAddDocumentInfos(const vector<AddDocumentInfo> & addDocumentInfos) { DARABONBA_PTR_SET_VALUE(addDocumentInfos_, addDocumentInfos) };
    inline BatchAddDocumentRequest& setAddDocumentInfos(vector<AddDocumentInfo> && addDocumentInfos) { DARABONBA_PTR_SET_RVALUE(addDocumentInfos_, addDocumentInfos) };


  protected:
    shared_ptr<vector<AddDocumentInfo>> addDocumentInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
