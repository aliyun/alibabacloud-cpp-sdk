// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKYUUBISERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEKYUUBISERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateKyuubiServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKyuubiServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kyuubiServiceId, kyuubiServiceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKyuubiServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kyuubiServiceId, kyuubiServiceId_);
    };
    CreateKyuubiServiceResponseBodyData() = default ;
    CreateKyuubiServiceResponseBodyData(const CreateKyuubiServiceResponseBodyData &) = default ;
    CreateKyuubiServiceResponseBodyData(CreateKyuubiServiceResponseBodyData &&) = default ;
    CreateKyuubiServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKyuubiServiceResponseBodyData() = default ;
    CreateKyuubiServiceResponseBodyData& operator=(const CreateKyuubiServiceResponseBodyData &) = default ;
    CreateKyuubiServiceResponseBodyData& operator=(CreateKyuubiServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kyuubiServiceId_ == nullptr; };
    // kyuubiServiceId Field Functions 
    bool hasKyuubiServiceId() const { return this->kyuubiServiceId_ != nullptr;};
    void deleteKyuubiServiceId() { this->kyuubiServiceId_ = nullptr;};
    inline string kyuubiServiceId() const { DARABONBA_PTR_GET_DEFAULT(kyuubiServiceId_, "") };
    inline CreateKyuubiServiceResponseBodyData& setKyuubiServiceId(string kyuubiServiceId) { DARABONBA_PTR_SET_VALUE(kyuubiServiceId_, kyuubiServiceId) };


  protected:
    // Kyuubi Service ID。
    std::shared_ptr<string> kyuubiServiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
