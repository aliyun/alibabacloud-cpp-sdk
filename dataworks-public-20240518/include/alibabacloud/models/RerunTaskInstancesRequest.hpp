// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNTASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERUNTASKINSTANCESREQUEST_HPP_
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
  class RerunTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(UseLatestConfig, useLatestConfig_);
    };
    friend void from_json(const Darabonba::Json& j, RerunTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(UseLatestConfig, useLatestConfig_);
    };
    RerunTaskInstancesRequest() = default ;
    RerunTaskInstancesRequest(const RerunTaskInstancesRequest &) = default ;
    RerunTaskInstancesRequest(RerunTaskInstancesRequest &&) = default ;
    RerunTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunTaskInstancesRequest() = default ;
    RerunTaskInstancesRequest& operator=(const RerunTaskInstancesRequest &) = default ;
    RerunTaskInstancesRequest& operator=(RerunTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->ids_ == nullptr && this->useLatestConfig_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline RerunTaskInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline RerunTaskInstancesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline RerunTaskInstancesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // useLatestConfig Field Functions 
    bool hasUseLatestConfig() const { return this->useLatestConfig_ != nullptr;};
    void deleteUseLatestConfig() { this->useLatestConfig_ = nullptr;};
    inline bool getUseLatestConfig() const { DARABONBA_PTR_GET_DEFAULT(useLatestConfig_, false) };
    inline RerunTaskInstancesRequest& setUseLatestConfig(bool useLatestConfig) { DARABONBA_PTR_SET_VALUE(useLatestConfig_, useLatestConfig) };


  protected:
    // The remarks.
    shared_ptr<string> comment_ {};
    // The list of node instance IDs.
    shared_ptr<vector<int64_t>> ids_ {};
    shared_ptr<bool> useLatestConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
