// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSDGRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSDGRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeploySDGResponseBodyDataResultFailedItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeploySDGResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DeploySDGResponseBodyDataResult() = default ;
    DeploySDGResponseBodyDataResult(const DeploySDGResponseBodyDataResult &) = default ;
    DeploySDGResponseBodyDataResult(DeploySDGResponseBodyDataResult &&) = default ;
    DeploySDGResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySDGResponseBodyDataResult() = default ;
    DeploySDGResponseBodyDataResult& operator=(const DeploySDGResponseBodyDataResult &) = default ;
    DeploySDGResponseBodyDataResult& operator=(DeploySDGResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedCount_ == nullptr
        && return this->failedItems_ == nullptr && return this->successCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DeploySDGResponseBodyDataResult& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<Models::DeploySDGResponseBodyDataResultFailedItems> & failedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Models::DeploySDGResponseBodyDataResultFailedItems>) };
    inline vector<Models::DeploySDGResponseBodyDataResultFailedItems> failedItems() { DARABONBA_PTR_GET(failedItems_, vector<Models::DeploySDGResponseBodyDataResultFailedItems>) };
    inline DeploySDGResponseBodyDataResult& setFailedItems(const vector<Models::DeploySDGResponseBodyDataResultFailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline DeploySDGResponseBodyDataResult& setFailedItems(vector<Models::DeploySDGResponseBodyDataResultFailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline DeploySDGResponseBodyDataResult& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of failed tasks.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // Details of failed tasks.
    std::shared_ptr<vector<Models::DeploySDGResponseBodyDataResultFailedItems>> failedItems_ = nullptr;
    // The number of successful tasks.
    std::shared_ptr<int64_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
