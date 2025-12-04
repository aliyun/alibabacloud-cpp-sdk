// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVCCRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVCCRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateVccResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVccResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVccResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
    };
    UpdateVccResponseBodyContent() = default ;
    UpdateVccResponseBodyContent(const UpdateVccResponseBodyContent &) = default ;
    UpdateVccResponseBodyContent(UpdateVccResponseBodyContent &&) = default ;
    UpdateVccResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVccResponseBodyContent() = default ;
    UpdateVccResponseBodyContent& operator=(const UpdateVccResponseBodyContent &) = default ;
    UpdateVccResponseBodyContent& operator=(UpdateVccResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vccId_ == nullptr; };
    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline UpdateVccResponseBodyContent& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


  protected:
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
