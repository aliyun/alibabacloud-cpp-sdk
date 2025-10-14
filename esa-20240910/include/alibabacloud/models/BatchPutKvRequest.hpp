// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchPutKvRequestKvList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutKvRequest() = default ;
    BatchPutKvRequest(const BatchPutKvRequest &) = default ;
    BatchPutKvRequest(BatchPutKvRequest &&) = default ;
    BatchPutKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvRequest() = default ;
    BatchPutKvRequest& operator=(const BatchPutKvRequest &) = default ;
    BatchPutKvRequest& operator=(BatchPutKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvList_ == nullptr
        && return this->namespace_ == nullptr; };
    // kvList Field Functions 
    bool hasKvList() const { return this->kvList_ != nullptr;};
    void deleteKvList() { this->kvList_ = nullptr;};
    inline const vector<BatchPutKvRequestKvList> & kvList() const { DARABONBA_PTR_GET_CONST(kvList_, vector<BatchPutKvRequestKvList>) };
    inline vector<BatchPutKvRequestKvList> kvList() { DARABONBA_PTR_GET(kvList_, vector<BatchPutKvRequestKvList>) };
    inline BatchPutKvRequest& setKvList(const vector<BatchPutKvRequestKvList> & kvList) { DARABONBA_PTR_SET_VALUE(kvList_, kvList) };
    inline BatchPutKvRequest& setKvList(vector<BatchPutKvRequestKvList> && kvList) { DARABONBA_PTR_SET_RVALUE(kvList_, kvList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The key-value pairs that you want to configure at a time. The total size can be up to 2 MB (2 × 1000 × 1000).
    // 
    // This parameter is required.
    std::shared_ptr<vector<BatchPutKvRequestKvList>> kvList_ = nullptr;
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
