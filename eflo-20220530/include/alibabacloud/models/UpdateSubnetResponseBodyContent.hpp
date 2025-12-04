// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBNETRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBNETRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateSubnetResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubnetResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubnetResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
    };
    UpdateSubnetResponseBodyContent() = default ;
    UpdateSubnetResponseBodyContent(const UpdateSubnetResponseBodyContent &) = default ;
    UpdateSubnetResponseBodyContent(UpdateSubnetResponseBodyContent &&) = default ;
    UpdateSubnetResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubnetResponseBodyContent() = default ;
    UpdateSubnetResponseBodyContent& operator=(const UpdateSubnetResponseBodyContent &) = default ;
    UpdateSubnetResponseBodyContent& operator=(UpdateSubnetResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subnetId_ == nullptr; };
    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline UpdateSubnetResponseBodyContent& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


  protected:
    // The subnet instance ID.
    std::shared_ptr<string> subnetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
