// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVpdResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(SubnetIds, subnetIds_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpdResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(SubnetIds, subnetIds_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    CreateVpdResponseBodyContent() = default ;
    CreateVpdResponseBodyContent(const CreateVpdResponseBodyContent &) = default ;
    CreateVpdResponseBodyContent(CreateVpdResponseBodyContent &&) = default ;
    CreateVpdResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpdResponseBodyContent() = default ;
    CreateVpdResponseBodyContent& operator=(const CreateVpdResponseBodyContent &) = default ;
    CreateVpdResponseBodyContent& operator=(CreateVpdResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subnetIds_ == nullptr
        && return this->vpdId_ == nullptr; };
    // subnetIds Field Functions 
    bool hasSubnetIds() const { return this->subnetIds_ != nullptr;};
    void deleteSubnetIds() { this->subnetIds_ = nullptr;};
    inline const vector<string> & subnetIds() const { DARABONBA_PTR_GET_CONST(subnetIds_, vector<string>) };
    inline vector<string> subnetIds() { DARABONBA_PTR_GET(subnetIds_, vector<string>) };
    inline CreateVpdResponseBodyContent& setSubnetIds(const vector<string> & subnetIds) { DARABONBA_PTR_SET_VALUE(subnetIds_, subnetIds) };
    inline CreateVpdResponseBodyContent& setSubnetIds(vector<string> && subnetIds) { DARABONBA_PTR_SET_RVALUE(subnetIds_, subnetIds) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline CreateVpdResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // Lingjun subnet ID list
    std::shared_ptr<vector<string>> subnetIds_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
