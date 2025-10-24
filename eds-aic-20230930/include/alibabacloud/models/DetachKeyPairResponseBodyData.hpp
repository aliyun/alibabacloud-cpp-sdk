// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DetachKeyPairResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetachedInstanceIds, detachedInstanceIds_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachedInstanceIds, detachedInstanceIds_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DetachKeyPairResponseBodyData() = default ;
    DetachKeyPairResponseBodyData(const DetachKeyPairResponseBodyData &) = default ;
    DetachKeyPairResponseBodyData(DetachKeyPairResponseBodyData &&) = default ;
    DetachKeyPairResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairResponseBodyData() = default ;
    DetachKeyPairResponseBodyData& operator=(const DetachKeyPairResponseBodyData &) = default ;
    DetachKeyPairResponseBodyData& operator=(DetachKeyPairResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detachedInstanceIds_ == nullptr
        && return this->failCount_ == nullptr && return this->keyPairId_ == nullptr && return this->totalCount_ == nullptr; };
    // detachedInstanceIds Field Functions 
    bool hasDetachedInstanceIds() const { return this->detachedInstanceIds_ != nullptr;};
    void deleteDetachedInstanceIds() { this->detachedInstanceIds_ = nullptr;};
    inline const vector<string> & detachedInstanceIds() const { DARABONBA_PTR_GET_CONST(detachedInstanceIds_, vector<string>) };
    inline vector<string> detachedInstanceIds() { DARABONBA_PTR_GET(detachedInstanceIds_, vector<string>) };
    inline DetachKeyPairResponseBodyData& setDetachedInstanceIds(const vector<string> & detachedInstanceIds) { DARABONBA_PTR_SET_VALUE(detachedInstanceIds_, detachedInstanceIds) };
    inline DetachKeyPairResponseBodyData& setDetachedInstanceIds(vector<string> && detachedInstanceIds) { DARABONBA_PTR_SET_RVALUE(detachedInstanceIds_, detachedInstanceIds) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DetachKeyPairResponseBodyData& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DetachKeyPairResponseBodyData& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DetachKeyPairResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IDs of the cloud phone instances from which the ADB key pair is successfully detached.
    std::shared_ptr<vector<string>> detachedInstanceIds_ = nullptr;
    // The number of the cloud phone instances from which the ADB key pair failed to be detached.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The ID of the ADB key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The total number of the cloud phone instances.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
