// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVECOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApproveCommandsResponseBodyApproveCommands.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListApproveCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApproveCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveCommands, approveCommands_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApproveCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveCommands, approveCommands_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApproveCommandsResponseBody() = default ;
    ListApproveCommandsResponseBody(const ListApproveCommandsResponseBody &) = default ;
    ListApproveCommandsResponseBody(ListApproveCommandsResponseBody &&) = default ;
    ListApproveCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApproveCommandsResponseBody() = default ;
    ListApproveCommandsResponseBody& operator=(const ListApproveCommandsResponseBody &) = default ;
    ListApproveCommandsResponseBody& operator=(ListApproveCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveCommands_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // approveCommands Field Functions 
    bool hasApproveCommands() const { return this->approveCommands_ != nullptr;};
    void deleteApproveCommands() { this->approveCommands_ = nullptr;};
    inline const vector<ListApproveCommandsResponseBodyApproveCommands> & approveCommands() const { DARABONBA_PTR_GET_CONST(approveCommands_, vector<ListApproveCommandsResponseBodyApproveCommands>) };
    inline vector<ListApproveCommandsResponseBodyApproveCommands> approveCommands() { DARABONBA_PTR_GET(approveCommands_, vector<ListApproveCommandsResponseBodyApproveCommands>) };
    inline ListApproveCommandsResponseBody& setApproveCommands(const vector<ListApproveCommandsResponseBodyApproveCommands> & approveCommands) { DARABONBA_PTR_SET_VALUE(approveCommands_, approveCommands) };
    inline ListApproveCommandsResponseBody& setApproveCommands(vector<ListApproveCommandsResponseBodyApproveCommands> && approveCommands) { DARABONBA_PTR_SET_RVALUE(approveCommands_, approveCommands) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApproveCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApproveCommandsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The commands to be reviewed.
    std::shared_ptr<vector<ListApproveCommandsResponseBodyApproveCommands>> approveCommands_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of commands to be reviewed.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
