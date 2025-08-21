// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESDGRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESDGRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveInstanceSDGResponseBodyDataResultFailedItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveInstanceSDGResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstanceSDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstanceSDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    RemoveInstanceSDGResponseBodyDataResult() = default ;
    RemoveInstanceSDGResponseBodyDataResult(const RemoveInstanceSDGResponseBodyDataResult &) = default ;
    RemoveInstanceSDGResponseBodyDataResult(RemoveInstanceSDGResponseBodyDataResult &&) = default ;
    RemoveInstanceSDGResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstanceSDGResponseBodyDataResult() = default ;
    RemoveInstanceSDGResponseBodyDataResult& operator=(const RemoveInstanceSDGResponseBodyDataResult &) = default ;
    RemoveInstanceSDGResponseBodyDataResult& operator=(RemoveInstanceSDGResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedCount_ != nullptr
        && this->failedItems_ != nullptr && this->successCount_ != nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline RemoveInstanceSDGResponseBodyDataResult& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems> & failedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems>) };
    inline vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems> failedItems() { DARABONBA_PTR_GET(failedItems_, vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems>) };
    inline RemoveInstanceSDGResponseBodyDataResult& setFailedItems(const vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline RemoveInstanceSDGResponseBodyDataResult& setFailedItems(vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline RemoveInstanceSDGResponseBodyDataResult& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of failed tasks.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // Details about the failed tasks.
    std::shared_ptr<vector<Models::RemoveInstanceSDGResponseBodyDataResultFailedItems>> failedItems_ = nullptr;
    // The number of successful tasks.
    std::shared_ptr<int64_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
