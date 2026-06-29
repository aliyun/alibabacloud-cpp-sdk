// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTOREBRANCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RestoreBranchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreBranchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreBranchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RestoreBranchResponseBody() = default ;
    RestoreBranchResponseBody(const RestoreBranchResponseBody &) = default ;
    RestoreBranchResponseBody(RestoreBranchResponseBody &&) = default ;
    RestoreBranchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreBranchResponseBody() = default ;
    RestoreBranchResponseBody& operator=(const RestoreBranchResponseBody &) = default ;
    RestoreBranchResponseBody& operator=(RestoreBranchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->requestId_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline RestoreBranchResponseBody& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestoreBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The branch ID that uniquely identifies a Supabase branch.
    shared_ptr<string> branchId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
