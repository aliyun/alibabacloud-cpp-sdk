// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEAPPRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVEAPPRESOURCERESPONSEBODY_HPP_
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
  class MoveAppResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveAppResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResourceIds, failedResourceIds_);
      DARABONBA_PTR_TO_JSON(NonExistResourceIds, nonExistResourceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveAppResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResourceIds, failedResourceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistResourceIds, nonExistResourceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MoveAppResourceResponseBody() = default ;
    MoveAppResourceResponseBody(const MoveAppResourceResponseBody &) = default ;
    MoveAppResourceResponseBody(MoveAppResourceResponseBody &&) = default ;
    MoveAppResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveAppResourceResponseBody() = default ;
    MoveAppResourceResponseBody& operator=(const MoveAppResourceResponseBody &) = default ;
    MoveAppResourceResponseBody& operator=(MoveAppResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResourceIds_ != nullptr
        && this->nonExistResourceIds_ != nullptr && this->requestId_ != nullptr; };
    // failedResourceIds Field Functions 
    bool hasFailedResourceIds() const { return this->failedResourceIds_ != nullptr;};
    void deleteFailedResourceIds() { this->failedResourceIds_ = nullptr;};
    inline const vector<string> & failedResourceIds() const { DARABONBA_PTR_GET_CONST(failedResourceIds_, vector<string>) };
    inline vector<string> failedResourceIds() { DARABONBA_PTR_GET(failedResourceIds_, vector<string>) };
    inline MoveAppResourceResponseBody& setFailedResourceIds(const vector<string> & failedResourceIds) { DARABONBA_PTR_SET_VALUE(failedResourceIds_, failedResourceIds) };
    inline MoveAppResourceResponseBody& setFailedResourceIds(vector<string> && failedResourceIds) { DARABONBA_PTR_SET_RVALUE(failedResourceIds_, failedResourceIds) };


    // nonExistResourceIds Field Functions 
    bool hasNonExistResourceIds() const { return this->nonExistResourceIds_ != nullptr;};
    void deleteNonExistResourceIds() { this->nonExistResourceIds_ = nullptr;};
    inline const vector<string> & nonExistResourceIds() const { DARABONBA_PTR_GET_CONST(nonExistResourceIds_, vector<string>) };
    inline vector<string> nonExistResourceIds() { DARABONBA_PTR_GET(nonExistResourceIds_, vector<string>) };
    inline MoveAppResourceResponseBody& setNonExistResourceIds(const vector<string> & nonExistResourceIds) { DARABONBA_PTR_SET_VALUE(nonExistResourceIds_, nonExistResourceIds) };
    inline MoveAppResourceResponseBody& setNonExistResourceIds(vector<string> && nonExistResourceIds) { DARABONBA_PTR_SET_RVALUE(nonExistResourceIds_, nonExistResourceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveAppResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the resources that failed to be migrated.
    std::shared_ptr<vector<string>> failedResourceIds_ = nullptr;
    // The IDs of the resources that were not found.
    std::shared_ptr<vector<string>> nonExistResourceIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
