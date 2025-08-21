// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MountInstanceSDGResponseBodyDataResultFailedItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class MountInstanceSDGResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MountInstanceSDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, MountInstanceSDGResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    MountInstanceSDGResponseBodyDataResult() = default ;
    MountInstanceSDGResponseBodyDataResult(const MountInstanceSDGResponseBodyDataResult &) = default ;
    MountInstanceSDGResponseBodyDataResult(MountInstanceSDGResponseBodyDataResult &&) = default ;
    MountInstanceSDGResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MountInstanceSDGResponseBodyDataResult() = default ;
    MountInstanceSDGResponseBodyDataResult& operator=(const MountInstanceSDGResponseBodyDataResult &) = default ;
    MountInstanceSDGResponseBodyDataResult& operator=(MountInstanceSDGResponseBodyDataResult &&) = default ;
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
    inline MountInstanceSDGResponseBodyDataResult& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems> & failedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems>) };
    inline vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems> failedItems() { DARABONBA_PTR_GET(failedItems_, vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems>) };
    inline MountInstanceSDGResponseBodyDataResult& setFailedItems(const vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline MountInstanceSDGResponseBodyDataResult& setFailedItems(vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline MountInstanceSDGResponseBodyDataResult& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of failed tasks.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // Details about failed tasks.
    std::shared_ptr<vector<Models::MountInstanceSDGResponseBodyDataResultFailedItems>> failedItems_ = nullptr;
    // The number of successful tasks.
    std::shared_ptr<int64_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
