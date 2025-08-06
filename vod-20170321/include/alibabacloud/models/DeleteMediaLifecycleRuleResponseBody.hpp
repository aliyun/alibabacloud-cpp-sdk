// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIALIFECYCLERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIALIFECYCLERULERESPONSEBODY_HPP_
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
  class DeleteMediaLifecycleRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenRuleIds, forbiddenRuleIds_);
      DARABONBA_PTR_TO_JSON(NonExistRuleIds, nonExistRuleIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenRuleIds, forbiddenRuleIds_);
      DARABONBA_PTR_FROM_JSON(NonExistRuleIds, nonExistRuleIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMediaLifecycleRuleResponseBody() = default ;
    DeleteMediaLifecycleRuleResponseBody(const DeleteMediaLifecycleRuleResponseBody &) = default ;
    DeleteMediaLifecycleRuleResponseBody(DeleteMediaLifecycleRuleResponseBody &&) = default ;
    DeleteMediaLifecycleRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaLifecycleRuleResponseBody() = default ;
    DeleteMediaLifecycleRuleResponseBody& operator=(const DeleteMediaLifecycleRuleResponseBody &) = default ;
    DeleteMediaLifecycleRuleResponseBody& operator=(DeleteMediaLifecycleRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forbiddenRuleIds_ != nullptr
        && this->nonExistRuleIds_ != nullptr && this->requestId_ != nullptr; };
    // forbiddenRuleIds Field Functions 
    bool hasForbiddenRuleIds() const { return this->forbiddenRuleIds_ != nullptr;};
    void deleteForbiddenRuleIds() { this->forbiddenRuleIds_ = nullptr;};
    inline const vector<string> & forbiddenRuleIds() const { DARABONBA_PTR_GET_CONST(forbiddenRuleIds_, vector<string>) };
    inline vector<string> forbiddenRuleIds() { DARABONBA_PTR_GET(forbiddenRuleIds_, vector<string>) };
    inline DeleteMediaLifecycleRuleResponseBody& setForbiddenRuleIds(const vector<string> & forbiddenRuleIds) { DARABONBA_PTR_SET_VALUE(forbiddenRuleIds_, forbiddenRuleIds) };
    inline DeleteMediaLifecycleRuleResponseBody& setForbiddenRuleIds(vector<string> && forbiddenRuleIds) { DARABONBA_PTR_SET_RVALUE(forbiddenRuleIds_, forbiddenRuleIds) };


    // nonExistRuleIds Field Functions 
    bool hasNonExistRuleIds() const { return this->nonExistRuleIds_ != nullptr;};
    void deleteNonExistRuleIds() { this->nonExistRuleIds_ = nullptr;};
    inline const vector<string> & nonExistRuleIds() const { DARABONBA_PTR_GET_CONST(nonExistRuleIds_, vector<string>) };
    inline vector<string> nonExistRuleIds() { DARABONBA_PTR_GET(nonExistRuleIds_, vector<string>) };
    inline DeleteMediaLifecycleRuleResponseBody& setNonExistRuleIds(const vector<string> & nonExistRuleIds) { DARABONBA_PTR_SET_VALUE(nonExistRuleIds_, nonExistRuleIds) };
    inline DeleteMediaLifecycleRuleResponseBody& setNonExistRuleIds(vector<string> && nonExistRuleIds) { DARABONBA_PTR_SET_RVALUE(nonExistRuleIds_, nonExistRuleIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMediaLifecycleRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> forbiddenRuleIds_ = nullptr;
    std::shared_ptr<vector<string>> nonExistRuleIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
