// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUCCESSTASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSUCCESSTASKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class SetSuccessTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSuccessTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, SetSuccessTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    SetSuccessTaskInstancesRequest() = default ;
    SetSuccessTaskInstancesRequest(const SetSuccessTaskInstancesRequest &) = default ;
    SetSuccessTaskInstancesRequest(SetSuccessTaskInstancesRequest &&) = default ;
    SetSuccessTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSuccessTaskInstancesRequest() = default ;
    SetSuccessTaskInstancesRequest& operator=(const SetSuccessTaskInstancesRequest &) = default ;
    SetSuccessTaskInstancesRequest& operator=(SetSuccessTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->ids_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline SetSuccessTaskInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline SetSuccessTaskInstancesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline SetSuccessTaskInstancesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // Remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID list of the task instance.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
