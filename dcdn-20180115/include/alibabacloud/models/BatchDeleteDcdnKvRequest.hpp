// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchDeleteDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchDeleteDcdnKvRequest() = default ;
    BatchDeleteDcdnKvRequest(const BatchDeleteDcdnKvRequest &) = default ;
    BatchDeleteDcdnKvRequest(BatchDeleteDcdnKvRequest &&) = default ;
    BatchDeleteDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDcdnKvRequest() = default ;
    BatchDeleteDcdnKvRequest& operator=(const BatchDeleteDcdnKvRequest &) = default ;
    BatchDeleteDcdnKvRequest& operator=(BatchDeleteDcdnKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keys_ != nullptr
        && this->namespace_ != nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline BatchDeleteDcdnKvRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline BatchDeleteDcdnKvRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> keys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
