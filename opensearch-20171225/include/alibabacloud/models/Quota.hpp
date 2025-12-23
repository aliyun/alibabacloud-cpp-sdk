// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTA_HPP_
#define ALIBABACLOUD_MODELS_QUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Quota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Quota& obj) { 
      DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(docSize, docSize_);
      DARABONBA_PTR_TO_JSON(orderType, orderType_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, Quota& obj) { 
      DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(docSize, docSize_);
      DARABONBA_PTR_FROM_JSON(orderType, orderType_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    Quota() = default ;
    Quota(const Quota &) = default ;
    Quota(Quota &&) = default ;
    Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Quota() = default ;
    Quota& operator=(const Quota &) = default ;
    Quota& operator=(Quota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->docSize_ == nullptr && return this->orderType_ == nullptr && return this->spec_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline int32_t computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
    inline Quota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // docSize Field Functions 
    bool hasDocSize() const { return this->docSize_ != nullptr;};
    void deleteDocSize() { this->docSize_ = nullptr;};
    inline int32_t docSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
    inline Quota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline Quota& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline Quota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    std::shared_ptr<int32_t> computeResource_ = nullptr;
    std::shared_ptr<int32_t> docSize_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
