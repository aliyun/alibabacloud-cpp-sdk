// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAppPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAppPolicyResponseBody() = default ;
    DeleteAppPolicyResponseBody(const DeleteAppPolicyResponseBody &) = default ;
    DeleteAppPolicyResponseBody(DeleteAppPolicyResponseBody &&) = default ;
    DeleteAppPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppPolicyResponseBody() = default ;
    DeleteAppPolicyResponseBody& operator=(const DeleteAppPolicyResponseBody &) = default ;
    DeleteAppPolicyResponseBody& operator=(DeleteAppPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonExistPolicyNames_ != nullptr
        && this->requestId_ != nullptr; };
    // nonExistPolicyNames Field Functions 
    bool hasNonExistPolicyNames() const { return this->nonExistPolicyNames_ != nullptr;};
    void deleteNonExistPolicyNames() { this->nonExistPolicyNames_ = nullptr;};
    inline const vector<string> & nonExistPolicyNames() const { DARABONBA_PTR_GET_CONST(nonExistPolicyNames_, vector<string>) };
    inline vector<string> nonExistPolicyNames() { DARABONBA_PTR_GET(nonExistPolicyNames_, vector<string>) };
    inline DeleteAppPolicyResponseBody& setNonExistPolicyNames(const vector<string> & nonExistPolicyNames) { DARABONBA_PTR_SET_VALUE(nonExistPolicyNames_, nonExistPolicyNames) };
    inline DeleteAppPolicyResponseBody& setNonExistPolicyNames(vector<string> && nonExistPolicyNames) { DARABONBA_PTR_SET_RVALUE(nonExistPolicyNames_, nonExistPolicyNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> nonExistPolicyNames_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
