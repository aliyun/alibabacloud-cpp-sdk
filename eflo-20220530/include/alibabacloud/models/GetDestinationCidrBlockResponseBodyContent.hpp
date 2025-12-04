// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETDESTINATIONCIDRBLOCKRESPONSEBODYCONTENT_HPP_
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
  class GetDestinationCidrBlockResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDestinationCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, GetDestinationCidrBlockResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
    };
    GetDestinationCidrBlockResponseBodyContent() = default ;
    GetDestinationCidrBlockResponseBodyContent(const GetDestinationCidrBlockResponseBodyContent &) = default ;
    GetDestinationCidrBlockResponseBodyContent(GetDestinationCidrBlockResponseBodyContent &&) = default ;
    GetDestinationCidrBlockResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDestinationCidrBlockResponseBodyContent() = default ;
    GetDestinationCidrBlockResponseBodyContent& operator=(const GetDestinationCidrBlockResponseBodyContent &) = default ;
    GetDestinationCidrBlockResponseBodyContent& operator=(GetDestinationCidrBlockResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline const vector<string> & destinationCidrBlock() const { DARABONBA_PTR_GET_CONST(destinationCidrBlock_, vector<string>) };
    inline vector<string> destinationCidrBlock() { DARABONBA_PTR_GET(destinationCidrBlock_, vector<string>) };
    inline GetDestinationCidrBlockResponseBodyContent& setDestinationCidrBlock(const vector<string> & destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };
    inline GetDestinationCidrBlockResponseBodyContent& setDestinationCidrBlock(vector<string> && destinationCidrBlock) { DARABONBA_PTR_SET_RVALUE(destinationCidrBlock_, destinationCidrBlock) };


  protected:
    // List of destination CIDR block information for the current network instance
    std::shared_ptr<vector<string>> destinationCidrBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
