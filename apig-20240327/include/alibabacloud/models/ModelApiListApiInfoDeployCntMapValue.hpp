// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELAPILISTAPIINFODEPLOYCNTMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODELAPILISTAPIINFODEPLOYCNTMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ModelApiListApiInfoDeployCntMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelApiListApiInfoDeployCntMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(deployedCnt, deployedCnt_);
      DARABONBA_PTR_TO_JSON(cnt, cnt_);
    };
    friend void from_json(const Darabonba::Json& j, ModelApiListApiInfoDeployCntMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(deployedCnt, deployedCnt_);
      DARABONBA_PTR_FROM_JSON(cnt, cnt_);
    };
    ModelApiListApiInfoDeployCntMapValue() = default ;
    ModelApiListApiInfoDeployCntMapValue(const ModelApiListApiInfoDeployCntMapValue &) = default ;
    ModelApiListApiInfoDeployCntMapValue(ModelApiListApiInfoDeployCntMapValue &&) = default ;
    ModelApiListApiInfoDeployCntMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelApiListApiInfoDeployCntMapValue() = default ;
    ModelApiListApiInfoDeployCntMapValue& operator=(const ModelApiListApiInfoDeployCntMapValue &) = default ;
    ModelApiListApiInfoDeployCntMapValue& operator=(ModelApiListApiInfoDeployCntMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedCnt_ == nullptr
        && this->cnt_ == nullptr; };
    // deployedCnt Field Functions 
    bool hasDeployedCnt() const { return this->deployedCnt_ != nullptr;};
    void deleteDeployedCnt() { this->deployedCnt_ = nullptr;};
    inline int64_t getDeployedCnt() const { DARABONBA_PTR_GET_DEFAULT(deployedCnt_, 0L) };
    inline ModelApiListApiInfoDeployCntMapValue& setDeployedCnt(int64_t deployedCnt) { DARABONBA_PTR_SET_VALUE(deployedCnt_, deployedCnt) };


    // cnt Field Functions 
    bool hasCnt() const { return this->cnt_ != nullptr;};
    void deleteCnt() { this->cnt_ = nullptr;};
    inline int64_t getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0L) };
    inline ModelApiListApiInfoDeployCntMapValue& setCnt(int64_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


  protected:
    // The number of deployed APIs.
    shared_ptr<int64_t> deployedCnt_ {};
    // The total number of APIs.
    shared_ptr<int64_t> cnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
