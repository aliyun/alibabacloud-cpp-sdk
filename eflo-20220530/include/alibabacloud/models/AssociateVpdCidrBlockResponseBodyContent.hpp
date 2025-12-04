// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEVPDCIDRBLOCKRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEVPDCIDRBLOCKRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class AssociateVpdCidrBlockResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateVpdCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateVpdCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    AssociateVpdCidrBlockResponseBodyContent() = default ;
    AssociateVpdCidrBlockResponseBodyContent(const AssociateVpdCidrBlockResponseBodyContent &) = default ;
    AssociateVpdCidrBlockResponseBodyContent(AssociateVpdCidrBlockResponseBodyContent &&) = default ;
    AssociateVpdCidrBlockResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateVpdCidrBlockResponseBodyContent() = default ;
    AssociateVpdCidrBlockResponseBodyContent& operator=(const AssociateVpdCidrBlockResponseBodyContent &) = default ;
    AssociateVpdCidrBlockResponseBodyContent& operator=(AssociateVpdCidrBlockResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpdId_ == nullptr; };
    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline AssociateVpdCidrBlockResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The ID of the Lingjun CIDR block.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
