// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckResourceStockResponseBodyResourceStockModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CheckResourceStockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourceStockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceStockModels, resourceStockModels_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourceStockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceStockModels, resourceStockModels_);
    };
    CheckResourceStockResponseBody() = default ;
    CheckResourceStockResponseBody(const CheckResourceStockResponseBody &) = default ;
    CheckResourceStockResponseBody(CheckResourceStockResponseBody &&) = default ;
    CheckResourceStockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourceStockResponseBody() = default ;
    CheckResourceStockResponseBody& operator=(const CheckResourceStockResponseBody &) = default ;
    CheckResourceStockResponseBody& operator=(CheckResourceStockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceStockModels_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckResourceStockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceStockModels Field Functions 
    bool hasResourceStockModels() const { return this->resourceStockModels_ != nullptr;};
    void deleteResourceStockModels() { this->resourceStockModels_ = nullptr;};
    inline const vector<CheckResourceStockResponseBodyResourceStockModels> & resourceStockModels() const { DARABONBA_PTR_GET_CONST(resourceStockModels_, vector<CheckResourceStockResponseBodyResourceStockModels>) };
    inline vector<CheckResourceStockResponseBodyResourceStockModels> resourceStockModels() { DARABONBA_PTR_GET(resourceStockModels_, vector<CheckResourceStockResponseBodyResourceStockModels>) };
    inline CheckResourceStockResponseBody& setResourceStockModels(const vector<CheckResourceStockResponseBodyResourceStockModels> & resourceStockModels) { DARABONBA_PTR_SET_VALUE(resourceStockModels_, resourceStockModels) };
    inline CheckResourceStockResponseBody& setResourceStockModels(vector<CheckResourceStockResponseBodyResourceStockModels> && resourceStockModels) { DARABONBA_PTR_SET_RVALUE(resourceStockModels_, resourceStockModels) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of resource inventory.
    std::shared_ptr<vector<CheckResourceStockResponseBodyResourceStockModels>> resourceStockModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
