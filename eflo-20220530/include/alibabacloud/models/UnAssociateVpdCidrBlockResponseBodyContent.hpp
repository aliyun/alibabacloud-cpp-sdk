// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATEVPDCIDRBLOCKRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATEVPDCIDRBLOCKRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UnAssociateVpdCidrBlockResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssociateVpdCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssociateVpdCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    UnAssociateVpdCidrBlockResponseBodyContent() = default ;
    UnAssociateVpdCidrBlockResponseBodyContent(const UnAssociateVpdCidrBlockResponseBodyContent &) = default ;
    UnAssociateVpdCidrBlockResponseBodyContent(UnAssociateVpdCidrBlockResponseBodyContent &&) = default ;
    UnAssociateVpdCidrBlockResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssociateVpdCidrBlockResponseBodyContent() = default ;
    UnAssociateVpdCidrBlockResponseBodyContent& operator=(const UnAssociateVpdCidrBlockResponseBodyContent &) = default ;
    UnAssociateVpdCidrBlockResponseBodyContent& operator=(UnAssociateVpdCidrBlockResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpdId_ == nullptr; };
    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline UnAssociateVpdCidrBlockResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The ID of the Lingjun CIDR block.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
