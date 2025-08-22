// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchPutDcdnKvRequestKvList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchPutDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvList, kvList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvList, kvList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchPutDcdnKvRequest() = default ;
    BatchPutDcdnKvRequest(const BatchPutDcdnKvRequest &) = default ;
    BatchPutDcdnKvRequest(BatchPutDcdnKvRequest &&) = default ;
    BatchPutDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutDcdnKvRequest() = default ;
    BatchPutDcdnKvRequest& operator=(const BatchPutDcdnKvRequest &) = default ;
    BatchPutDcdnKvRequest& operator=(BatchPutDcdnKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kvList_ != nullptr
        && this->namespace_ != nullptr; };
    // kvList Field Functions 
    bool hasKvList() const { return this->kvList_ != nullptr;};
    void deleteKvList() { this->kvList_ = nullptr;};
    inline const vector<BatchPutDcdnKvRequestKvList> & kvList() const { DARABONBA_PTR_GET_CONST(kvList_, vector<BatchPutDcdnKvRequestKvList>) };
    inline vector<BatchPutDcdnKvRequestKvList> kvList() { DARABONBA_PTR_GET(kvList_, vector<BatchPutDcdnKvRequestKvList>) };
    inline BatchPutDcdnKvRequest& setKvList(const vector<BatchPutDcdnKvRequestKvList> & kvList) { DARABONBA_PTR_SET_VALUE(kvList_, kvList) };
    inline BatchPutDcdnKvRequest& setKvList(vector<BatchPutDcdnKvRequestKvList> && kvList) { DARABONBA_PTR_SET_RVALUE(kvList_, kvList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<BatchPutDcdnKvRequestKvList>> kvList_ = nullptr;
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
