// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUESTELECPRICE_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBREQUESTELECPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateEssOptJobRequestElecPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEssOptJobRequestElecPrice& obj) { 
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEssOptJobRequestElecPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    CreateEssOptJobRequestElecPrice() = default ;
    CreateEssOptJobRequestElecPrice(const CreateEssOptJobRequestElecPrice &) = default ;
    CreateEssOptJobRequestElecPrice(CreateEssOptJobRequestElecPrice &&) = default ;
    CreateEssOptJobRequestElecPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEssOptJobRequestElecPrice() = default ;
    CreateEssOptJobRequestElecPrice& operator=(const CreateEssOptJobRequestElecPrice &) = default ;
    CreateEssOptJobRequestElecPrice& operator=(CreateEssOptJobRequestElecPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataTime_ == nullptr
        && return this->price_ == nullptr; };
    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline CreateEssOptJobRequestElecPrice& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline CreateEssOptJobRequestElecPrice& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<string> dataTime_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
