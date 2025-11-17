// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPortalMenusResponseBody() = default ;
    ListPortalMenusResponseBody(const ListPortalMenusResponseBody &) = default ;
    ListPortalMenusResponseBody(ListPortalMenusResponseBody &&) = default ;
    ListPortalMenusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenusResponseBody() = default ;
    ListPortalMenusResponseBody& operator=(const ListPortalMenusResponseBody &) = default ;
    ListPortalMenusResponseBody& operator=(ListPortalMenusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPortalMenusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListPortalMenusResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPortalMenusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // A JSON string that levels the details of the portal menu list. Valid values:
    // 
    // *   menuType: the type of the menu.
    // 
    //     *   0: dashboard
    //     *   1: outer chain
    //     *   2: workbook
    //     *   4: directory folder
    //     *   5: form filling
    //     *   6: self-service data retrieval
    // 
    // *   menuId: menu ID
    // 
    // *   uri: ID or URL of the resource associated with the menu
    // 
    // *   showOnlyWithAccess: Authorized Only Visible
    // 
    // *   menuName: menu display name
    // 
    // *   dependentPermisson: whether the report resource associated with the menu has permissions
    // 
    // *   children: submenu
    std::shared_ptr<string> result_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
