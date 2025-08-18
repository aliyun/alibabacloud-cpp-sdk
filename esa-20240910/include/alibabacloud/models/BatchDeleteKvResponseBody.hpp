// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEKVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEKVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchDeleteKvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteKvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailKeys, failKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessKeys, successKeys_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteKvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailKeys, failKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessKeys, successKeys_);
    };
    BatchDeleteKvResponseBody() = default ;
    BatchDeleteKvResponseBody(const BatchDeleteKvResponseBody &) = default ;
    BatchDeleteKvResponseBody(BatchDeleteKvResponseBody &&) = default ;
    BatchDeleteKvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteKvResponseBody() = default ;
    BatchDeleteKvResponseBody& operator=(const BatchDeleteKvResponseBody &) = default ;
    BatchDeleteKvResponseBody& operator=(BatchDeleteKvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failKeys_ != nullptr
        && this->requestId_ != nullptr && this->successKeys_ != nullptr; };
    // failKeys Field Functions 
    bool hasFailKeys() const { return this->failKeys_ != nullptr;};
    void deleteFailKeys() { this->failKeys_ = nullptr;};
    inline const vector<string> & failKeys() const { DARABONBA_PTR_GET_CONST(failKeys_, vector<string>) };
    inline vector<string> failKeys() { DARABONBA_PTR_GET(failKeys_, vector<string>) };
    inline BatchDeleteKvResponseBody& setFailKeys(const vector<string> & failKeys) { DARABONBA_PTR_SET_VALUE(failKeys_, failKeys) };
    inline BatchDeleteKvResponseBody& setFailKeys(vector<string> && failKeys) { DARABONBA_PTR_SET_RVALUE(failKeys_, failKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteKvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successKeys Field Functions 
    bool hasSuccessKeys() const { return this->successKeys_ != nullptr;};
    void deleteSuccessKeys() { this->successKeys_ = nullptr;};
    inline const vector<string> & successKeys() const { DARABONBA_PTR_GET_CONST(successKeys_, vector<string>) };
    inline vector<string> successKeys() { DARABONBA_PTR_GET(successKeys_, vector<string>) };
    inline BatchDeleteKvResponseBody& setSuccessKeys(const vector<string> & successKeys) { DARABONBA_PTR_SET_VALUE(successKeys_, successKeys) };
    inline BatchDeleteKvResponseBody& setSuccessKeys(vector<string> && successKeys) { DARABONBA_PTR_SET_RVALUE(successKeys_, successKeys) };


  protected:
    // The keys that failed to be deleted.
    std::shared_ptr<vector<string>> failKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The keys that are deleted.
    std::shared_ptr<vector<string>> successKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
