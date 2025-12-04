// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateVpdResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    UpdateVpdResponseBodyContent() = default ;
    UpdateVpdResponseBodyContent(const UpdateVpdResponseBodyContent &) = default ;
    UpdateVpdResponseBodyContent(UpdateVpdResponseBodyContent &&) = default ;
    UpdateVpdResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpdResponseBodyContent() = default ;
    UpdateVpdResponseBodyContent& operator=(const UpdateVpdResponseBodyContent &) = default ;
    UpdateVpdResponseBodyContent& operator=(UpdateVpdResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpdId_ == nullptr; };
    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline UpdateVpdResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The ID of the VPD instance.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
