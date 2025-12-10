// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGORITHMTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALGORITHMTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgorithmTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgorithmTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Tree, tree_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgorithmTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Tree, tree_);
    };
    GetAlgorithmTreeResponseBody() = default ;
    GetAlgorithmTreeResponseBody(const GetAlgorithmTreeResponseBody &) = default ;
    GetAlgorithmTreeResponseBody(GetAlgorithmTreeResponseBody &&) = default ;
    GetAlgorithmTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgorithmTreeResponseBody() = default ;
    GetAlgorithmTreeResponseBody& operator=(const GetAlgorithmTreeResponseBody &) = default ;
    GetAlgorithmTreeResponseBody& operator=(GetAlgorithmTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->timestamp_ == nullptr && return this->tree_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlgorithmTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetAlgorithmTreeResponseBody& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // tree Field Functions 
    bool hasTree() const { return this->tree_ != nullptr;};
    void deleteTree() { this->tree_ = nullptr;};
    inline const vector<Darabonba::Json> & tree() const { DARABONBA_PTR_GET_CONST(tree_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> tree() { DARABONBA_PTR_GET(tree_, vector<Darabonba::Json>) };
    inline GetAlgorithmTreeResponseBody& setTree(const vector<Darabonba::Json> & tree) { DARABONBA_PTR_SET_VALUE(tree_, tree) };
    inline GetAlgorithmTreeResponseBody& setTree(vector<Darabonba::Json> && tree) { DARABONBA_PTR_SET_RVALUE(tree_, tree) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> tree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
