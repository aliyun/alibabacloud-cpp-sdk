// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProductInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class QueryProductInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryProductInstanceListResponseBody() = default ;
    QueryProductInstanceListResponseBody(const QueryProductInstanceListResponseBody &) = default ;
    QueryProductInstanceListResponseBody(QueryProductInstanceListResponseBody &&) = default ;
    QueryProductInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductInstanceListResponseBody() = default ;
    QueryProductInstanceListResponseBody& operator=(const QueryProductInstanceListResponseBody &) = default ;
    QueryProductInstanceListResponseBody& operator=(QueryProductInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ProductInstance> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ProductInstance>) };
    inline vector<ProductInstance> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<ProductInstance>) };
    inline QueryProductInstanceListResponseBody& setInstanceList(const vector<ProductInstance> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline QueryProductInstanceListResponseBody& setInstanceList(vector<ProductInstance> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryProductInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ProductInstance>> instanceList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
