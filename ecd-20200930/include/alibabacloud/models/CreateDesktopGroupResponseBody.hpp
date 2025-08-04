// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDesktopGroupResponseBody() = default ;
    CreateDesktopGroupResponseBody(const CreateDesktopGroupResponseBody &) = default ;
    CreateDesktopGroupResponseBody(CreateDesktopGroupResponseBody &&) = default ;
    CreateDesktopGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopGroupResponseBody() = default ;
    CreateDesktopGroupResponseBody& operator=(const CreateDesktopGroupResponseBody &) = default ;
    CreateDesktopGroupResponseBody& operator=(CreateDesktopGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopGroupId_ != nullptr
        && this->desktopGroupIds_ != nullptr && this->orderIds_ != nullptr && this->requestId_ != nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline CreateDesktopGroupResponseBody& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & desktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> desktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline CreateDesktopGroupResponseBody& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline CreateDesktopGroupResponseBody& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<string> & orderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<string>) };
    inline vector<string> orderIds() { DARABONBA_PTR_GET(orderIds_, vector<string>) };
    inline CreateDesktopGroupResponseBody& setOrderIds(const vector<string> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline CreateDesktopGroupResponseBody& setOrderIds(vector<string> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDesktopGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the shared group.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The IDs of the shared groups.
    std::shared_ptr<vector<string>> desktopGroupIds_ = nullptr;
    // The IDs of the orders.
    std::shared_ptr<vector<string>> orderIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
