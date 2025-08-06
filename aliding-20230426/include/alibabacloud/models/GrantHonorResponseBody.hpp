// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTHONORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GRANTHONORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GrantHonorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantHonorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(failedUserIds, failedUserIds_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(successUserIds, successUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, GrantHonorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(failedUserIds, failedUserIds_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(successUserIds, successUserIds_);
    };
    GrantHonorResponseBody() = default ;
    GrantHonorResponseBody(const GrantHonorResponseBody &) = default ;
    GrantHonorResponseBody(GrantHonorResponseBody &&) = default ;
    GrantHonorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantHonorResponseBody() = default ;
    GrantHonorResponseBody& operator=(const GrantHonorResponseBody &) = default ;
    GrantHonorResponseBody& operator=(GrantHonorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedUserIds_ != nullptr
        && this->requestId_ != nullptr && this->successUserIds_ != nullptr; };
    // failedUserIds Field Functions 
    bool hasFailedUserIds() const { return this->failedUserIds_ != nullptr;};
    void deleteFailedUserIds() { this->failedUserIds_ = nullptr;};
    inline const vector<string> & failedUserIds() const { DARABONBA_PTR_GET_CONST(failedUserIds_, vector<string>) };
    inline vector<string> failedUserIds() { DARABONBA_PTR_GET(failedUserIds_, vector<string>) };
    inline GrantHonorResponseBody& setFailedUserIds(const vector<string> & failedUserIds) { DARABONBA_PTR_SET_VALUE(failedUserIds_, failedUserIds) };
    inline GrantHonorResponseBody& setFailedUserIds(vector<string> && failedUserIds) { DARABONBA_PTR_SET_RVALUE(failedUserIds_, failedUserIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GrantHonorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successUserIds Field Functions 
    bool hasSuccessUserIds() const { return this->successUserIds_ != nullptr;};
    void deleteSuccessUserIds() { this->successUserIds_ = nullptr;};
    inline const vector<string> & successUserIds() const { DARABONBA_PTR_GET_CONST(successUserIds_, vector<string>) };
    inline vector<string> successUserIds() { DARABONBA_PTR_GET(successUserIds_, vector<string>) };
    inline GrantHonorResponseBody& setSuccessUserIds(const vector<string> & successUserIds) { DARABONBA_PTR_SET_VALUE(successUserIds_, successUserIds) };
    inline GrantHonorResponseBody& setSuccessUserIds(vector<string> && successUserIds) { DARABONBA_PTR_SET_RVALUE(successUserIds_, successUserIds) };


  protected:
    std::shared_ptr<vector<string>> failedUserIds_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> successUserIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
