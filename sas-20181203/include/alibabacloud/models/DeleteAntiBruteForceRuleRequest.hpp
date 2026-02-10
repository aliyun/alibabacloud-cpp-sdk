// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEANTIBRUTEFORCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEANTIBRUTEFORCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteAntiBruteForceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DeleteAntiBruteForceRuleRequest() = default ;
    DeleteAntiBruteForceRuleRequest(const DeleteAntiBruteForceRuleRequest &) = default ;
    DeleteAntiBruteForceRuleRequest(DeleteAntiBruteForceRuleRequest &&) = default ;
    DeleteAntiBruteForceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAntiBruteForceRuleRequest() = default ;
    DeleteAntiBruteForceRuleRequest& operator=(const DeleteAntiBruteForceRuleRequest &) = default ;
    DeleteAntiBruteForceRuleRequest& operator=(DeleteAntiBruteForceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DeleteAntiBruteForceRuleRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DeleteAntiBruteForceRuleRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // The IDs of the defense rules against brute-force attacks to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> ids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
