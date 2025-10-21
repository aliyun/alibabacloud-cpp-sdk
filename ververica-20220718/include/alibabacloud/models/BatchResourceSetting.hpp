// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BasicResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class BatchResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_TO_JSON(maxSlot, maxSlot_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_FROM_JSON(maxSlot, maxSlot_);
    };
    BatchResourceSetting() = default ;
    BatchResourceSetting(const BatchResourceSetting &) = default ;
    BatchResourceSetting(BatchResourceSetting &&) = default ;
    BatchResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResourceSetting() = default ;
    BatchResourceSetting& operator=(const BatchResourceSetting &) = default ;
    BatchResourceSetting& operator=(BatchResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicResourceSetting_ == nullptr
        && return this->maxSlot_ == nullptr; };
    // basicResourceSetting Field Functions 
    bool hasBasicResourceSetting() const { return this->basicResourceSetting_ != nullptr;};
    void deleteBasicResourceSetting() { this->basicResourceSetting_ = nullptr;};
    inline const BasicResourceSetting & basicResourceSetting() const { DARABONBA_PTR_GET_CONST(basicResourceSetting_, BasicResourceSetting) };
    inline BasicResourceSetting basicResourceSetting() { DARABONBA_PTR_GET(basicResourceSetting_, BasicResourceSetting) };
    inline BatchResourceSetting& setBasicResourceSetting(const BasicResourceSetting & basicResourceSetting) { DARABONBA_PTR_SET_VALUE(basicResourceSetting_, basicResourceSetting) };
    inline BatchResourceSetting& setBasicResourceSetting(BasicResourceSetting && basicResourceSetting) { DARABONBA_PTR_SET_RVALUE(basicResourceSetting_, basicResourceSetting) };


    // maxSlot Field Functions 
    bool hasMaxSlot() const { return this->maxSlot_ != nullptr;};
    void deleteMaxSlot() { this->maxSlot_ = nullptr;};
    inline int64_t maxSlot() const { DARABONBA_PTR_GET_DEFAULT(maxSlot_, 0L) };
    inline BatchResourceSetting& setMaxSlot(int64_t maxSlot) { DARABONBA_PTR_SET_VALUE(maxSlot_, maxSlot) };


  protected:
    std::shared_ptr<BasicResourceSetting> basicResourceSetting_ = nullptr;
    std::shared_ptr<int64_t> maxSlot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
